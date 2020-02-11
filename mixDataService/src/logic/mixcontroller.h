#ifndef MIXCONTROLLER_H
#define MIXCONTROLLER_H
#include<QObject>
#include "mixDataController.h"
#include "mixIPCController.h"

class MixController : public QObject
{
    Q_OBJECT

private:
    MixDevice dev;
    MixDataController mixDataController;
    MixIPCController mixIPCController;
    void mixDevice(MixDevice &dev);
    void delePreMix();
public:
    void doMixData();


};
#endif // MIXCONTROLLER_H
