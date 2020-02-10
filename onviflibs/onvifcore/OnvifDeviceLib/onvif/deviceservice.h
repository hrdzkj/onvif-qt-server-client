#ifndef DEVICESERVICE_H
#define DEVICESERVICE_H
#include "onvif/deviceserviceextabst.h"
#include "exportdef\mydll_global.h"

class  MYDLLSHARED_EXPORT DeviceService
{
public:
    DeviceService(){
    };

    static DeviceServiceExtAbst *dse;
};

#endif // DEVICESERVICE_H
