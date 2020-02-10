#include "soap/onvifdeviceDeviceBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/deviceservice.h"

DeviceServiceExtAbst * DeviceService::dse = NULL;


/// Web service operation 'GetServices' (returns error code or SOAP_OK)
int DeviceBindingService::GetServices(_tds__GetServices *devicews__GetServices, _tds__GetServicesResponse &devicews__GetServicesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetServices(devicews__GetServices, devicews__GetServicesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetServiceCapabilities(_tds__GetServiceCapabilities *devicews__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetServiceCapabilities(devicews__GetServiceCapabilities,devicews__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetDeviceInformation(_tds__GetDeviceInformation *devicews__GetDeviceInformation, _tds__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDeviceInformation(devicews__GetDeviceInformation, devicews__GetDeviceInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemDateAndTime(_tds__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetSystemDateAndTime(devicews__SetSystemDateAndTime,devicews__SetSystemDateAndTimeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemDateAndTime(_tds__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemDateAndTime(devicews__GetSystemDateAndTime,devicews__GetSystemDateAndTimeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetSystemFactoryDefault(devicews__SetSystemFactoryDefault,devicews__SetSystemFactoryDefaultResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
int DeviceBindingService::UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->UpgradeSystemFirmware(devicews__UpgradeSystemFirmware,devicews__UpgradeSystemFirmwareResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
int DeviceBindingService::SystemReboot(_tds__SystemReboot *devicews__SystemReboot, _tds__SystemRebootResponse &devicews__SystemRebootResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SystemReboot(devicews__SystemReboot,devicews__SystemRebootResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
int DeviceBindingService::RestoreSystem(_tds__RestoreSystem *devicews__RestoreSystem, _tds__RestoreSystemResponse &devicews__RestoreSystemResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RestoreSystem(devicews__RestoreSystem, devicews__RestoreSystemResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemBackup(_tds__GetSystemBackup *devicews__GetSystemBackup, _tds__GetSystemBackupResponse &devicews__GetSystemBackupResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemBackup(devicews__GetSystemBackup,devicews__GetSystemBackupResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemLog(_tds__GetSystemLog *devicews__GetSystemLog, _tds__GetSystemLogResponse &devicews__GetSystemLogResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemLog(devicews__GetSystemLog,devicews__GetSystemLogResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemSupportInformation(_tds__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemSupportInformation(devicews__GetSystemSupportInformation,devicews__GetSystemSupportInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::GetScopes(_tds__GetScopes *devicews__GetScopes, _tds__GetScopesResponse &devicews__GetScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetScopes(devicews__GetScopes,devicews__GetScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::SetScopes(_tds__SetScopes *devicews__SetScopes, _tds__SetScopesResponse &devicews__SetScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetScopes(devicews__SetScopes,devicews__SetScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
int DeviceBindingService::AddScopes(_tds__AddScopes *devicews__AddScopes, _tds__AddScopesResponse &devicews__AddScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->AddScopes(devicews__AddScopes,devicews__AddScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveScopes(_tds__RemoveScopes *devicews__RemoveScopes, _tds__RemoveScopesResponse &devicews__RemoveScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RemoveScopes(devicews__RemoveScopes, devicews__RemoveScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetDiscoveryMode(_tds__GetDiscoveryMode *devicews__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDiscoveryMode(devicews__GetDiscoveryMode, devicews__GetDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetDiscoveryMode(_tds__SetDiscoveryMode *devicews__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDiscoveryMode(devicews__SetDiscoveryMode,devicews__SetDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRemoteDiscoveryMode(devicews__GetRemoteDiscoveryMode, devicews__GetRemoteDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRemoteDiscoveryMode(devicews__SetRemoteDiscoveryMode, devicews__SetRemoteDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::GetDPAddresses(_tds__GetDPAddresses *devicews__GetDPAddresses, _tds__GetDPAddressesResponse &devicews__GetDPAddressesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDPAddresses(devicews__GetDPAddresses, devicews__GetDPAddressesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
int DeviceBindingService::GetEndpointReference(_tds__GetEndpointReference *devicews__GetEndpointReference, _tds__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetEndpointReference(devicews__GetEndpointReference, devicews__GetEndpointReferenceResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteUser(_tds__GetRemoteUser *devicews__GetRemoteUser, _tds__GetRemoteUserResponse &devicews__GetRemoteUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRemoteUser(devicews__GetRemoteUser, devicews__GetRemoteUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteUser(_tds__SetRemoteUser *devicews__SetRemoteUser, _tds__SetRemoteUserResponse &devicews__SetRemoteUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRemoteUser(devicews__SetRemoteUser, devicews__SetRemoteUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
int DeviceBindingService::GetUsers(_tds__GetUsers *devicews__GetUsers, _tds__GetUsersResponse &devicews__GetUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetUsers(devicews__GetUsers,devicews__GetUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
int DeviceBindingService::CreateUsers(_tds__CreateUsers *devicews__CreateUsers, _tds__CreateUsersResponse &devicews__CreateUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateUsers(devicews__CreateUsers, devicews__CreateUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteUsers(_tds__DeleteUsers *devicews__DeleteUsers, _tds__DeleteUsersResponse &devicews__DeleteUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteUsers(devicews__DeleteUsers, devicews__DeleteUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetUser(_tds__SetUser *devicews__SetUser, _tds__SetUserResponse &devicews__SetUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetUser(devicews__SetUser, devicews__SetUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
int DeviceBindingService::GetWsdlUrl(_tds__GetWsdlUrl *devicews__GetWsdlUrl, _tds__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetWsdlUrl(devicews__GetWsdlUrl, devicews__GetWsdlUrlResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetCapabilities(_tds__GetCapabilities *devicews__GetCapabilities, _tds__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCapabilities(devicews__GetCapabilities,  devicews__GetCapabilitiesResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::SetDPAddresses(_tds__SetDPAddresses *devicews__SetDPAddresses, _tds__SetDPAddressesResponse &devicews__SetDPAddressesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDPAddresses(devicews__SetDPAddresses,  devicews__SetDPAddressesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::GetHostname(_tds__GetHostname *devicews__GetHostname, _tds__GetHostnameResponse &devicews__GetHostnameResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetHostname(devicews__GetHostname,  devicews__GetHostnameResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostname(_tds__SetHostname *devicews__SetHostname, _tds__SetHostnameResponse &devicews__SetHostnameResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetHostname(devicews__SetHostname, devicews__SetHostnameResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetHostnameFromDHCP(devicews__SetHostnameFromDHCP,  devicews__SetHostnameFromDHCPResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDNS(_tds__GetDNS *devicews__GetDNS, _tds__GetDNSResponse &devicews__GetDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDNS(devicews__GetDNS,  devicews__GetDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDNS(_tds__SetDNS *devicews__SetDNS, _tds__SetDNSResponse &devicews__SetDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDNS(devicews__SetDNS,  devicews__SetDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::GetNTP(_tds__GetNTP *devicews__GetNTP, _tds__GetNTPResponse &devicews__GetNTPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNTP(devicews__GetNTP,  devicews__GetNTPResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::SetNTP(_tds__SetNTP *devicews__SetNTP, _tds__SetNTPResponse &devicews__SetNTPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNTP(devicews__SetNTP,  devicews__SetNTPResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDynamicDNS(_tds__GetDynamicDNS *devicews__GetDynamicDNS, _tds__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDynamicDNS(devicews__GetDynamicDNS,  devicews__GetDynamicDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDynamicDNS(_tds__SetDynamicDNS *devicews__SetDynamicDNS, _tds__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDynamicDNS(devicews__SetDynamicDNS,  devicews__SetDynamicDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkInterfaces(_tds__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkInterfaces(devicews__GetNetworkInterfaces,  devicews__GetNetworkInterfacesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkInterfaces(_tds__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkInterfaces(devicews__SetNetworkInterfaces, devicews__SetNetworkInterfacesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkProtocols(_tds__GetNetworkProtocols *devicews__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkProtocols(devicews__GetNetworkProtocols,  devicews__GetNetworkProtocolsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkProtocols(_tds__SetNetworkProtocols *devicews__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkProtocols(devicews__SetNetworkProtocols,  devicews__SetNetworkProtocolsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkDefaultGateway(devicews__GetNetworkDefaultGateway,  devicews__GetNetworkDefaultGatewayResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkDefaultGateway(devicews__SetNetworkDefaultGateway,  devicews__SetNetworkDefaultGatewayResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetZeroConfiguration(_tds__GetZeroConfiguration *devicews__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetZeroConfiguration(devicews__GetZeroConfiguration,  devicews__GetZeroConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetZeroConfiguration(_tds__SetZeroConfiguration *devicews__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetZeroConfiguration(devicews__SetZeroConfiguration,  devicews__SetZeroConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::GetIPAddressFilter(_tds__GetIPAddressFilter *devicews__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetIPAddressFilter(devicews__GetIPAddressFilter,  devicews__GetIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::SetIPAddressFilter(_tds__SetIPAddressFilter *devicews__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetIPAddressFilter(devicews__SetIPAddressFilter,  devicews__SetIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::AddIPAddressFilter(_tds__AddIPAddressFilter *devicews__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->AddIPAddressFilter(devicews__AddIPAddressFilter,  devicews__AddIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RemoveIPAddressFilter(devicews__RemoveIPAddressFilter, devicews__RemoveIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::GetAccessPolicy(_tds__GetAccessPolicy *devicews__GetAccessPolicy, _tds__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetAccessPolicy(devicews__GetAccessPolicy,  devicews__GetAccessPolicyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::SetAccessPolicy(_tds__SetAccessPolicy *devicews__SetAccessPolicy, _tds__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetAccessPolicy(devicews__SetAccessPolicy,  devicews__SetAccessPolicyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
int DeviceBindingService::CreateCertificate(_tds__CreateCertificate *devicews__CreateCertificate, _tds__CreateCertificateResponse &devicews__CreateCertificateResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateCertificate(devicews__CreateCertificate,  devicews__CreateCertificateResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificates(_tds__GetCertificates *devicews__GetCertificates, _tds__GetCertificatesResponse &devicews__GetCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificates(devicews__GetCertificates, devicews__GetCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificatesStatus(_tds__GetCertificatesStatus *devicews__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificatesStatus(devicews__GetCertificatesStatus,  devicews__GetCertificatesStatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::SetCertificatesStatus(_tds__SetCertificatesStatus *devicews__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetCertificatesStatus(devicews__SetCertificatesStatus,  devicews__SetCertificatesStatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteCertificates(_tds__DeleteCertificates *devicews__DeleteCertificates, _tds__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteCertificates(devicews__DeleteCertificates, devicews__DeleteCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
int DeviceBindingService::GetPkcs10Request(_tds__GetPkcs10Request *devicews__GetPkcs10Request, _tds__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetPkcs10Request(devicews__GetPkcs10Request,  devicews__GetPkcs10RequestResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificates(_tds__LoadCertificates *devicews__LoadCertificates, _tds__LoadCertificatesResponse &devicews__LoadCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCertificates(devicews__LoadCertificates,  devicews__LoadCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetClientCertificateMode(_tds__GetClientCertificateMode *devicews__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetClientCertificateMode(devicews__GetClientCertificateMode,  devicews__GetClientCertificateModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetClientCertificateMode(_tds__SetClientCertificateMode *devicews__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetClientCertificateMode(devicews__SetClientCertificateMode,  devicews__SetClientCertificateModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceBindingService::GetRelayOutputs(_tds__GetRelayOutputs *devicews__GetRelayOutputs, _tds__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRelayOutputs(devicews__GetRelayOutputs,  devicews__GetRelayOutputsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputSettings(_tds__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRelayOutputSettings(devicews__SetRelayOutputSettings,  devicews__SetRelayOutputSettingsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputState(_tds__SetRelayOutputState *devicews__SetRelayOutputState, _tds__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRelayOutputState(devicews__SetRelayOutputState,  devicews__SetRelayOutputStateResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int DeviceBindingService::SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SendAuxiliaryCommand(devicews__SendAuxiliaryCommand,  devicews__SendAuxiliaryCommandResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCACertificates(_tds__GetCACertificates *devicews__GetCACertificates, _tds__GetCACertificatesResponse &devicews__GetCACertificatesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCACertificates(devicews__GetCACertificates,  devicews__GetCACertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCertificateWithPrivateKey(devicews__LoadCertificateWithPrivateKey,  devicews__LoadCertificateWithPrivateKeyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificateInformation(_tds__GetCertificateInformation *devicews__GetCertificateInformation, _tds__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificateInformation(devicews__GetCertificateInformation,  devicews__GetCertificateInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCACertificates(_tds__LoadCACertificates *devicews__LoadCACertificates, _tds__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCACertificates(devicews__LoadCACertificates,  devicews__LoadCACertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateDot1XConfiguration(devicews__CreateDot1XConfiguration,  devicews__CreateDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetDot1XConfiguration(_tds__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDot1XConfiguration(devicews__SetDot1XConfiguration,  devicews__SetDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfiguration(_tds__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot1XConfiguration(devicews__GetDot1XConfiguration,  devicews__GetDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfigurations(_tds__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot1XConfigurations(devicews__GetDot1XConfigurations,  devicews__GetDot1XConfigurationsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteDot1XConfiguration(devicews__DeleteDot1XConfiguration,  devicews__DeleteDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Capabilities(_tds__GetDot11Capabilities *devicews__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot11Capabilities(devicews__GetDot11Capabilities,  devicews__GetDot11CapabilitiesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Status(_tds__GetDot11Status *devicews__GetDot11Status, _tds__GetDot11StatusResponse &devicews__GetDot11StatusResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot11Status(devicews__GetDot11Status,  devicews__GetDot11StatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
int DeviceBindingService::ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->ScanAvailableDot11Networks(devicews__ScanAvailableDot11Networks,  devicews__ScanAvailableDot11NetworksResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemUris(_tds__GetSystemUris *devicews__GetSystemUris, _tds__GetSystemUrisResponse &devicews__GetSystemUrisResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemUris(devicews__GetSystemUris,  devicews__GetSystemUrisResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
int DeviceBindingService::StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->StartFirmwareUpgrade(devicews__StartFirmwareUpgrade,  devicews__StartFirmwareUpgradeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
int DeviceBindingService::StartSystemRestore(_tds__StartSystemRestore *devicews__StartSystemRestore, _tds__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->StartSystemRestore(devicews__StartSystemRestore,  devicews__StartSystemRestoreResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfigurations(_tds__GetStorageConfigurations *devicews__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetStorageConfigurations(devicews__GetStorageConfigurations,  devicews__GetStorageConfigurationsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateStorageConfiguration(_tds__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateStorageConfiguration(devicews__CreateStorageConfiguration, devicews__CreateStorageConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfiguration(_tds__GetStorageConfiguration *devicews__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetStorageConfiguration(devicews__GetStorageConfiguration, devicews__GetStorageConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetStorageConfiguration(_tds__SetStorageConfiguration *devicews__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetStorageConfiguration(devicews__SetStorageConfiguration,  devicews__SetStorageConfigurationResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteStorageConfiguration(devicews__DeleteStorageConfiguration, devicews__DeleteStorageConfigurationResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}


int  DeviceBindingService::GetGeoLocation(_tds__GetGeoLocation *tds__GetGeoLocation, _tds__GetGeoLocationResponse &tds__GetGeoLocationResponse){
    if(DeviceService::dse != NULL){
        return 0 ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }

}

int DeviceBindingService::SetGeoLocation(_tds__SetGeoLocation *tds__SetGeoLocation, _tds__SetGeoLocationResponse &tds__SetGeoLocationResponse){
    if(DeviceService::dse != NULL){
        return 0 ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}


int DeviceBindingService::DeleteGeoLocation(_tds__DeleteGeoLocation *tds__DeleteGeoLocation, _tds__DeleteGeoLocationResponse &tds__DeleteGeoLocationResponse){
    if(DeviceService::dse != NULL){
        return 0 ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }

}
