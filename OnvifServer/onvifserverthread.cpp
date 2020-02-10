#include "onvifserverthread.h"
#include "wrapper/deviceservicewrapper.h"
//#include "wrapper/ptzservicewrapper.h"
//#include "wrapper/eventservicewrapper.h"
#include "wrapper/mediaservicewrapper.h"
//#include "wrapper/imagingservicewrapper.h"
//#include "wrapper/analyticsservicewrapper.h"
#include "wrapper/deviceioservicewrapper.h"

#include "discoveryobj.h"
#include "gsoap/plugin/wsddapi.h"
#include <QDebug>

QString OnvifServerThread::ipStr ;
int OnvifServerThread::tcpPort;
QString OnvifServerThread::addrsStr;


OnvifServerThread::OnvifServerThread(QString ipStr, int tcpPort)
{
    this->ipStr = ipStr;
    this->tcpPort = tcpPort;
}

void OnvifServerThread::run(){

    //running = true;

    //Starts desovery --------------------------------------------------------------

    //char* _xaddr="http://x.x.x.x:8080"; //format
    addrsStr = QString("http://")+ipStr+QString(":")+QString::number(tcpPort);
    qDebug()<< "Addres = " + addrsStr;
    char* _xaddr=new char[addrsStr.length() + 1];
    strcpy(_xaddr, addrsStr.toLatin1().constData());


    //type=""; // bele de ishleyir
    typeStr = QString("discows:NetworkVideoTransmitter");// Look at text format otherwise onvif tester will not finde server. Format has to be as following "xxx:xxx"
    // Main rule is  type="\"http://www.onvif.org/ver10/network/wsdl\":NetworkVideoTransmitter \"http://www.onvif.org/ver10/network/wsdl\":Device"; // I got this link from wsdd.nmsp. It has described in tutorial
    char* _type=new char[typeStr.length() + 1];
    strcpy(_type, typeStr.toLatin1().constData());
    std::cout << "_type " << _type << "\n";

    scopeStr = QString("onvif://www.onvif.org/Profile/Streaming "
                       "onvif://www.onvif.org/hardware/NetworkVideoTransmitter "
                       "onvif://www.onvif.org/location/country/Azerbaijan "
                       "onvif://www.onvif.org/location/city/Baku "
                       "onvif://www.onvif.org/name/NVT");

    char* _scope=new char[scopeStr.length() + 1];
    strcpy(_scope, scopeStr.toLatin1().constData());

    std::cout << "_scope " << _scope << "\n";

    //for genereatin randoim uuid start
    struct soap* serv = soap_new1(SOAP_IO_UDP);
    char* _endpoint= (char*)soap_wsa_rand_uuid(serv);
    //for genereatin randoim uuid end


    DiscoveryObj *discoveryObj = new DiscoveryObj(SERVER_MODE, 1, _xaddr, _type, _scope, _endpoint);


    //Starts accepting requests-------------------------------------------------------------------------
    struct soap *soap = soap_new();

    DeviceServiceWrapper deviceSW(soap);
    MediaServiceWrapper mediaSW(soap);


    soap_bind(soap, NULL, tcpPort, 100);


    while(true){
        qDebug() << "running \n";

        soap_accept(soap); //blocks the loop , find way to set timeout
        if (soap_begin_serve(soap)){
            //... error
            soap_stream_fault(soap, std::cerr);
        }else if (deviceSW.dispatch() == SOAP_NO_METHOD)
        {


        }

        printf("loop end \n");
        fflush(stdout);
        soap_destroy(soap);
    }

    soap_end(soap);
    soap_free(soap); // only safe when abc, uvw, xyz are also deleted


    deviceSW.deleteObj();
    mediaSW.deleteObj();

    delete discoveryObj;


}
