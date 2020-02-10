#include <QCoreApplication>//提供一个事件循环
#include<QDebug>
#include "media2.h"
#include <iostream>
#include <string>
#include <iostream>
#include <QDir>
#include <QDirIterator>
#pragma execution_characterset("utf-8")

using std::string;
using::std::vector;


void clearTempFiles(const QString& temp_path)
{
    QDir dir(temp_path);
    if(dir.isEmpty())
    {
        return;
    }
    QStringList filter; //过滤器
    filter.append("*");
    QDirIterator it(temp_path, filter, QDir::Files, QDirIterator::Subdirectories);
    while(it.hasNext()) { //若容器中还有成员，继续执行删除操作
        dir.remove(it.next());
    }
}

/*
 * OSD---profile S没有对这个的规定
 * 1.设备没有实现createOSD
 * 2.集成的gsoap版本，命名空间和onvif协议的有些不同？
 * 处理办法：还是要咨询厂家才能解决
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    clearTempFiles("log");

    Media2 *media = new Media2();
    QVector<string> OSDTokenList;
    QVector<string> profileTokenList;
    string profileToken, videoSourceToken, videoSourceConfigToken,OSDToken;

    string url = "http://10.11.3.11:80/media2";

   // media->getcapabilities(url.c_str());
    profileTokenList = media->getProfileTokens(url.c_str());

    if (profileTokenList.size()>=1){
        int  ret;

        //获取VideoSourceToken
        profileToken = profileTokenList.at(0);
        qDebug()<<"profileToken="<<QString::fromStdString(profileToken);
        ret = media->getVideoSourceToken(0,url.c_str(),videoSourceToken);//取第0个视频源
        if (ret!=0){
            return -1;
        }
        qDebug()<<"VideoSourceToken="<<QString::fromStdString(videoSourceToken);


       //获取VideoSourceConfigurationToken
        ret =media->getVideoSourceConfigurationToken(url.c_str(),profileToken, videoSourceToken,videoSourceConfigToken);
        if (ret!=0){
            return -1;
        }
        qDebug()<<"videoSourceConfigToken="<<QString::fromStdString(videoSourceConfigToken);

        //show OSDOption
        //media->showOSDOpinion(url.c_str(),videoSourceConfigToken);

        //获取OSDTokenList
        OSDTokenList =media->getOSDs(url.c_str(),videoSourceConfigToken);
        for(int i=0;i<OSDTokenList.size();i++)
        {
            qDebug()<<QString::fromStdString(OSDTokenList.at(i));
        }


        //if (OSDTokenList.size()>2){ //存在3个视频源，则修改
         if (false){
            OSDToken = OSDTokenList.at(2);
            media->setOSD(url.c_str(),videoSourceConfigToken, OSDToken);
        }else{
             //videoSourceConfigToken videoSourceToken,profileToken
            string newOSD;
            newOSD=media->createOSD(url.c_str(),profileToken,videoSourceConfigToken);
        }

    }

    qDebug()<< "program is running";
    return a.exec();
}
