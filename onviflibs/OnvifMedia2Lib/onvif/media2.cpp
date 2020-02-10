#include "media2.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifmedia.nsmap"
#include "soap/onvifmediaMedia2BindingProxy.h"
#include "authority.h"

#pragma execution_characterset("utf-8")

Media2::Media2()
{

}

Media2::~Media2()
{

}
QVector<std::string>  Media2::getProfileTokens(const char * mediaAddr) {
    QVector<std::string> tokens;
    Media2BindingProxy p;
    _ns1__GetProfiles in;
    _ns1__GetProfilesResponse out;

    struct soap *soap = &p;
    soap_set_recv_logfile(soap, "./log/getProfileTokens.log");
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (p.GetProfiles(mediaAddr, NULL, &in, out) == SOAP_OK) {
        std::vector<ns1__MediaProfile* >  profiles = out.Profiles;
        for(int i =0;i< profiles.size(); ++i){
            tokens.append(profiles.at(i)->token);
        }

    } else {  
       p.soap_print_fault(stderr);
    }
    return tokens;
}

int  Media2::getVideoSourceToken(int profileIndex,const char* mediaAddr, std::string& videoSourceToken)
{
    QVector<std::string> tokens;
    Media2BindingProxy p;
    struct soap *soap = &p;
    _ns1__GetProfiles in;
    _ns1__GetProfilesResponse out;

    soap_set_recv_logfile(soap, "./log/vsToken_Recv.log");
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (p.GetProfiles(mediaAddr, NULL, &in, out) == SOAP_OK) {
        std::vector<ns1__MediaProfile* >  profiles = out.Profiles;
        if (profileIndex>=0 && profileIndex< profiles.size()){
            videoSourceToken = out.Profiles.at(profileIndex)->Configurations->VideoSource->SourceToken; //视频源token
            // out.Profiles.at(profileIndex)->Configurations->VideoSource->token;// token Token that uniquely references this configuration. 因为VideoSource - optional; [VideoSourceConfiguration]
            return 0;
        }

    } else {
        p.soap_print_fault(stderr);
    }

    return -1;
}

int Media2::getVideoSourceConfigurationToken(const char* mediaAddr,string profileToken,string videoSourceToken,string& videoSourceConfigToken)
{  
    Media2BindingProxy p;
    ns1__GetConfiguration in;
    _ns1__GetVideoSourceConfigurationsResponse out;
    char soap_action[]="http://www.onvif.org/ver20/media/wsdl/GetVideoSourceConfigurationOptions/";

    struct soap *soap = &p;
    soap_set_sent_logfile(soap, "./log/vscToken_Sent.log");
    soap_set_recv_logfile(soap, "./log/vscToken_Recv.log");
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");

    if (p.GetVideoSourceConfigurations(mediaAddr, soap_action, &in, out) == SOAP_OK) {
        for (auto config : out.Configurations){
            if(config->SourceToken==videoSourceToken){
                videoSourceConfigToken = config->token;
                return 0;
            }
        }
        return -1;
    } else {
        p.soap_print_fault(stderr);
    }


    return -1;
}


std::string Media2::getStreamURL(const char* mediaAddr, std::string profileToken) {

    std::string uri;
    qDebug() << "media service test: getStreamURL";

    Media2BindingProxy p;

    _ns1__GetStreamUri in;
    _ns1__GetStreamUriResponse out;

    in.ProfileToken = profileToken;

    if (p.GetStreamUri(mediaAddr, NULL, &in, out) == SOAP_OK) {
        uri= out.Uri;

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return uri ;
}

string Media2::createOSD(const char *mediaAddr,string profileToken,string videoSourceConfigToken)
{

    Media2BindingProxy pMedia;
    struct soap *soap = &pMedia;

    soap_set_sent_logfile(soap, "./log/createOSD_Sent.log");
    soap_set_recv_logfile(soap, "./log/createOSD_Recv.log");

    tt__OSDConfiguration OSD;

    //设置tt__OSDConfiguration
    // title_0001:--- text_0001,_0001,0001,1
    //text_1_0001:---text,_1_0001,1_0001
    // "",不设置
    OSD.token = "OSDPlainToken0";//profileToken;//profileToken;"text_1_0001";
    OSD.Type = tt__OSDType__Text;

    //设置VideoSourceConfigurationToken
    tt__OSDReference VideoSourceConfigurationToken ;
    VideoSourceConfigurationToken.__item = videoSourceConfigToken;//videoConf_rep.Configuration->token;
    OSD.VideoSourceConfigurationToken = &VideoSourceConfigurationToken;

    tt__OSDPosConfiguration position; //设置position
    tt__Vector pos;
    float x = -1;
    float y = 1;
    pos.x = &x;
    pos.y = &y;
    position.Pos = &pos;
    position.Type = tt__OSDType__Text;
    string Postype ="Custom";// "Custom";
    position.Type = Postype;
    OSD.Position = &position;

    //设置TextString()
    tt__OSDTextConfiguration textConf;
    string text = "toMixData";//再设置textConf.PlainText 中文，test \n PM2.5=100吨 \n S0=10t
    textConf.PlainText = &text;

    //新增begin:字体大小，字体颜色，背景颜色
    /*
    int fontSize = 2; //然后设置textConf.fontSize
    textConf.FontSize =&fontSize ;
    tt__OSDColor osdColor,bg_osdColor;
    tt__Color color,bg_color;
    color.X=255;
    color.Y=255;
    color.Z=255;
    bg_color.X = 0;
    bg_color.Y = 0;
    bg_color.Z = 0;
    osdColor.Color=&color;
    bg_osdColor.Color=&bg_color;
    textConf.FontColor=&osdColor;
    textConf.BackgroundColor =&bg_osdColor;
*/
    //新增end
    OSD.TextString = &textConf;//把textConf赋值给OSD.TextString

    //鉴权并发起设置OSD命令
    _ns1__CreateOSD creOSD_req;
    _ns1__CreateOSDResponse creOSD_rep;
    const char *action="http://www.onvif.org/ver20/media/wsdl/CreateOSD";
    creOSD_req.OSD = &OSD;
    soap_set_mode(soap, SOAP_C_UTFSTRING);
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    int ret = pMedia.CreateOSD(mediaAddr, action, &creOSD_req, creOSD_rep);
    if (ret != SOAP_OK){
        qDebug() << "faultcode:"<<QString::fromUtf8(soap->fault->faultcode)<<" faultstring:"<<QString::fromUtf8(soap->fault->faultstring)<<endl;
        return "";
    }
    qDebug() <<"createOSD成功：" << endl;
    return creOSD_rep.OSDToken.c_str();


    return "";
}


int Media2::setOSD(const char *mediaAddr,string videoSourceConfigToken,string OSDToken)
{
    Media2BindingProxy pMedia;
    struct soap *soap = &pMedia;


    soap_set_sent_logfile(soap, "./log/setOSD_Sent.log");
    soap_set_recv_logfile(soap, "./log/setOSD_Recv.log");

    //设置OSD参数
    tt__OSDConfiguration OSD;
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
    _ns1__SetOSD setOSD_req;
    ns1__SetConfigurationResponse  setOSD_rep; // todo 与原来不同
    setOSD_req.OSD = &OSD;
    int ret = pMedia.SetOSD(mediaAddr, NULL, &setOSD_req, setOSD_rep);
    if (ret != SOAP_OK){
        qDebug() << "setOSD失败:"<<endl;
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
int Media2::showOSDOpinion(const char *mediaAddr,string videoSourceConfigToken)
{
    Media2BindingProxy pMedia;
    struct soap *soap = &pMedia;
    soap_set_recv_logfile(soap, "./log/OSDOpinion_Recv.log");

    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _ns1__GetOSDOptions getOptions_req;
    _ns1__GetOSDOptionsResponse getOptions_rep;
    getOptions_req.ConfigurationToken = videoSourceConfigToken;

    int result=pMedia.GetOSDOptions(mediaAddr, NULL, &getOptions_req, getOptions_rep);
    if (result != SOAP_OK){
        qDebug() << "获取OSD OPinion 失败"<<endl;
        soap_print_fault(getOptions_rep.soap,stderr);
        return -1;
    }

    return 0;
}

int Media2::getcapabilities(const char * mediaAddr)
{
    Media2BindingProxy pMedia;
    struct soap *soap = &pMedia;
    soap_set_sent_logfile(soap, "./log/getCapabilities_Sent.log");
    soap_set_recv_logfile(soap, "./log/getCapabilities_Recv.log");

    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _ns1__GetServiceCapabilities getCapabilities_req;
    _ns1__GetServiceCapabilitiesResponse getCapabilitiess_rep;

    int result=pMedia.GetServiceCapabilities(mediaAddr, NULL, &getCapabilities_req, getCapabilitiess_rep);
    if (result != SOAP_OK){
        qDebug() << "GetServiceCapabilities 失败"<<endl;
        return -1;
    }
    return 0;
}

int Media2::deleteOSD(const char * mediaAddr,string osdToken)
{
    Media2BindingProxy pMedia;
    struct soap *soap = &pMedia;
    soap_set_sent_logfile(soap, "./log/getCapabilities_Sent.log");
    soap_set_recv_logfile(soap, "./log/getCapabilities_Recv.log");

    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    _ns1__DeleteOSD delete_req;
    ns1__SetConfigurationResponse delete_rep;
    delete_req.OSDToken = osdToken;
    int result=pMedia.DeleteOSD(mediaAddr, NULL, &delete_req, delete_rep);
    if (result != SOAP_OK){
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
QVector<string> Media2::getOSDs(const char * mediaAddr,string vscToken)
{
    QVector<string> OSDTokenList;
    Media2BindingProxy pMedia ;
    struct soap *soap = &pMedia;

    soap_set_recv_logfile(soap, "./log/GetOSDs.log");
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");

    _ns1__GetOSDs OSD_req;
    _ns1__GetOSDsResponse OSD_rep;
    OSD_req.ConfigurationToken =&vscToken;
    OSD_req.OSDToken = NULL;
    int result=pMedia.GetOSDs(mediaAddr, NULL, &OSD_req, OSD_rep);
    if (result != SOAP_OK){
        qDebug() << "获取OSD失败 ";

    }else{
        int temp = 0;
        for (auto osd : OSD_rep.OSDs){
            OSDTokenList.push_back(osd->token);
        }
    }

    return OSDTokenList;
}
