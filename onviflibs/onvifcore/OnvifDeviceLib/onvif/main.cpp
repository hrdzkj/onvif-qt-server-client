#include <QCoreApplication>//提供一个事件循环
#include<QDebug>
#include "device.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"onvifDevice is running";

    QString url = "http://10.11.3.18:80/onvif/device_service";
    Device *device = new Device();
    //device->getDeviceInformation(url);
   device->getServices(url);
    return a.exec();
}
