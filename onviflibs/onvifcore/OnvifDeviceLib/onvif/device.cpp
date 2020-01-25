#include "device.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifdeviceDeviceBindingProxy.h"
#include "soap/onvifdevice.nsmap"

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


void Device::getServices(QString devServiceURL) {
    qDebug() << "device manager service test: getServices";
    DeviceBindingProxy d;
     _tds__GetServices in;
     _tds__GetServicesResponse out;

    if (d.GetServices(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        for(int i=0; i<out.Service.size(); i++){
            if(strcmp(out.Service[i]->Namespace.data(), "http://www.onvif.org/ver20/media/wsdl") == 0)
            {
                printf("media_addr[%d] %s\n", i, out.Service[i]->XAddr.data());
            }
            if(strcmp(out.Service[i]->Namespace.data(), "http://www.onvif.org/ver10/media/wsdl") == 0)
            {
                printf(" media_addr->XAddr[%d] %s\n", i, out.Service[i]->XAddr.data());
            }
         }
    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }
    return ;
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

