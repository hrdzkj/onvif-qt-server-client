#ifndef MIXDEVICELIST_H
#define MIXDEVICELIST_H
#include <QObject>
#include<QMutex>
#include<QHash>
#include "entity.h"
#include "src/logic/observer.h"
class mixDeviceList : public QObject
{
    Q_OBJECT
private:
    QMutex mutex;
    QList<Observer*> observrList;
    QHash<QString, MixDevice*> deviceMap;
    QList<QString> mixDeviceKeyList;

    //状态改变时通知所有的观察者
    void notifyObservers(MixDevice *newValue);
public:
    ~mixDeviceList();
public:
    bool updateDevice(QList<MixDevice*> list);//更新设备
    bool getNextToSetOSD(MixDevice &toShow);//获取下一个设置OSD的设备

    void registerObserver(Observer *o); //注册观察者
    void removeObserver(Observer *o); //删除观察者

};
#endif // MIXDEVICELIST_H
