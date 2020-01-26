#include <QCoreApplication>//提供一个事件循环
#include<QDebug>
#include "media.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"onvifDevice is running";
    Media *device = new Media();
    QString url = "http://10.11.3.18:80/onvif/device_service";

    return a.exec();
}
