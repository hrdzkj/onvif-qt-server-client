#include "deviceserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvifserverthread.h"

DeviceServiceExt::DeviceServiceExt() : DeviceServiceExtAbst()
{

}


/// Web service operation 'GetServices' (returns error code or SOAP_OK)
int DeviceServiceExt::GetServices(_tds__GetServices *tds__GetServices, _tds__GetServicesResponse &tds__GetServicesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetServices , DeviceLib in NVT\n";


    //service Device
    tds__Service * serviceDevice = new tds__Service();
    //    service1->Capabilities = new _tds__Service_Capabilities;
    //    service1->Capabilities->__any = "adsadadad";
    serviceDevice->Namespace = "http://www.onvif.org/ver10/device/wsdl";
    serviceDevice->Version = new tt__OnvifVersion();
    serviceDevice->Version->Major = 2;
    serviceDevice->Version->Minor = 42;
    serviceDevice->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetServicesResponse.Service.push_back(serviceDevice);


    //service Media
    tds__Service * serviceMedia = new tds__Service();
    //    service1->Capabilities = new _tds__Service_Capabilities;
    //    service1->Capabilities->__any = "adsadadad";
    serviceMedia->Namespace = "http://www.onvif.org/ver10/media/wsdl";
    serviceMedia->Version = new tt__OnvifVersion();
    serviceMedia->Version->Major = 2;
    serviceMedia->Version->Minor = 42;
    serviceMedia->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetServicesResponse.Service.push_back(serviceMedia);


    //service Event
    tds__Service * serviceEvent = new tds__Service();
    //    service1->Capabilities = new _tds__Service_Capabilities;
    //    service1->Capabilities->__any = "adsadadad";
    serviceEvent->Namespace = "http://www.onvif.org/ver10/events/wsdl";
    serviceEvent->Version = new tt__OnvifVersion();
    serviceEvent->Version->Major = 2;
    serviceEvent->Version->Minor = 42;
    serviceEvent->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetServicesResponse.Service.push_back(serviceEvent);


    //service PTZ
    tds__Service * servicePTZ = new tds__Service();
    //    service1->Capabilities = new _tds__Service_Capabilities;
    //    service1->Capabilities->__any = "adsadadad";
    servicePTZ->Namespace = "http://www.onvif.org/ver20/ptz/wsdl";
    servicePTZ->Version = new tt__OnvifVersion();
    servicePTZ->Version->Major = 2;
    servicePTZ->Version->Minor = 42;
    servicePTZ->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetServicesResponse.Service.push_back(servicePTZ);


    //service Imaging
    tds__Service * serviceImaging = new tds__Service();
    //    service1->Capabilities = new _tds__Service_Capabilities;
    //    service1->Capabilities->__any = "adsadadad";
    serviceImaging->Namespace = "http://www.onvif.org/ver20/imaging/wsdl";
    serviceImaging->Version = new tt__OnvifVersion();
    serviceImaging->Version->Major = 2;
    serviceImaging->Version->Minor = 42;
    serviceImaging->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetServicesResponse.Service.push_back(serviceImaging);

    return SOAP_OK;
}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetServiceCapabilities(_tds__GetServiceCapabilities *tds__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &tds__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}


int DeviceServiceExt::GetDeviceInformation(_tds__GetDeviceInformation *tds__GetDeviceInformation, _tds__GetDeviceInformationResponse &tds__GetDeviceInformationResponse){
    qDebug() << "Device service GetDeviceInformation DeviceLib in NVT  in Upper class\n" ;
    tds__GetDeviceInformationResponse.FirmwareVersion = "0.1";
    tds__GetDeviceInformationResponse.HardwareId = "1";
    tds__GetDeviceInformationResponse.Manufacturer = "This is sample onvif server";
    tds__GetDeviceInformationResponse.Model = "2";
    tds__GetDeviceInformationResponse.SerialNumber = "100000";

    return SOAP_OK;
}

/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceServiceExt::SetSystemDateAndTime(_tds__SetSystemDateAndTime *tds__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &tds__SetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemDateAndTime(_tds__GetSystemDateAndTime *tds__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &tds__GetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
int DeviceServiceExt::SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *tds__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &tds__SetSystemFactoryDefaultResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
int DeviceServiceExt::UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *tds__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &tds__UpgradeSystemFirmwareResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
int DeviceServiceExt::SystemReboot(_tds__SystemReboot *tds__SystemReboot, _tds__SystemRebootResponse &tds__SystemRebootResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
int DeviceServiceExt::RestoreSystem(_tds__RestoreSystem *tds__RestoreSystem, _tds__RestoreSystemResponse &tds__RestoreSystemResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemBackup(_tds__GetSystemBackup *tds__GetSystemBackup, _tds__GetSystemBackupResponse &tds__GetSystemBackupResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemLog(_tds__GetSystemLog *tds__GetSystemLog, _tds__GetSystemLogResponse &tds__GetSystemLogResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemSupportInformation(_tds__GetSystemSupportInformation *tds__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &tds__GetSystemSupportInformationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::GetScopes(_tds__GetScopes *tds__GetScopes, _tds__GetScopesResponse &tds__GetScopesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetScopes , DeviceLib in NVT\n";

    tt__Scope * scope1 = new tt__Scope;
    scope1->ScopeDef = tt__ScopeDefinition__Fixed;
    scope1->ScopeItem = "onvif://www.onvif.org/Profile/Streaming";
    tds__GetScopesResponse.Scopes.push_back(scope1);

    tt__Scope * scope2 = new tt__Scope;
    scope2->ScopeDef = tt__ScopeDefinition__Fixed;
    scope2->ScopeItem = "onvif://www.onvif.org/location/country/azerbaijan";
    tds__GetScopesResponse.Scopes.push_back(scope2);

    tt__Scope * scope3 = new tt__Scope;
    scope3->ScopeDef = tt__ScopeDefinition__Fixed;
    scope3->ScopeItem = "onvif://www.onvif.org/type/video_server";
    //scope3->ScopeItem = "onvif://www.onvif.org/type/NetworkVideoStorage";
    tds__GetScopesResponse.Scopes.push_back(scope3);

    tt__Scope * scope4 = new tt__Scope;
    scope4->ScopeDef = tt__ScopeDefinition__Fixed;
    scope4->ScopeItem = "onvif://www.onvif.org/name/VideoServer";
    tds__GetScopesResponse.Scopes.push_back(scope4);

    tt__Scope * scope5 = new tt__Scope;
    scope5->ScopeDef = tt__ScopeDefinition__Fixed;
    scope5->ScopeItem = "onvif://www.onvif.org/hardware/NVT";
    tds__GetScopesResponse.Scopes.push_back(scope5);

    return SOAP_OK;
}

/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::SetScopes(_tds__SetScopes *tds__SetScopes, _tds__SetScopesResponse &tds__SetScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::AddScopes(_tds__AddScopes *tds__AddScopes, _tds__AddScopesResponse &tds__AddScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::RemoveScopes(_tds__RemoveScopes *tds__RemoveScopes, _tds__RemoveScopesResponse &tds__RemoveScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDiscoveryMode(_tds__GetDiscoveryMode *tds__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &tds__GetDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDiscoveryMode(_tds__SetDiscoveryMode *tds__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &tds__SetDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *tds__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &tds__GetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *tds__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &tds__SetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDPAddresses(_tds__GetDPAddresses *tds__GetDPAddresses, _tds__GetDPAddressesResponse &tds__GetDPAddressesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
int DeviceServiceExt::GetEndpointReference(_tds__GetEndpointReference *tds__GetEndpointReference, _tds__GetEndpointReferenceResponse &tds__GetEndpointReferenceResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRemoteUser(_tds__GetRemoteUser *tds__GetRemoteUser, _tds__GetRemoteUserResponse &tds__GetRemoteUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRemoteUser(_tds__SetRemoteUser *tds__SetRemoteUser, _tds__SetRemoteUserResponse &tds__SetRemoteUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::GetUsers(_tds__GetUsers *tds__GetUsers, _tds__GetUsersResponse &tds__GetUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateUsers(_tds__CreateUsers *tds__CreateUsers, _tds__CreateUsersResponse &tds__CreateUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteUsers(_tds__DeleteUsers *tds__DeleteUsers, _tds__DeleteUsersResponse &tds__DeleteUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetUser' (returns error code or SOAP_OK)
int DeviceServiceExt::SetUser(_tds__SetUser *tds__SetUser, _tds__SetUserResponse &tds__SetUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
int DeviceServiceExt::GetWsdlUrl(_tds__GetWsdlUrl *tds__GetWsdlUrl, _tds__GetWsdlUrlResponse &tds__GetWsdlUrlResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCapabilities(_tds__GetCapabilities *tds__GetCapabilities, _tds__GetCapabilitiesResponse &tds__GetCapabilitiesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetCapabilities , DeviceLib in NVT\n";


    tds__GetCapabilitiesResponse.Capabilities = new tt__Capabilities();

    tds__GetCapabilitiesResponse.Capabilities->Media = new tt__MediaCapabilities();
    tds__GetCapabilitiesResponse.Capabilities->Media->XAddr =  OnvifServerThread::addrsStr.toStdString();
    tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities =  new tt__RealTimeStreamingCapabilities();

    //        tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTPMulticast = 0;
    //        tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP = 0;
    //        tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORETCP = 0;
    //        tds__GetCapabilitiesResponse.Capabilities->Media->Extension = new tt__MediaCapabilitiesExtension;
    //        tds__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities = new tt__ProfileCapabilities;
    //        tds__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities->MaximumNumberOfProfiles = 50;


    tds__GetCapabilitiesResponse.Capabilities->Analytics = new tt__AnalyticsCapabilities;
    tds__GetCapabilitiesResponse.Capabilities->Analytics->XAddr = OnvifServerThread::addrsStr.toStdString();
    tds__GetCapabilitiesResponse.Capabilities->Analytics->RuleSupport = false;
    tds__GetCapabilitiesResponse.Capabilities->Analytics->AnalyticsModuleSupport = false;


    tds__GetCapabilitiesResponse.Capabilities->Imaging = new tt__ImagingCapabilities;
    tds__GetCapabilitiesResponse.Capabilities->Imaging->XAddr =  OnvifServerThread::addrsStr.toStdString();


    tds__GetCapabilitiesResponse.Capabilities->PTZ = new tt__PTZCapabilities;
    tds__GetCapabilitiesResponse.Capabilities->PTZ->XAddr =  OnvifServerThread::addrsStr.toStdString();


    tds__GetCapabilitiesResponse.Capabilities->Events = new tt__EventCapabilities;
    tds__GetCapabilitiesResponse.Capabilities->Events->XAddr =  OnvifServerThread::addrsStr.toStdString();


    tds__GetCapabilitiesResponse.Capabilities->Extension = new tt__CapabilitiesExtension;
    tds__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice =  new tt__AnalyticsDeviceCapabilities;
    tds__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice->XAddr =  OnvifServerThread::addrsStr.toStdString();
    tds__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice->RuleSupport =  0;

    //tds__GetCapabilities->Category.at(0)

    //    tds__GetCapabilitiesResponse.Capabilities = new tt__Capabilities();

    ////    tds__GetCapabilitiesResponse.Capabilities->Analytics = new tt__AnalyticsCapabilities;
    ////    tds__GetCapabilitiesResponse.Capabilities->Analytics->XAddr = OnvifServerThread::addrsStr.toStdString();
    ////    tds__GetCapabilitiesResponse.Capabilities->Analytics->RuleSupport = true;
    ////    tds__GetCapabilitiesResponse.Capabilities->Analytics->AnalyticsModuleSupport = true;

    //    tds__GetCapabilitiesResponse.Capabilities->Media = new tt__MediaCapabilities;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->XAddr = OnvifServerThread::addrsStr.toStdString();
    //    tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities = new tt__RealTimeStreamingCapabilities;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTPMulticast = (bool*)1;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP = (bool*)1;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORETCP = (bool*)1;

    //    tds__GetCapabilitiesResponse.Capabilities->Media->Extension = new tt__MediaCapabilitiesExtension;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities = new tt__ProfileCapabilities;
    //    tds__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities->MaximumNumberOfProfiles = 50;
    return SOAP_OK;
}

/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDPAddresses(_tds__SetDPAddresses *tds__SetDPAddresses, _tds__SetDPAddressesResponse &tds__SetDPAddressesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
int DeviceServiceExt::GetHostname(_tds__GetHostname *tds__GetHostname, _tds__GetHostnameResponse &tds__GetHostnameResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
int DeviceServiceExt::SetHostname(_tds__SetHostname *tds__SetHostname, _tds__SetHostnameResponse &tds__SetHostnameResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
int DeviceServiceExt::SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *tds__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &tds__SetHostnameFromDHCPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDNS(_tds__GetDNS *tds__GetDNS, _tds__GetDNSResponse &tds__GetDNSResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetDNS  in NVT\n";
    //    tds__GetDNSResponse.DNSInformation = new tt__DNSInformation;
    //    tds__GetDNSResponse.DNSInformation->FromDHCP = false;

    //    tt__IPAddress * ipaddress = new tt__IPAddress;
    //    ipaddress->Type = tt__IPType__IPv4;
    //    ipaddress->IPv4Address = new std::string;
    //    ipaddress->IPv4Address->assign("172.16.6.250");

    //    tds__GetDNSResponse.DNSInformation->DNSManual.push_back(ipaddress);
    return SOAP_OK;
}

/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDNS(_tds__SetDNS *tds__SetDNS, _tds__SetDNSResponse &tds__SetDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNTP(_tds__GetNTP *tds__GetNTP, _tds__GetNTPResponse &tds__GetNTPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNTP(_tds__SetNTP *tds__SetNTP, _tds__SetNTPResponse &tds__SetNTPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDynamicDNS(_tds__GetDynamicDNS *tds__GetDynamicDNS, _tds__GetDynamicDNSResponse &tds__GetDynamicDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDynamicDNS(_tds__SetDynamicDNS *tds__SetDynamicDNS, _tds__SetDynamicDNSResponse &tds__SetDynamicDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkInterfaces(_tds__GetNetworkInterfaces *tds__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &tds__GetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetNetworkInterfaces  in NVT\n";

    tt__NetworkInterface * nwi = new tt__NetworkInterface;
    nwi->token = "eth0";
    nwi->Enabled = true;

    nwi->Info = new tt__NetworkInterfaceInfo;
    nwi->Info->HwAddress = "A0:B3:CC:FD:68:EE";
    int x = 1500;
    nwi->Info->MTU = &x;

    nwi->IPv4 = new tt__IPv4NetworkInterface;
    nwi->IPv4->Enabled = true;

    nwi->IPv4->Config = new tt__IPv4Configuration;

    tt__PrefixedIPv4Address * prefixedAdd = new tt__PrefixedIPv4Address;
    prefixedAdd->Address = OnvifServerThread::ipStr.toStdString();
    prefixedAdd->PrefixLength = 24;
    nwi->IPv4->Config->Manual.push_back(prefixedAdd);

    nwi->IPv4->Config->DHCP = false;

    tds__GetNetworkInterfacesResponse.NetworkInterfaces.push_back(nwi);
    return SOAP_OK;
}

/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkInterfaces(_tds__SetNetworkInterfaces *tds__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &tds__SetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkProtocols(_tds__GetNetworkProtocols *tds__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &tds__GetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkProtocols(_tds__SetNetworkProtocols *tds__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &tds__SetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *tds__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &tds__GetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *tds__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &tds__SetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetZeroConfiguration(_tds__GetZeroConfiguration *tds__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &tds__GetZeroConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetZeroConfiguration(_tds__SetZeroConfiguration *tds__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &tds__SetZeroConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::GetIPAddressFilter(_tds__GetIPAddressFilter *tds__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &tds__GetIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::SetIPAddressFilter(_tds__SetIPAddressFilter *tds__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &tds__SetIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::AddIPAddressFilter(_tds__AddIPAddressFilter *tds__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &tds__AddIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *tds__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &tds__RemoveIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
int DeviceServiceExt::GetAccessPolicy(_tds__GetAccessPolicy *tds__GetAccessPolicy, _tds__GetAccessPolicyResponse &tds__GetAccessPolicyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
int DeviceServiceExt::SetAccessPolicy(_tds__SetAccessPolicy *tds__SetAccessPolicy, _tds__SetAccessPolicyResponse &tds__SetAccessPolicyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateCertificate(_tds__CreateCertificate *tds__CreateCertificate, _tds__CreateCertificateResponse &tds__CreateCertificateResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificates(_tds__GetCertificates *tds__GetCertificates, _tds__GetCertificatesResponse &tds__GetCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificatesStatus(_tds__GetCertificatesStatus *tds__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &tds__GetCertificatesStatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceServiceExt::SetCertificatesStatus(_tds__SetCertificatesStatus *tds__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &tds__SetCertificatesStatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteCertificates(_tds__DeleteCertificates *tds__DeleteCertificates, _tds__DeleteCertificatesResponse &tds__DeleteCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
int DeviceServiceExt::GetPkcs10Request(_tds__GetPkcs10Request *tds__GetPkcs10Request, _tds__GetPkcs10RequestResponse &tds__GetPkcs10RequestResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCertificates(_tds__LoadCertificates *tds__LoadCertificates, _tds__LoadCertificatesResponse &tds__LoadCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetClientCertificateMode(_tds__GetClientCertificateMode *tds__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &tds__GetClientCertificateModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetClientCertificateMode(_tds__SetClientCertificateMode *tds__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &tds__SetClientCertificateModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRelayOutputs(_tds__GetRelayOutputs *tds__GetRelayOutputs, _tds__GetRelayOutputsResponse &tds__GetRelayOutputsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRelayOutputSettings(_tds__SetRelayOutputSettings *tds__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &tds__SetRelayOutputSettingsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRelayOutputState(_tds__SetRelayOutputState *tds__SetRelayOutputState, _tds__SetRelayOutputStateResponse &tds__SetRelayOutputStateResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int DeviceServiceExt::SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *tds__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &tds__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCACertificates(_tds__GetCACertificates *tds__GetCACertificates, _tds__GetCACertificatesResponse &tds__GetCACertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *tds__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &tds__LoadCertificateWithPrivateKeyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificateInformation(_tds__GetCertificateInformation *tds__GetCertificateInformation, _tds__GetCertificateInformationResponse &tds__GetCertificateInformationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCACertificates(_tds__LoadCACertificates *tds__LoadCACertificates, _tds__LoadCACertificatesResponse &tds__LoadCACertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *tds__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &tds__CreateDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDot1XConfiguration(_tds__SetDot1XConfiguration *tds__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &tds__SetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot1XConfiguration(_tds__GetDot1XConfiguration *tds__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &tds__GetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot1XConfigurations(_tds__GetDot1XConfigurations *tds__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &tds__GetDot1XConfigurationsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *tds__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &tds__DeleteDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot11Capabilities(_tds__GetDot11Capabilities *tds__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &tds__GetDot11CapabilitiesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot11Status(_tds__GetDot11Status *tds__GetDot11Status, _tds__GetDot11StatusResponse &tds__GetDot11StatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
int DeviceServiceExt::ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *tds__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &tds__ScanAvailableDot11NetworksResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemUris(_tds__GetSystemUris *tds__GetSystemUris, _tds__GetSystemUrisResponse &tds__GetSystemUrisResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
int DeviceServiceExt::StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *tds__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &tds__StartFirmwareUpgradeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
int DeviceServiceExt::StartSystemRestore(_tds__StartSystemRestore *tds__StartSystemRestore, _tds__StartSystemRestoreResponse &tds__StartSystemRestoreResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
int DeviceServiceExt::GetStorageConfigurations(_tds__GetStorageConfigurations *tds__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &tds__GetStorageConfigurationsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateStorageConfiguration(_tds__CreateStorageConfiguration *tds__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &tds__CreateStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetStorageConfiguration(_tds__GetStorageConfiguration *tds__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &tds__GetStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetStorageConfiguration(_tds__SetStorageConfiguration *tds__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &tds__SetStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *tds__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &tds__DeleteStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}


/// Web service operation 'GetGeoLocation' (returns error code or SOAP_OK)
int DeviceServiceExt::GetGeoLocation(_tds__GetGeoLocation *tds__GetGeoLocation, _tds__GetGeoLocationResponse &tds__GetGeoLocationResponse){
  return SOAP_OK;
}

/// Web service operation 'SetGeoLocation' (returns error code or SOAP_OK)
int DeviceServiceExt::SetGeoLocation(_tds__SetGeoLocation *tds__SetGeoLocation, _tds__SetGeoLocationResponse &tds__SetGeoLocationResponse){
    return SOAP_OK;
}

/// Web service operation 'DeleteGeoLocation' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteGeoLocation(_tds__DeleteGeoLocation *tds__DeleteGeoLocation, _tds__DeleteGeoLocationResponse &tds__DeleteGeoLocationResponse){
    return SOAP_OK;
}
