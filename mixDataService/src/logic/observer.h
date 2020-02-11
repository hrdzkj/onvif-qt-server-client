#ifndef OBSERVER_H
#define OBSERVER_H

#include "src/entity/entity.h"
//观察者
class Observer
{
public:
    Observer(){}
    ~Observer(){}

    //每个观察者必须实现本函数，来响应得到通知进行的操作
    virtual void update(MixDevice &newValue) = 0;
};

#endif // OBSERVER_H
