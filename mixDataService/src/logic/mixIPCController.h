#ifndef ONVIFOPERATER_H
#define ONVIFOPERATER_H
class MixIPCController : public QObject
{
public:
    QString mixDataToIPC(QString ipc,QString mixData);
};

#endif // ONVIFOPERATER_H
