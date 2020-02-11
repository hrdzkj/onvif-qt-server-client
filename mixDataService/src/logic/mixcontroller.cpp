#include "mixcontroller.h"
#include "src/logic/global.h"
#include "src/entity/entity.h"

void MixController::doMixData() {

    QString result;
    //1.2获得指定污染点的唯一标识MN
    if(g_mixDeviceList.getNextToSetOSD(dev)){
        //根据dev.devRelation，对混合这个设备进行混合OSD或者删除OSD
        mixDevice(dev);//test
        /*
        if (dev.devRelation=="关联"){
                 mixDevice(dev);
        }else if(dev.devRelation=="删除"){
            delePreMix();

        }else if(dev.devRelation=="解除"){

        }
        */

         //1.7更新数据库及缓存
    }


}

void MixController::mixDevice(MixDevice &dev){

    //1.6)调用onvif进行设置osd /或删除osd
    QString mixData=mixDataController.getMixData(dev);
    if (!QString(mixData).isEmpty()){

    }

}

void MixController::delePreMix(){

}
