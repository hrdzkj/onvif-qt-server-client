#ifndef MEDIA_H
#define MEDIA_H

#pragma execution_character_set("utf-8")
#include <QString>
#include <string>
#include "exportdef\mydll_global.h"


#include<string>
using std::string;

class MYDLLSHARED_EXPORT Media2
{
public:
    Media2();
    ~Media2();
    QVector<std::string> getProfileTokens(const char * mediaAddr);
    std::string getStreamURL(const char* mediaAddr, std::string profileToken);

    //liuyi add
    string createOSD(const char *mediaAddr,string profileToken,string videoSourceConfigToken);
    int setOSD(const char * mediaAddr,string videoSourceConfigToken,string OSDToken);
    int showOSDOpinion(const char *mediaAddr,string videoSourceConfigToken);
    QVector<string> getOSDs(const char * mediaAddr,string vscToken);
    int getVideoSourceToken(int profileIndex,const char* mediaAddr, std::string& videoSourceToken);
    int getcapabilities(const char * mediaAddr);
    int getVideoSourceConfigurationToken(const char* mediaAddr,string profileToken,string videoSourceToken,string& videoSourceConfigToken);
    int deleteOSD(const char * mediaAddr,string osdToken);
};

#endif // MEDIA_H
