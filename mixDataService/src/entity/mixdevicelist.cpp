#include <QException>
#include <QDebug>
#include <QTextCodec>
#include "mixdevicelist.h"
#include "src/logic/common.h"




void mixDeviceList::notifyObservers(MixDevice *newValue)
{
    for ( int i=0; i!=observrList.size(); ++i )
    {
        observrList.at(i)->update(*newValue);
    }
}

mixDeviceList::~mixDeviceList()
{
    observrList.clear();
}

bool mixDeviceList::updateDevice(QList<MixDevice*> list)
{
    bool result =false;
    try{
        mutex.lock();
        for ( int i=0; i!=list.size(); ++i )
        {
            //查找设备
            bool isCreate=false;
            MixDevice *outSideItem = list.at(i);
            MixDevice *inSideItem = NULL;
            QHash<QString,MixDevice*>::const_iterator iterator = deviceMap.find(outSideItem->IPCAddress);
            if (iterator !=deviceMap.end()){
                inSideItem = iterator.value();
            }else{
                inSideItem = new MixDevice();
                isCreate= true;
            }
            //拷贝缓存
            copyMixDevice(outSideItem,inSideItem);

            //如果是新设备，则加入缓存
            if (isCreate){
                deviceMap.insert(inSideItem->IPCAddress,inSideItem);
                mixDeviceKeyList.append(inSideItem->IPCAddress);
            }
            notifyObservers(inSideItem);
        }
        result = true;
    }catch(QException &e){
       mutex.unlock();
    }
    return result;
}
bool mixDeviceList::getNextToSetOSD(MixDevice &toShow)
{

    return true;
}

void mixDeviceList::registerObserver(Observer *o)
{
    //判空
    if (NULL==o){
       return;
    }

    //判断之前是否已经加入
    for ( int i=0; i!=observrList.size(); ++i )
    {
        if (observrList.at(i)==o){
            return;
        }
    }

    //没有加入则加入
    observrList.append(o);

}
void mixDeviceList::removeObserver(Observer *o)
{
    for ( int i=observrList.size()-1; i>=0; --i )
    {
        if (observrList.at(i)==o){
            observrList.removeAt(i);
        }
    }
}
