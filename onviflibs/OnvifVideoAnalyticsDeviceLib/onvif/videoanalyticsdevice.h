#ifndef VIDEOANALYTICSDEVICE_H
#define VIDEOANALYTICSDEVICE_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT  VideoAnalyticsDevice
{
public:
    VideoAnalyticsDevice();
    ~VideoAnalyticsDevice();

    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // VIDEOANALYTICSDEVICE_H
