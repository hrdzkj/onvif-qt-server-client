#ifndef MIXDATATHREAD_H
#define MIXDATATHREAD_H

#include <QThread>
#include "src/logic/mixController.h"

class MixDataThread : public QThread
{
    Q_OBJECT
    void run() override {
        worker = new MixController;
        //while (true) {
            worker->doMixData();
        //}
    }

private:
    MixController *worker;
public:
    ~MixDataThread(){
       // delete worker;
    }

protected:


};

#endif // MIXDATATHREAD_H
