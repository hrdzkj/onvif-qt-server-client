#ifndef DEVICESERVICEEXTABST_H
#define DEVICESERVICEEXTABST_H

#include "soap/onvifdeviceH.h"

class DeviceServiceExtAbst
{
public:
    DeviceServiceExtAbst(){

    };

    /// Web service operation 'GetServices' (returns error code or SOAP_OK)
    virtual	int GetServices(_tds__GetServices *devicews__GetServices, _tds__GetServicesResponse &devicews__GetServicesResponse)  = 0;

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_tds__GetServiceCapabilities *devicews__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
    virtual	int GetDeviceInformation(_tds__GetDeviceInformation *devicews__GetDeviceInformation, _tds__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse)  = 0;

    /// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
    virtual	int SetSystemDateAndTime(_tds__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse)  = 0;

    /// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
    virtual	int GetSystemDateAndTime(_tds__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse)  = 0;

    /// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
    virtual	int SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse)  = 0;

    /// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
    virtual	int UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse)  = 0;

    /// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
    virtual	int SystemReboot(_tds__SystemReboot *devicews__SystemReboot, _tds__SystemRebootResponse &devicews__SystemRebootResponse)  = 0;

    /// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
    virtual	int RestoreSystem(_tds__RestoreSystem *devicews__RestoreSystem, _tds__RestoreSystemResponse &devicews__RestoreSystemResponse)  = 0;

    /// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
    virtual	int GetSystemBackup(_tds__GetSystemBackup *devicews__GetSystemBackup, _tds__GetSystemBackupResponse &devicews__GetSystemBackupResponse)  = 0;

    /// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
    virtual	int GetSystemLog(_tds__GetSystemLog *devicews__GetSystemLog, _tds__GetSystemLogResponse &devicews__GetSystemLogResponse)  = 0;

    /// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
    virtual	int GetSystemSupportInformation(_tds__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse)  = 0;

    /// Web service operation 'GetScopes' (returns error code or SOAP_OK)
    virtual	int GetScopes(_tds__GetScopes *devicews__GetScopes, _tds__GetScopesResponse &devicews__GetScopesResponse)  = 0;

    /// Web service operation 'SetScopes' (returns error code or SOAP_OK)
    virtual	int SetScopes(_tds__SetScopes *devicews__SetScopes, _tds__SetScopesResponse &devicews__SetScopesResponse)  = 0;

    /// Web service operation 'AddScopes' (returns error code or SOAP_OK)
    virtual	int AddScopes(_tds__AddScopes *devicews__AddScopes, _tds__AddScopesResponse &devicews__AddScopesResponse)  = 0;

    /// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
    virtual	int RemoveScopes(_tds__RemoveScopes *devicews__RemoveScopes, _tds__RemoveScopesResponse &devicews__RemoveScopesResponse)  = 0;

    /// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int GetDiscoveryMode(_tds__GetDiscoveryMode *devicews__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse)  = 0;

    /// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int SetDiscoveryMode(_tds__SetDiscoveryMode *devicews__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse)  = 0;

    /// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse)  = 0;

    /// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse)  = 0;

    /// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
    virtual	int GetDPAddresses(_tds__GetDPAddresses *devicews__GetDPAddresses, _tds__GetDPAddressesResponse &devicews__GetDPAddressesResponse)  = 0;

    /// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
    virtual	int GetEndpointReference(_tds__GetEndpointReference *devicews__GetEndpointReference, _tds__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse)  = 0;

    /// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
    virtual	int GetRemoteUser(_tds__GetRemoteUser *devicews__GetRemoteUser, _tds__GetRemoteUserResponse &devicews__GetRemoteUserResponse)  = 0;

    /// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
    virtual	int SetRemoteUser(_tds__SetRemoteUser *devicews__SetRemoteUser, _tds__SetRemoteUserResponse &devicews__SetRemoteUserResponse)  = 0;

    /// Web service operation 'GetUsers' (returns error code or SOAP_OK)
    virtual	int GetUsers(_tds__GetUsers *devicews__GetUsers, _tds__GetUsersResponse &devicews__GetUsersResponse)  = 0;

    /// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
    virtual	int CreateUsers(_tds__CreateUsers *devicews__CreateUsers, _tds__CreateUsersResponse &devicews__CreateUsersResponse)  = 0;

    /// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
    virtual	int DeleteUsers(_tds__DeleteUsers *devicews__DeleteUsers, _tds__DeleteUsersResponse &devicews__DeleteUsersResponse)  = 0;

    /// Web service operation 'SetUser' (returns error code or SOAP_OK)
    virtual	int SetUser(_tds__SetUser *devicews__SetUser, _tds__SetUserResponse &devicews__SetUserResponse)  = 0;

    /// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
    virtual	int GetWsdlUrl(_tds__GetWsdlUrl *devicews__GetWsdlUrl, _tds__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse)  = 0;

    /// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
    virtual	int GetCapabilities(_tds__GetCapabilities *devicews__GetCapabilities, _tds__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse)  = 0;

    /// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
    virtual	int SetDPAddresses(_tds__SetDPAddresses *devicews__SetDPAddresses, _tds__SetDPAddressesResponse &devicews__SetDPAddressesResponse)  = 0;

    /// Web service operation 'GetHostname' (returns error code or SOAP_OK)
    virtual	int GetHostname(_tds__GetHostname *devicews__GetHostname, _tds__GetHostnameResponse &devicews__GetHostnameResponse)  = 0;

    /// Web service operation 'SetHostname' (returns error code or SOAP_OK)
    virtual	int SetHostname(_tds__SetHostname *devicews__SetHostname, _tds__SetHostnameResponse &devicews__SetHostnameResponse)  = 0;

    /// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
    virtual	int SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse)  = 0;

    /// Web service operation 'GetDNS' (returns error code or SOAP_OK)
    virtual	int GetDNS(_tds__GetDNS *devicews__GetDNS, _tds__GetDNSResponse &devicews__GetDNSResponse)  = 0;

    /// Web service operation 'SetDNS' (returns error code or SOAP_OK)
    virtual	int SetDNS(_tds__SetDNS *devicews__SetDNS, _tds__SetDNSResponse &devicews__SetDNSResponse)  = 0;

    /// Web service operation 'GetNTP' (returns error code or SOAP_OK)
    virtual	int GetNTP(_tds__GetNTP *devicews__GetNTP, _tds__GetNTPResponse &devicews__GetNTPResponse)  = 0;

    /// Web service operation 'SetNTP' (returns error code or SOAP_OK)
    virtual	int SetNTP(_tds__SetNTP *devicews__SetNTP, _tds__SetNTPResponse &devicews__SetNTPResponse)  = 0;

    /// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
    virtual	int GetDynamicDNS(_tds__GetDynamicDNS *devicews__GetDynamicDNS, _tds__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse)  = 0;

    /// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
    virtual	int SetDynamicDNS(_tds__SetDynamicDNS *devicews__SetDynamicDNS, _tds__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse)  = 0;

    /// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
    virtual	int GetNetworkInterfaces(_tds__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse)  = 0;

    /// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
    virtual	int SetNetworkInterfaces(_tds__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse)  = 0;

    /// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
    virtual	int GetNetworkProtocols(_tds__GetNetworkProtocols *devicews__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse)  = 0;

    /// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
    virtual	int SetNetworkProtocols(_tds__SetNetworkProtocols *devicews__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse)  = 0;

    /// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
    virtual	int GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse)  = 0;

    /// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
    virtual	int SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse)  = 0;

    /// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
    virtual	int GetZeroConfiguration(_tds__GetZeroConfiguration *devicews__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse)  = 0;

    /// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
    virtual	int SetZeroConfiguration(_tds__SetZeroConfiguration *devicews__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse)  = 0;

    /// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int GetIPAddressFilter(_tds__GetIPAddressFilter *devicews__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse)  = 0;

    /// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int SetIPAddressFilter(_tds__SetIPAddressFilter *devicews__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse)  = 0;

    /// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int AddIPAddressFilter(_tds__AddIPAddressFilter *devicews__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse)  = 0;

    /// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse)  = 0;

    /// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
    virtual	int GetAccessPolicy(_tds__GetAccessPolicy *devicews__GetAccessPolicy, _tds__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse)  = 0;

    /// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
    virtual	int SetAccessPolicy(_tds__SetAccessPolicy *devicews__SetAccessPolicy, _tds__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse)  = 0;

    /// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
    virtual	int CreateCertificate(_tds__CreateCertificate *devicews__CreateCertificate, _tds__CreateCertificateResponse &devicews__CreateCertificateResponse)  = 0;

    /// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
    virtual	int GetCertificates(_tds__GetCertificates *devicews__GetCertificates, _tds__GetCertificatesResponse &devicews__GetCertificatesResponse)  = 0;

    /// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
    virtual	int GetCertificatesStatus(_tds__GetCertificatesStatus *devicews__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse)  = 0;

    /// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
    virtual	int SetCertificatesStatus(_tds__SetCertificatesStatus *devicews__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse)  = 0;

    /// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
    virtual	int DeleteCertificates(_tds__DeleteCertificates *devicews__DeleteCertificates, _tds__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse)  = 0;

    /// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
    virtual	int GetPkcs10Request(_tds__GetPkcs10Request *devicews__GetPkcs10Request, _tds__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse)  = 0;

    /// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
    virtual	int LoadCertificates(_tds__LoadCertificates *devicews__LoadCertificates, _tds__LoadCertificatesResponse &devicews__LoadCertificatesResponse)  = 0;

    /// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
    virtual	int GetClientCertificateMode(_tds__GetClientCertificateMode *devicews__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse)  = 0;

    /// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
    virtual	int SetClientCertificateMode(_tds__SetClientCertificateMode *devicews__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse)  = 0;

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    virtual	int GetRelayOutputs(_tds__GetRelayOutputs *devicews__GetRelayOutputs, _tds__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse)  = 0;

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputSettings(_tds__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse)  = 0;

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputState(_tds__SetRelayOutputState *devicews__SetRelayOutputState, _tds__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse)  = 0;

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    virtual	int SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse)  = 0;

    /// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
    virtual	int GetCACertificates(_tds__GetCACertificates *devicews__GetCACertificates, _tds__GetCACertificatesResponse &devicews__GetCACertificatesResponse)  = 0;

    /// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
    virtual	int LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse)  = 0;

    /// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
    virtual	int GetCertificateInformation(_tds__GetCertificateInformation *devicews__GetCertificateInformation, _tds__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse)  = 0;

    /// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
    virtual	int LoadCACertificates(_tds__LoadCACertificates *devicews__LoadCACertificates, _tds__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse)  = 0;

    /// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse)  = 0;

    /// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int SetDot1XConfiguration(_tds__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int GetDot1XConfiguration(_tds__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
    virtual	int GetDot1XConfigurations(_tds__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse)  = 0;

    /// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
    virtual	int GetDot11Capabilities(_tds__GetDot11Capabilities *devicews__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse)  = 0;

    /// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
    virtual	int GetDot11Status(_tds__GetDot11Status *devicews__GetDot11Status, _tds__GetDot11StatusResponse &devicews__GetDot11StatusResponse)  = 0;

    /// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
    virtual	int ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse)  = 0;

    /// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
    virtual	int GetSystemUris(_tds__GetSystemUris *devicews__GetSystemUris, _tds__GetSystemUrisResponse &devicews__GetSystemUrisResponse)  = 0;

    /// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
    virtual	int StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse)  = 0;

    /// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
    virtual	int StartSystemRestore(_tds__StartSystemRestore *devicews__StartSystemRestore, _tds__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse)  = 0;

    /// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
    virtual	int GetStorageConfigurations(_tds__GetStorageConfigurations *devicews__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse)  = 0;

    /// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int CreateStorageConfiguration(_tds__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse)  = 0;

    /// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int GetStorageConfiguration(_tds__GetStorageConfiguration *devicews__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse)  = 0;

    /// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int SetStorageConfiguration(_tds__SetStorageConfiguration *devicews__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse)  = 0;

    /// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse)  = 0;

};

#endif // DEVICESERVICEEXTABST_H
