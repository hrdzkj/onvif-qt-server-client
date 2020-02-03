#include <QCoreApplication>//提供一个事件循环
#include<QDebug>
#include "media2.h"
#include <iostream>
#include <string>

#pragma execution_characterset("utf-8")

using std::string;
using::std::vector;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    Media2 *media = new Media2();
    QVector<string> OSDTokenList;
    QVector<string> profileTokenList;
    string profileToken, videoSourceToken, OSDToken;

    string url = "http://10.11.3.18:80/media";

     /*
    profileTokenList = media->getProfileTokens(url.c_str());
    if (profileTokenList.size()>=1){ //获取的OSDToken
        int  ret;
        ret = media->getVideoSourceToken(0,url.c_str(),videoSourceToken);//取第0个视频源
        if (ret!=0){
            return -1;
        }


        OSDTokenList =media->GetOSDs(url.c_str(),videoSourceToken);
         profileToken = profileTokenList.at(0);

        //if (OSDTokenList.size()>2){ //存在3个视频源，则修改
         if (false){
           OSDToken = OSDTokenList.at(0);
            media->setOSD(url.c_str(),profileToken, videoSourceToken, OSDToken);
        }else{
            string newOSD;
            newOSD=media->createOSD(url.c_str(), profileToken, videoSourceToken);
            //std::cout<<"osdToken="<<newOSD<<std::endl;
        }


    }
     */
    qDebug()<< "program is running";
    return a.exec();
}
