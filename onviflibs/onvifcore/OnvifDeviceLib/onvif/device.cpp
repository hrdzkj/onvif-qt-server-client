#include "device.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifdeviceDeviceBindingProxy.h"
#include "soap/onvifdevice.nsmap"

#include "authority.h"



Device::Device()
{

}

Device::~Device()
{

}


void Device::getDeviceInformation(QString devServiceURL) {

    qDebug() << "device manager service test: getDeviceInformation";

    DeviceBindingProxy d;
    _tds__GetDeviceInformation in;
    _tds__GetDeviceInformationResponse out;

    struct soap *soap = &d;
    Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (d.GetDeviceInformation(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok    
        qDebug() << (char*)out.soap->data;
        qDebug() << out.FirmwareVersion.data();
        qDebug() << out.SerialNumber.data();
        qDebug() << out.HardwareId.data();
        qDebug() << out.Manufacturer.data();
    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }


    return ;
}



QVector<string> Device::getServices(const char * deviceAddr) {
    qDebug() << "device manager service test: getServices";
    DeviceBindingProxy d;
     _tds__GetServices in;
     _tds__GetServicesResponse out;
     QVector<std::string> serviceList;
     struct soap *soap = &d;
     //soap_set_sent_logfile(soap, "./log/getServices_Sent.log");
     //soap_set_recv_logfile(soap, "./log/getServices_Recv.log");

     Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (d.GetServices(deviceAddr, NULL, &in, out) == SOAP_OK) {
        //ok
        for(int i=0; i<out.Service.size(); i++){
             serviceList.append(out.Service[i]->XAddr.data());
         }
    } else {  
        d.soap_print_fault(stderr);  
    }
    return serviceList ;
}

QVector<string> Device::getWsdlUrl(const char * deviceAddr) {
    qDebug() << "device manager service test: getServices";
    DeviceBindingProxy d;
     _tds__GetWsdlUrl in;
     _tds__GetWsdlUrlResponse out;
     QVector<std::string> wsdlList;
     struct soap *soap = &d;
     soap_set_sent_logfile(soap, "./log/getWsdlUrl_Sent.log");
     soap_set_recv_logfile(soap, "./log/getWsdlUrl_Recv.log");
     Authority::addSoapUsernameTokenDigest(soap, "admin", "admin");
    if (d.GetWsdlUrl(deviceAddr, NULL, &in, out) == SOAP_OK) {
         //out.WsdlUrl.
    } else {
        d.soap_print_fault(stderr);
    }
    return wsdlList ;
}


void Device::getUses(QString devServiceURL) {

    qDebug() << "device manager service test: getUses";

    DeviceBindingProxy d;

    _tds__GetUsers in;
    _tds__GetUsersResponse out;


    if (d.GetUsers(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        std::vector<tt__User *> users = out.User;

        qDebug() << users.size();
        for(int i = 0; i< users.size(); i++){
            tt__User * u = users.at(i);
            qDebug() << u->Username.data();
            qDebug() << u->Password;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}

