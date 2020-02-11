#include "media.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "OnvifMediaLib/soap/onvifmedia.nsmap"
#include "OnvifMediaLib/soap/onvifmediaMediaBindingProxy.h"
#include "authority.h"

#pragma execution_characterset("utf-8")

Media::Media()
{

}

Media::~Media()
{

}
QVector<std::string>  Media::getProfileTokens(const char * mediaAddr) {
    QVector<std::string> tokens;
    MediaBindingProxy p;
    _trt__GetProfiles in;
    _trt__GetProfilesResponse out;

    struct soap *soap = &p;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (p.GetProfiles(mediaAddr, NULL, &in, out) == SOAP_OK) {
        //ok
        std::vector<tt__Profile* >  profiles = out.Profiles;
        for(int i =0;i< profiles.size(); ++i){
            tokens.append(profiles.at(i)->token);
            qDebug("profiles.at[%d] %s\n", i, profiles.at(i)->token.data());
            qDebug("profiles[%d].VideoSourceConfiguration.token=%s\n", i,
                   out.Profiles.at(i)->VideoSourceConfiguration->token.data());
        }

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }
    return tokens;
}

int  Media::getVideoSourceToken(int profileIndex,const char* mediaAddr, std::string& videoSourceToken)
{

    QVector<std::string> tokens;
    MediaBindingProxy p;
    _trt__GetProfiles in;
    _trt__GetProfilesResponse out;

    struct soap *soap = &p;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (p.GetProfiles(mediaAddr, NULL, &in, out) == SOAP_OK) {
        std::vector<tt__Profile* >  profiles = out.Profiles;
        if (profileIndex>=0 && profileIndex< profiles.size()){
            videoSourceToken =out.Profiles.at(profileIndex)->VideoSourceConfiguration->token.data();
            return 0;
        }

    } else {
        p.soap_print_fault(stderr);
    }
    return -1;
}

int Media::GetVideoSourceConfigurationToken(const char* mediaAddr,std::string videoSourceToken, std::string& videoSourceConfigToken)
{
    QVector<std::string> tokens;
    MediaBindingProxy p;
    _trt__GetVideoSourceConfiguration in;
    _trt__GetVideoSourceConfigurationResponse out;
    char soap_action[]="http://www.onvif.org/ver10/deviceio/wsdl/GetVideoSourceConfiguration";

    struct soap *soap = &p;
    soap_set_sent_logfile(soap, "./log/vscToken_Sent.log");
    soap_set_recv_logfile(soap, "./log/vscToken_Recv.log");
    in.ConfigurationToken = videoSourceToken;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (p.GetVideoSourceConfiguration(mediaAddr, NULL, &in, out) == SOAP_OK) {
        videoSourceConfigToken = out.Configuration->token;
          return 0;
    } else {
        p.soap_print_fault(stderr);
    }

    return -1;
}


std::string Media::getStreamURL(const char* mediaAddr, std::string profileToken) {

    std::string uri;
    qDebug() << "media service test: getStreamURL";

    MediaBindingProxy p;

    _trt__GetStreamUri in;
    _trt__GetStreamUriResponse out;

    in.ProfileToken = profileToken;

    if (p.GetStreamUri(mediaAddr, NULL, &in, out) == SOAP_OK) {
        //ok
        tt__MediaUri * mediaUri = out.MediaUri;
        uri = mediaUri->Uri;

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return uri ;
}



string Media::createOSD(const char *mediaAddr,string profileToken,string videoSourceToken)
{


    MediaBindingProxy pMedia;
    struct soap *soap = &pMedia;
    string videoSourceConfigToken;
    soap_set_sent_logfile(soap, "./log/createOSD_Sent.log");
    soap_set_recv_logfile(soap, "./log/createOSD_Recv.log");

    std::cout<< "profileToken=="<<profileToken<<"\n";
    std::cout<<"videoSourceToken=="<<videoSourceToken<<"\n";

   //鉴权并发起GetVideoSourceConfiguration请求
    int result=GetVideoSourceConfigurationToken(mediaAddr,videoSourceToken,videoSourceConfigToken);
    if (result != 0){
        qDebug() << "GetVideoSourceConfigurationToken 失败"<< endl;
        return "";
    }
   qDebug() << "videoSourceConfigToken= "<< QString::fromStdString(videoSourceConfigToken)<<endl;

     tt__OSDConfiguration OSD;
     OSD.Image = NULL;
     OSD.Extension=NULL;

    //设置tt__OSDConfiguration
    OSD.token = "text_1_0001";//profileToken;"text_1_0001";
    OSD.Type = tt__OSDType__Text;

    //设置VideoSourceConfigurationToken
    tt__OSDReference VideoSourceConfigurationToken ;
    VideoSourceConfigurationToken.__item = videoSourceConfigToken;//videoConf_rep.Configuration->token;
    OSD.VideoSourceConfigurationToken = &VideoSourceConfigurationToken;

    tt__OSDPosConfiguration position; //设置position
    tt__Vector pos;// todo
    float x = -1;
    float y = 0;
    pos.x = &x;
    pos.y = &y;
    position.Pos = &pos;
    position.Type = tt__OSDType__Text;
    string Postype = "Custom";
    position.Type = Postype;
    OSD.Position = &position;

    //设置TextString()
    tt__OSDTextConfiguration textConf;
    string text = "toMixData";//再设置textConf.PlainText 中文，test \n PM2.5=100吨 \n S0=10t
    textConf.PlainText = &text;
    //int fontSize = 25; //然后设置textConf.fontSize
    //textConf.FontSize =&fontSize ;
    OSD.TextString = &textConf;//把textConf赋值给OSD.TextString


    //鉴权并发起设置OSD命令
    soap_set_mode(soap, SOAP_C_UTFSTRING);
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _trt__CreateOSD creOSD_req;
    _trt__CreateOSDResponse creOSD_rep;
    creOSD_req.OSD = &OSD;
    int ret = pMedia.CreateOSD(mediaAddr, NULL, &creOSD_req, creOSD_rep);
    if (ret != SOAP_OK){
        qDebug() << "Greate OSD 失败"<<endl;
        return "";
    }

    qDebug() <<"createOSD返回OSDToken为：" << creOSD_rep.OSDToken.c_str() << endl;
    return creOSD_rep.OSDToken.c_str();
}


int Media::setOSD(const char *mediaAddr,string profileToken,string videoSourceToken,string OSDToken)
{
    MediaBindingProxy pMedia;
    struct soap *soap = &pMedia;
    string videoSourceConfigToken;

    soap_set_sent_logfile(soap, "./log/setOSD_Sent.log");
    soap_set_recv_logfile(soap, "./log/setOSD_Recv.log");

    tt__OSDConfiguration OSD;

    //鉴权并发起GetVideoSourceConfiguration请求
    /*
    _trt__GetVideoSourceConfigurationResponse videoConf_rep;
    _trt__GetVideoSourceConfiguration videoConf;
    videoConf.ConfigurationToken =videoSourceToken;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    int result = pMedia.GetVideoSourceConfiguration(mediaAddr,NULL,&videoConf, videoConf_rep);
    if (result != SOAP_OK){
        qDebug() << "GetVideoSourceConfiguration 失败"<< endl;
        return -1;
    }
*/

    int result=GetVideoSourceConfigurationToken(mediaAddr,videoSourceToken,videoSourceConfigToken);
    if (result != 0){
        qDebug() << "GetVideoSourceConfigurationToken 失败"<< endl;
        return -1;
    }
   qDebug() << "videoSourceConfigToken= "<< QString::fromStdString(videoSourceConfigToken)<<endl;

    //设置tt__OSDConfiguration
    OSD.token = OSDToken;
    OSD.Type = tt__OSDType__Text;

    tt__OSDPosConfiguration position; //设置position
    tt__Vector pos;// todo
    float x = -1;
    float y = 0;
    pos.x = &x;
    pos.y = &y;
    position.Pos = &pos;

    std::string Postype = "Custom";
    position.Type = Postype;
    OSD.Position = &position;


    tt__OSDTextConfiguration textConf;//设置TextString()
    std::string text = "中文，test \n PM2.5=100吨";//再设置textConf.PlainText
    textConf.PlainText = &text;
    int fontSize = 25; //然后设置textConf.fontSize
    textConf.FontSize =&fontSize ;
    OSD.TextString = &textConf;//把textConf赋值给OSD.TextString

    tt__OSDReference VideoSourceConfigurationToken; //设置VideoSourceConfigurationToken
    VideoSourceConfigurationToken.__item = videoSourceConfigToken;//videoConf_rep.Configuration->token;
    OSD.VideoSourceConfigurationToken = &VideoSourceConfigurationToken;


    //鉴权并发起设置OSD命令
    soap_set_mode(soap, SOAP_C_UTFSTRING);
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _trt__SetOSD setOSD_req;
    _trt__SetOSDResponse  setOSD_rep;
    setOSD_req.OSD = &OSD;
    int ret = pMedia.SetOSD(mediaAddr, NULL, &setOSD_req, setOSD_rep);
    if (ret != SOAP_OK){
        qDebug() << "setOSD 失败"<<endl;
        return -1;
    }

    qDebug() <<"setOSD完成";
    return 0;
}


/**
*	@explan:	显示OSD设置项
*   @param: const char * deviceAddr 设备地址
* 	@return:   int
*	success return 0
*/
int Media::showOSDOpinion(const char *mediaAddr,string profileToken,std::string videoSourceToken)
{
    MediaBindingProxy pMedia;
    struct soap *soap = &pMedia;
   soap_set_recv_logfile(soap, "./log/OSDOpinion_Recv.log");

    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _trt__GetOSDOptions getOptions_req;
    _trt__GetOSDOptionsResponse getOptions_rep;
    getOptions_req.ConfigurationToken = videoSourceToken;

    int result=pMedia.GetOSDOptions(mediaAddr, NULL, &getOptions_req, getOptions_rep);
    if (result != SOAP_OK){
        qDebug() << "获取OSD OPinion 失败"<<endl;
        soap_print_fault(getOptions_rep.soap,stderr);
        return -1;
    }

    return 0;
}

int Media::getcapabilities(const char * mediaAddr)
{
    MediaBindingProxy pMedia;
    struct soap *soap = &pMedia;
    soap_set_sent_logfile(soap, "./log/getCapabilities_Sent.log");
    soap_set_recv_logfile(soap, "./log/getCapabilities_Recv.log");

    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _trt__GetServiceCapabilities getCapabilities_req;
    _trt__GetServiceCapabilitiesResponse getCapabilitiess_rep;

    int result=pMedia.GetServiceCapabilities(mediaAddr, NULL, &getCapabilities_req, getCapabilitiess_rep);
    if (result != SOAP_OK){
        qDebug() << "GetServiceCapabilities 失败"<<endl;
        soap_print_fault(getCapabilitiess_rep.soap,stderr);
        return -1;
    }
    return 0;
}
/**
*	@explan:	根据Media地址,获取OSD Token list
*   @param: const char * mediaAddr
*   @param: std::string OSDList[] OSD Token list
* 	@return:   int  vector<string>
*	success return 0
*/
QVector<string> Media::GetOSDs(const char * mediaAddr, std::string videoSourceToken)
{
    QVector<string> OSDTokenList;
    MediaBindingProxy pMedia ;
    struct soap *soap = &pMedia;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");

    _trt__GetOSDs OSD_req;
    _trt__GetOSDsResponse OSD_rep;
    OSD_req.ConfigurationToken = &videoSourceToken;
    int result=pMedia.GetOSDs(mediaAddr, NULL, &OSD_req, OSD_rep);
    if (result != SOAP_OK){
        qDebug() << "获取OSD失败 ";

    }else{
        int temp = 0;
        for (auto osd : OSD_rep.OSDs){
            OSDTokenList.push_back(osd->token);
            temp++;
        }
    }

    return OSDTokenList;
}
