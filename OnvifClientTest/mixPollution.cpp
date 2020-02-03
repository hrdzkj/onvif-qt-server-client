#include <QMainWindow>
#include "mixPollution.h"
#include "ui_mixPollution.h"
#include "QPushButton"
#include <QDebug>
#include "device.h"

MixPollution::MixPollution(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MixPollution)
{
    int  _metadataVersion = 1;
    char _xaddr[]="http://localhost/service";
    char _type[]="\"http://schemas.xmlsoap.org/ws/2006/02/devprof\":device";
    char _scope[]="scope";
    char _endpoint[]="urn";
    ui->setupUi(this);

    connect(ui->createOSDbtn ,&QPushButton::clicked,
            [=]() {
        // mixData();
        //midaMixData();
        //showOSDOption();
        getGetServiceCapabilities();
    });
}

MixPollution::~MixPollution()
{
    delete ui;
}

void MixPollution::getGetServiceCapabilities(){
    Media media;
    string url = "http://10.13.15.12:80/media";
    media.getcapabilities(url.c_str());
}
void MixPollution::mixData(){
    Device device;
    char url[] = "http://10.13.1.12:80/onvif/device_service";
    device.getWsdlUrl(url);

    QVector<std::string> serviceList =device.getServices(url);
    QVector<string>::iterator iter;
    int i=0;
    for(iter=serviceList.begin();iter!=serviceList.end();iter++){
        qDebug("service[%d] %s\n",i,iter->c_str());
        /*
        if(strcmp(iter->c_str(), "http://www.onvif.org/ver20/media/wsdl") == 0)
        {
            qDebug("media[%d] %s\n",i,iter->c_str());
        }
        if(strcmp(iter->c_str(), "http://www.onvif.org/ver10/media/wsdl") == 0)
        {
            qDebug(" media[%d] %s\n", i, iter->c_str());
        }
        */
        i++;
    }

}

void MixPollution::showOSDOption()
{
    Media media;
    string url = "http://10.13.15.12:80/media";
    QVector<string> profileTokenList;
    string videoSourceToken;
    profileTokenList = media.getProfileTokens(url.c_str());
    if (profileTokenList.size()>0){
      media.getVideoSourceToken(0,url.c_str(),videoSourceToken);
      media.showOSDOpinion(url.c_str(),profileTokenList.at(0),videoSourceToken);
    }
}
void MixPollution::midaMixData()
{


    Media *media = new Media();
    QVector<string> OSDTokenList;
    QVector<string> profileTokenList;
    string profileToken, videoSourceToken,videoSourceConfigToken, OSDToken;

    string url = "http://10.13.15.12:80/media";

    // media->getcapabilities(url.c_str());
    profileTokenList = media->getProfileTokens(url.c_str());
    if (profileTokenList.size()>=0){ //获取的OSDToken
        int  ret;
        ret = media->getVideoSourceToken(0,url.c_str(),videoSourceToken);//取第0个视频源
        if (ret!=0){
            return;
        }

        /*
       ret = media->GetVideoSourceConfigurationToken(url.c_str(),videoSourceToken,videoSourceConfigToken);
       if (ret==0){
           qDebug()<< QString::fromStdString(videoSourceConfigToken);
       }
       return;
       */

        OSDTokenList =media->GetOSDs(url.c_str(),videoSourceToken);
        profileToken = profileTokenList.at(0);

        //if (OSDTokenList.size()>2){ //存在3个视频源，则修改
        if (false){
            OSDToken = OSDTokenList.at(2); //为什要2：因为0--time,1--titel
            media->setOSD(url.c_str(),profileToken, videoSourceToken, OSDToken);
        }else{
            string newOSD;
            newOSD=media->createOSD(url.c_str(), profileToken, videoSourceToken);
            //std::cout<<"osdToken="<<newOSD<<std::endl;
        }
    }



}
