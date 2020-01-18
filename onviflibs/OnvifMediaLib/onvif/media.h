#ifndef MEDIA_H
#define MEDIA_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"



class MYDLLSHARED_EXPORT Media
{
public:
    Media();
    ~Media();

    static QVector<std::string>  getProfileTokens(QString devServiceURL);
    static std::string getStreamURL(QString devServiceURL, std::string profileToken);
};

#endif // MEDIA_H
