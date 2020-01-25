#ifndef DEVICE_H
#define DEVICE_H

#include <QString>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT Device
{
public:
    Device();
    ~Device();
    static void getDeviceInformation(QString devServiceURL);
    static void getServices(QString devServiceURL);
    static void getUses(QString devServiceURL);
};

#endif // DEVICE_H
