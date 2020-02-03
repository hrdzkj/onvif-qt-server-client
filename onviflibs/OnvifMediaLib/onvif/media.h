#ifndef MEDIA_H
#define MEDIA_H

#pragma execution_character_set("utf-8")
#include <QString>
#include <string>
#include "exportdef\mydll_global.h"


#include<string>
using std::string;

class MYDLLSHARED_EXPORT Media
{
public:
    Media();
    ~Media();
    QVector<std::string> getProfileTokens(const char * mediaAddr);
    std::string getStreamURL(const char* mediaAddr, std::string profileToken);

    //liuyi add
    string createOSD(const char *mediaAddr,string profileToken,string videoSourceToken);
    int setOSD(const char * mediaAddr,string profileToken,string videoSourceToken,string OSDToken);
    int showOSDOpinion(const char *mediaAddr,string profileToken,std::string videoSourceToken);
    QVector<string> GetOSDs(const char * mediaAddr, std::string videoSourceToken);
    int getVideoSourceToken(int profileIndex,const char* mediaAddr, std::string& videoSourceToken);
    int getcapabilities(const char * mediaAddr);
    int GetVideoSourceConfigurationToken(const char* mediaAddr,std::string videoSourceToken, std::string& videoSourceConfigToken);

};

#endif // MEDIA_H
