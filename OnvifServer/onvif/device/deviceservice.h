#ifndef DEVICESERVICE_H
#define DEVICESERVICE_H
#include "device/deviceserviceextabst.h"

class   DeviceService
{
public:
    DeviceService(){
    };

    static DeviceServiceExtAbst *dse;
};

#endif // DEVICESERVICE_H
