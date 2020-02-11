#include "common.h"


void copyMixDevice(MixDevice *src,MixDevice *des)
{
    des->groupName=src->groupName;
    des->IPCAddress=src->IPCAddress;
    des->devRelation=src->devRelation;
    des->IPCStatue=src->IPCStatue;
    des->userName=src->userName;
    des->password=src->password;
    des->MN=src->MN;
    des->MNName=src->MNName;
    des->STName=src->STName;
    des->OSDToken=src->OSDToken;
    des->preMixValue=src->preMixValue;
    des->preMixTime=src->preMixTime;
    des->lastGetValue=src->lastGetValue;
    des->lastGetTime=src->lastGetTime;
    des->modifyTime=src->modifyTime;

    //des->isDo=src->isDo;
    //des->isShow=src->isShow;
}
