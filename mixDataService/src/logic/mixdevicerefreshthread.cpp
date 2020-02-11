#include <QDebug>
#include "mixdevicerefreshthread.h".h"
#include "src/entity/mixdevicelist.h"
#include "src/logic/global.h"


MixDeviceRefreshThread::MixDeviceRefreshThread(QObject *parent) : QThread(parent)
{
}

void MixDeviceRefreshThread::run()
{
    qDebug()<<"子线程 id="<<QThread::currentThread();  //打印子线程ID

    QList<MixDevice*> devList;
    MixDevice *dev;
    QList<QVariantMap> list= mDbOperater.select("select * from mixdevice ");

    for ( int i=0; i!=list.size(); ++i ){
        QVariantMap varMap = list.at(i);
        QVariant var = varMap.find("IPCAddress").value();
        dev = new MixDevice;
        dev->IPCAddress = var.value<QString>();

        devList.append(dev);

    }

    g_mixDeviceList.updateDevice(devList);

    for ( int i=devList.size()-1; i>=0; --i ){
       dev = devList.at(i);
       delete dev;
    }
}
