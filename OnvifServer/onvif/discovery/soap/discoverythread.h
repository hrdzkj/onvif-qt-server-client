#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>

class DiscoveryThread : public QThread
{
   // const char* host = "239.255.255.250";
    //const char* host = "10.11.3.11";
    const char* host="172.16.29.181";
    int port = 3702;
//    const int   _metadataVersion = 1;
//    const char* _xaddr="http://localhost/service";
//    const char* _type="\"http://schemas.xmlsoap.org/ws/2006/02/devprof\":device";
//    const char* _scope="scope";
//    const char* _endpoint="urn";
    Q_OBJECT
public:
    DiscoveryThread();
protected:
    void run();
};

#endif // MYTHREAD_H
