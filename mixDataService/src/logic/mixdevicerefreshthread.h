#ifndef MIXDEVICEREFRESHTHREAD_H
#define MIXDEVICEREFRESHTHREAD_H
#include "src/db/dbOperator.h"

class MixDeviceRefreshThread : public QThread
{
    Q_OBJECT
public:
    explicit MixDeviceRefreshThread(QObject *parent = 0);

protected:
    void run();

private:
    dbOperator mDbOperater;
};

#endif // MIXDEVICEREFRESHTHREAD_H
