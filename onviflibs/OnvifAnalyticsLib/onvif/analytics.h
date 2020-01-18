#ifndef ANALYTICS_H
#define ANALYTICS_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT  Analytics
{
public:
    Analytics();
    ~Analytics();

    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // ANALYTICS_H
