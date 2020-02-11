#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include <QString>
#include "exportdef\mydll_global.h"

using std::string;
class MYDLLSHARED_EXPORT Device
{
public:
    Device();
    ~Device();
    static void getDeviceInformation(QString devServiceURL);
    QVector<string> getServices(const char * deviceAddr);
    static void getUses(QString devServiceURL);
    QVector<string> getWsdlUrl(const char * deviceAddr);
};

#endif // DEVICE_H
