#ifndef DEVICESERVICEEXT_H
#define DEVICESERVICEEXT_H
#include "device/deviceserviceextabst.h"


class DeviceServiceExt : public DeviceServiceExtAbst
{
public:
    DeviceServiceExt();

    /// Web service operation 'GetServices' (returns error code or SOAP_OK)
    int GetServices(_tds__GetServices *devicews__GetServices, _tds__GetServicesResponse &devicews__GetServicesResponse);

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_tds__GetServiceCapabilities *devicews__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
    int GetDeviceInformation(_tds__GetDeviceInformation *devicews__GetDeviceInformation, _tds__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse);

    /// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
    int SetSystemDateAndTime(_tds__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse);

    /// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
    int GetSystemDateAndTime(_tds__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse);

    /// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
    int SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse);

    /// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
    int UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse);

    /// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
    int SystemReboot(_tds__SystemReboot *devicews__SystemReboot, _tds__SystemRebootResponse &devicews__SystemRebootResponse);

    /// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
    int RestoreSystem(_tds__RestoreSystem *devicews__RestoreSystem, _tds__RestoreSystemResponse &devicews__RestoreSystemResponse);

    /// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
    int GetSystemBackup(_tds__GetSystemBackup *devicews__GetSystemBackup, _tds__GetSystemBackupResponse &devicews__GetSystemBackupResponse);

    /// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
    int GetSystemLog(_tds__GetSystemLog *devicews__GetSystemLog, _tds__GetSystemLogResponse &devicews__GetSystemLogResponse);

    /// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
    int GetSystemSupportInformation(_tds__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse);

    /// Web service operation 'GetScopes' (returns error code or SOAP_OK)
    int GetScopes(_tds__GetScopes *devicews__GetScopes, _tds__GetScopesResponse &devicews__GetScopesResponse);

    /// Web service operation 'SetScopes' (returns error code or SOAP_OK)
    int SetScopes(_tds__SetScopes *devicews__SetScopes, _tds__SetScopesResponse &devicews__SetScopesResponse);

    /// Web service operation 'AddScopes' (returns error code or SOAP_OK)
    int AddScopes(_tds__AddScopes *devicews__AddScopes, _tds__AddScopesResponse &devicews__AddScopesResponse);

    /// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
    int RemoveScopes(_tds__RemoveScopes *devicews__RemoveScopes, _tds__RemoveScopesResponse &devicews__RemoveScopesResponse);

    /// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
    int GetDiscoveryMode(_tds__GetDiscoveryMode *devicews__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse);

    /// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
    int SetDiscoveryMode(_tds__SetDiscoveryMode *devicews__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse);

    /// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    int GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse);

    /// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    int SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse);

    /// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
    int GetDPAddresses(_tds__GetDPAddresses *devicews__GetDPAddresses, _tds__GetDPAddressesResponse &devicews__GetDPAddressesResponse);

    /// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
    int GetEndpointReference(_tds__GetEndpointReference *devicews__GetEndpointReference, _tds__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse);

    /// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
    int GetRemoteUser(_tds__GetRemoteUser *devicews__GetRemoteUser, _tds__GetRemoteUserResponse &devicews__GetRemoteUserResponse);

    /// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
    int SetRemoteUser(_tds__SetRemoteUser *devicews__SetRemoteUser, _tds__SetRemoteUserResponse &devicews__SetRemoteUserResponse);

    /// Web service operation 'GetUsers' (returns error code or SOAP_OK)
    int GetUsers(_tds__GetUsers *devicews__GetUsers, _tds__GetUsersResponse &devicews__GetUsersResponse);

    /// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
    int CreateUsers(_tds__CreateUsers *devicews__CreateUsers, _tds__CreateUsersResponse &devicews__CreateUsersResponse);

    /// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
    int DeleteUsers(_tds__DeleteUsers *devicews__DeleteUsers, _tds__DeleteUsersResponse &devicews__DeleteUsersResponse);

    /// Web service operation 'SetUser' (returns error code or SOAP_OK)
    int SetUser(_tds__SetUser *devicews__SetUser, _tds__SetUserResponse &devicews__SetUserResponse);

    /// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
    int GetWsdlUrl(_tds__GetWsdlUrl *devicews__GetWsdlUrl, _tds__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse);

    /// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
    int GetCapabilities(_tds__GetCapabilities *devicews__GetCapabilities, _tds__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse);

    /// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
    int SetDPAddresses(_tds__SetDPAddresses *devicews__SetDPAddresses, _tds__SetDPAddressesResponse &devicews__SetDPAddressesResponse);

    /// Web service operation 'GetHostname' (returns error code or SOAP_OK)
    int GetHostname(_tds__GetHostname *devicews__GetHostname, _tds__GetHostnameResponse &devicews__GetHostnameResponse);

    /// Web service operation 'SetHostname' (returns error code or SOAP_OK)
    int SetHostname(_tds__SetHostname *devicews__SetHostname, _tds__SetHostnameResponse &devicews__SetHostnameResponse);

    /// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
    int SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse);

    /// Web service operation 'GetDNS' (returns error code or SOAP_OK)
    int GetDNS(_tds__GetDNS *devicews__GetDNS, _tds__GetDNSResponse &devicews__GetDNSResponse);

    /// Web service operation 'SetDNS' (returns error code or SOAP_OK)
    int SetDNS(_tds__SetDNS *devicews__SetDNS, _tds__SetDNSResponse &devicews__SetDNSResponse);

    /// Web service operation 'GetNTP' (returns error code or SOAP_OK)
    int GetNTP(_tds__GetNTP *devicews__GetNTP, _tds__GetNTPResponse &devicews__GetNTPResponse);

    /// Web service operation 'SetNTP' (returns error code or SOAP_OK)
    int SetNTP(_tds__SetNTP *devicews__SetNTP, _tds__SetNTPResponse &devicews__SetNTPResponse);

    /// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
    int GetDynamicDNS(_tds__GetDynamicDNS *devicews__GetDynamicDNS, _tds__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse);

    /// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
    int SetDynamicDNS(_tds__SetDynamicDNS *devicews__SetDynamicDNS, _tds__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse);

    /// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
    int GetNetworkInterfaces(_tds__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse);

    /// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
    int SetNetworkInterfaces(_tds__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse);

    /// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
    int GetNetworkProtocols(_tds__GetNetworkProtocols *devicews__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse);

    /// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
    int SetNetworkProtocols(_tds__SetNetworkProtocols *devicews__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse);

    /// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
    int GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse);

    /// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
    int SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse);

    /// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
    int GetZeroConfiguration(_tds__GetZeroConfiguration *devicews__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse);

    /// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
    int SetZeroConfiguration(_tds__SetZeroConfiguration *devicews__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse);

    /// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
    int GetIPAddressFilter(_tds__GetIPAddressFilter *devicews__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse);

    /// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
    int SetIPAddressFilter(_tds__SetIPAddressFilter *devicews__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse);

    /// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
    int AddIPAddressFilter(_tds__AddIPAddressFilter *devicews__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse);

    /// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
    int RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse);

    /// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
    int GetAccessPolicy(_tds__GetAccessPolicy *devicews__GetAccessPolicy, _tds__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse);

    /// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
    int SetAccessPolicy(_tds__SetAccessPolicy *devicews__SetAccessPolicy, _tds__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse);

    /// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
    int CreateCertificate(_tds__CreateCertificate *devicews__CreateCertificate, _tds__CreateCertificateResponse &devicews__CreateCertificateResponse);

    /// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
    int GetCertificates(_tds__GetCertificates *devicews__GetCertificates, _tds__GetCertificatesResponse &devicews__GetCertificatesResponse);

    /// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
    int GetCertificatesStatus(_tds__GetCertificatesStatus *devicews__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse);

    /// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
    int SetCertificatesStatus(_tds__SetCertificatesStatus *devicews__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse);

    /// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
    int DeleteCertificates(_tds__DeleteCertificates *devicews__DeleteCertificates, _tds__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse);

    /// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
    int GetPkcs10Request(_tds__GetPkcs10Request *devicews__GetPkcs10Request, _tds__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse);

    /// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
    int LoadCertificates(_tds__LoadCertificates *devicews__LoadCertificates, _tds__LoadCertificatesResponse &devicews__LoadCertificatesResponse);

    /// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
    int GetClientCertificateMode(_tds__GetClientCertificateMode *devicews__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse);

    /// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
    int SetClientCertificateMode(_tds__SetClientCertificateMode *devicews__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse);

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    int GetRelayOutputs(_tds__GetRelayOutputs *devicews__GetRelayOutputs, _tds__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse);

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    int SetRelayOutputSettings(_tds__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse);

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    int SetRelayOutputState(_tds__SetRelayOutputState *devicews__SetRelayOutputState, _tds__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse);

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    int SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse);

    /// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
    int GetCACertificates(_tds__GetCACertificates *devicews__GetCACertificates, _tds__GetCACertificatesResponse &devicews__GetCACertificatesResponse);

    /// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
    int LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse);

    /// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
    int GetCertificateInformation(_tds__GetCertificateInformation *devicews__GetCertificateInformation, _tds__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse);

    /// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
    int LoadCACertificates(_tds__LoadCACertificates *devicews__LoadCACertificates, _tds__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse);

    /// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
    int CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse);

    /// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
    int SetDot1XConfiguration(_tds__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse);

    /// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
    int GetDot1XConfiguration(_tds__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse);

    /// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
    int GetDot1XConfigurations(_tds__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse);

    /// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
    int DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse);

    /// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
    int GetDot11Capabilities(_tds__GetDot11Capabilities *devicews__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse);

    /// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
    int GetDot11Status(_tds__GetDot11Status *devicews__GetDot11Status, _tds__GetDot11StatusResponse &devicews__GetDot11StatusResponse);

    /// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
    int ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse);

    /// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
    int GetSystemUris(_tds__GetSystemUris *devicews__GetSystemUris, _tds__GetSystemUrisResponse &devicews__GetSystemUrisResponse);

    /// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
    int StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse);

    /// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
    int StartSystemRestore(_tds__StartSystemRestore *devicews__StartSystemRestore, _tds__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse);

    /// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
    int GetStorageConfigurations(_tds__GetStorageConfigurations *devicews__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse);

    /// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
    int CreateStorageConfiguration(_tds__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse);

    /// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
    int GetStorageConfiguration(_tds__GetStorageConfiguration *devicews__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse);

    /// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
    int SetStorageConfiguration(_tds__SetStorageConfiguration *devicews__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse);

    /// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
    int DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse);

    // liuyi add
    /// Web service operation 'GetGeoLocation' (returns error code or SOAP_OK)
        int GetGeoLocation(_tds__GetGeoLocation *tds__GetGeoLocation, _tds__GetGeoLocationResponse &tds__GetGeoLocationResponse);

    /// Web service operation 'SetGeoLocation' (returns error code or SOAP_OK)
    int SetGeoLocation(_tds__SetGeoLocation *tds__SetGeoLocation, _tds__SetGeoLocationResponse &tds__SetGeoLocationResponse);

    /// Web service operation 'DeleteGeoLocation' (returns error code or SOAP_OK)
    int DeleteGeoLocation(_tds__DeleteGeoLocation *tds__DeleteGeoLocation, _tds__DeleteGeoLocationResponse &tds__DeleteGeoLocationResponse);

};

#endif // DEVICESERVICEEXT_H
