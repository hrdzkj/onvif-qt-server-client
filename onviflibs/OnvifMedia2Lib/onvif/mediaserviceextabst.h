﻿#ifndef MEDIASERVICEEXTABST_H
#define MEDIASERVICEEXTABST_H

//#include "soap/onvifmediaH.h"
#include "onvifmediaH.h"

class MediaServiceExtAbst
{
public:
    MediaServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, ns1__GetServiceCapabilities, ns1__GetServiceCapabilitiesResponse); }
    virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse);

    /// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
    virtual	int CreateProfile(_ns1__CreateProfile *ns1__CreateProfile, _ns1__CreateProfileResponse &ns1__CreateProfileResponse) { return this->CreateProfile(NULL, NULL, ns1__CreateProfile, ns1__CreateProfileResponse); }
    virtual	int CreateProfile(const char *endpoint, const char *soap_action, _ns1__CreateProfile *ns1__CreateProfile, _ns1__CreateProfileResponse &ns1__CreateProfileResponse);

    /// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
    virtual	int GetProfiles(_ns1__GetProfiles *ns1__GetProfiles, _ns1__GetProfilesResponse &ns1__GetProfilesResponse) { return this->GetProfiles(NULL, NULL, ns1__GetProfiles, ns1__GetProfilesResponse); }
    virtual	int GetProfiles(const char *endpoint, const char *soap_action, _ns1__GetProfiles *ns1__GetProfiles, _ns1__GetProfilesResponse &ns1__GetProfilesResponse);

    /// Web service operation 'AddConfiguration' (returns error code or SOAP_OK)
    virtual	int AddConfiguration(_ns1__AddConfiguration *ns1__AddConfiguration, _ns1__AddConfigurationResponse &ns1__AddConfigurationResponse) { return this->AddConfiguration(NULL, NULL, ns1__AddConfiguration, ns1__AddConfigurationResponse); }
    virtual	int AddConfiguration(const char *endpoint, const char *soap_action, _ns1__AddConfiguration *ns1__AddConfiguration, _ns1__AddConfigurationResponse &ns1__AddConfigurationResponse);

    /// Web service operation 'RemoveConfiguration' (returns error code or SOAP_OK)
    virtual	int RemoveConfiguration(_ns1__RemoveConfiguration *ns1__RemoveConfiguration, _ns1__RemoveConfigurationResponse &ns1__RemoveConfigurationResponse) { return this->RemoveConfiguration(NULL, NULL, ns1__RemoveConfiguration, ns1__RemoveConfigurationResponse); }
    virtual	int RemoveConfiguration(const char *endpoint, const char *soap_action, _ns1__RemoveConfiguration *ns1__RemoveConfiguration, _ns1__RemoveConfigurationResponse &ns1__RemoveConfigurationResponse);

    /// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
    virtual	int DeleteProfile(_ns1__DeleteProfile *ns1__DeleteProfile, _ns1__DeleteProfileResponse &ns1__DeleteProfileResponse) { return this->DeleteProfile(NULL, NULL, ns1__DeleteProfile, ns1__DeleteProfileResponse); }
    virtual	int DeleteProfile(const char *endpoint, const char *soap_action, _ns1__DeleteProfile *ns1__DeleteProfile, _ns1__DeleteProfileResponse &ns1__DeleteProfileResponse);

    /// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfigurations(ns1__GetConfiguration *ns1__GetVideoSourceConfigurations, _ns1__GetVideoSourceConfigurationsResponse &ns1__GetVideoSourceConfigurationsResponse) { return this->GetVideoSourceConfigurations(NULL, NULL, ns1__GetVideoSourceConfigurations, ns1__GetVideoSourceConfigurationsResponse); }
    virtual	int GetVideoSourceConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetVideoSourceConfigurations, _ns1__GetVideoSourceConfigurationsResponse &ns1__GetVideoSourceConfigurationsResponse);

    /// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderConfigurations(ns1__GetConfiguration *ns1__GetVideoEncoderConfigurations, _ns1__GetVideoEncoderConfigurationsResponse &ns1__GetVideoEncoderConfigurationsResponse) { return this->GetVideoEncoderConfigurations(NULL, NULL, ns1__GetVideoEncoderConfigurations, ns1__GetVideoEncoderConfigurationsResponse); }
    virtual	int GetVideoEncoderConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetVideoEncoderConfigurations, _ns1__GetVideoEncoderConfigurationsResponse &ns1__GetVideoEncoderConfigurationsResponse);

    /// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfigurations(ns1__GetConfiguration *ns1__GetAudioSourceConfigurations, _ns1__GetAudioSourceConfigurationsResponse &ns1__GetAudioSourceConfigurationsResponse) { return this->GetAudioSourceConfigurations(NULL, NULL, ns1__GetAudioSourceConfigurations, ns1__GetAudioSourceConfigurationsResponse); }
    virtual	int GetAudioSourceConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioSourceConfigurations, _ns1__GetAudioSourceConfigurationsResponse &ns1__GetAudioSourceConfigurationsResponse);

    /// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioEncoderConfigurations(ns1__GetConfiguration *ns1__GetAudioEncoderConfigurations, _ns1__GetAudioEncoderConfigurationsResponse &ns1__GetAudioEncoderConfigurationsResponse) { return this->GetAudioEncoderConfigurations(NULL, NULL, ns1__GetAudioEncoderConfigurations, ns1__GetAudioEncoderConfigurationsResponse); }
    virtual	int GetAudioEncoderConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioEncoderConfigurations, _ns1__GetAudioEncoderConfigurationsResponse &ns1__GetAudioEncoderConfigurationsResponse);

    /// Web service operation 'GetAnalyticsConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAnalyticsConfigurations(ns1__GetConfiguration *ns1__GetAnalyticsConfigurations, _ns1__GetAnalyticsConfigurationsResponse &ns1__GetAnalyticsConfigurationsResponse) { return this->GetAnalyticsConfigurations(NULL, NULL, ns1__GetAnalyticsConfigurations, ns1__GetAnalyticsConfigurationsResponse); }
    virtual	int GetAnalyticsConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAnalyticsConfigurations, _ns1__GetAnalyticsConfigurationsResponse &ns1__GetAnalyticsConfigurationsResponse);

    /// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
    virtual	int GetMetadataConfigurations(ns1__GetConfiguration *ns1__GetMetadataConfigurations, _ns1__GetMetadataConfigurationsResponse &ns1__GetMetadataConfigurationsResponse) { return this->GetMetadataConfigurations(NULL, NULL, ns1__GetMetadataConfigurations, ns1__GetMetadataConfigurationsResponse); }
    virtual	int GetMetadataConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetMetadataConfigurations, _ns1__GetMetadataConfigurationsResponse &ns1__GetMetadataConfigurationsResponse);

    /// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfigurations(ns1__GetConfiguration *ns1__GetAudioOutputConfigurations, _ns1__GetAudioOutputConfigurationsResponse &ns1__GetAudioOutputConfigurationsResponse) { return this->GetAudioOutputConfigurations(NULL, NULL, ns1__GetAudioOutputConfigurations, ns1__GetAudioOutputConfigurationsResponse); }
    virtual	int GetAudioOutputConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioOutputConfigurations, _ns1__GetAudioOutputConfigurationsResponse &ns1__GetAudioOutputConfigurationsResponse);

    /// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
    virtual	int GetAudioDecoderConfigurations(ns1__GetConfiguration *ns1__GetAudioDecoderConfigurations, _ns1__GetAudioDecoderConfigurationsResponse &ns1__GetAudioDecoderConfigurationsResponse) { return this->GetAudioDecoderConfigurations(NULL, NULL, ns1__GetAudioDecoderConfigurations, ns1__GetAudioDecoderConfigurationsResponse); }
    virtual	int GetAudioDecoderConfigurations(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioDecoderConfigurations, _ns1__GetAudioDecoderConfigurationsResponse &ns1__GetAudioDecoderConfigurationsResponse);

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoSourceConfiguration(_ns1__SetVideoSourceConfiguration *ns1__SetVideoSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoSourceConfigurationResponse) { return this->SetVideoSourceConfiguration(NULL, NULL, ns1__SetVideoSourceConfiguration, ns1__SetVideoSourceConfigurationResponse); }
    virtual	int SetVideoSourceConfiguration(const char *endpoint, const char *soap_action, _ns1__SetVideoSourceConfiguration *ns1__SetVideoSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoSourceConfigurationResponse);

    /// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoEncoderConfiguration(_ns1__SetVideoEncoderConfiguration *ns1__SetVideoEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoEncoderConfigurationResponse) { return this->SetVideoEncoderConfiguration(NULL, NULL, ns1__SetVideoEncoderConfiguration, ns1__SetVideoEncoderConfigurationResponse); }
    virtual	int SetVideoEncoderConfiguration(const char *endpoint, const char *soap_action, _ns1__SetVideoEncoderConfiguration *ns1__SetVideoEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoEncoderConfigurationResponse);

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioSourceConfiguration(_ns1__SetAudioSourceConfiguration *ns1__SetAudioSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioSourceConfigurationResponse) { return this->SetAudioSourceConfiguration(NULL, NULL, ns1__SetAudioSourceConfiguration, ns1__SetAudioSourceConfigurationResponse); }
    virtual	int SetAudioSourceConfiguration(const char *endpoint, const char *soap_action, _ns1__SetAudioSourceConfiguration *ns1__SetAudioSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioSourceConfigurationResponse);

    /// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioEncoderConfiguration(_ns1__SetAudioEncoderConfiguration *ns1__SetAudioEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioEncoderConfigurationResponse) { return this->SetAudioEncoderConfiguration(NULL, NULL, ns1__SetAudioEncoderConfiguration, ns1__SetAudioEncoderConfigurationResponse); }
    virtual	int SetAudioEncoderConfiguration(const char *endpoint, const char *soap_action, _ns1__SetAudioEncoderConfiguration *ns1__SetAudioEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioEncoderConfigurationResponse);

    /// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
    virtual	int SetMetadataConfiguration(_ns1__SetMetadataConfiguration *ns1__SetMetadataConfiguration, ns1__SetConfigurationResponse &ns1__SetMetadataConfigurationResponse) { return this->SetMetadataConfiguration(NULL, NULL, ns1__SetMetadataConfiguration, ns1__SetMetadataConfigurationResponse); }
    virtual	int SetMetadataConfiguration(const char *endpoint, const char *soap_action, _ns1__SetMetadataConfiguration *ns1__SetMetadataConfiguration, ns1__SetConfigurationResponse &ns1__SetMetadataConfigurationResponse);

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioOutputConfiguration(_ns1__SetAudioOutputConfiguration *ns1__SetAudioOutputConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioOutputConfigurationResponse) { return this->SetAudioOutputConfiguration(NULL, NULL, ns1__SetAudioOutputConfiguration, ns1__SetAudioOutputConfigurationResponse); }
    virtual	int SetAudioOutputConfiguration(const char *endpoint, const char *soap_action, _ns1__SetAudioOutputConfiguration *ns1__SetAudioOutputConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioOutputConfigurationResponse);

    /// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioDecoderConfiguration(_ns1__SetAudioDecoderConfiguration *ns1__SetAudioDecoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioDecoderConfigurationResponse) { return this->SetAudioDecoderConfiguration(NULL, NULL, ns1__SetAudioDecoderConfiguration, ns1__SetAudioDecoderConfigurationResponse); }
    virtual	int SetAudioDecoderConfiguration(const char *endpoint, const char *soap_action, _ns1__SetAudioDecoderConfiguration *ns1__SetAudioDecoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioDecoderConfigurationResponse);

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfigurationOptions(ns1__GetConfiguration *ns1__GetVideoSourceConfigurationOptions, _ns1__GetVideoSourceConfigurationOptionsResponse &ns1__GetVideoSourceConfigurationOptionsResponse) { return this->GetVideoSourceConfigurationOptions(NULL, NULL, ns1__GetVideoSourceConfigurationOptions, ns1__GetVideoSourceConfigurationOptionsResponse); }
    virtual	int GetVideoSourceConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetVideoSourceConfigurationOptions, _ns1__GetVideoSourceConfigurationOptionsResponse &ns1__GetVideoSourceConfigurationOptionsResponse);

    /// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderConfigurationOptions(ns1__GetConfiguration *ns1__GetVideoEncoderConfigurationOptions, _ns1__GetVideoEncoderConfigurationOptionsResponse &ns1__GetVideoEncoderConfigurationOptionsResponse) { return this->GetVideoEncoderConfigurationOptions(NULL, NULL, ns1__GetVideoEncoderConfigurationOptions, ns1__GetVideoEncoderConfigurationOptionsResponse); }
    virtual	int GetVideoEncoderConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetVideoEncoderConfigurationOptions, _ns1__GetVideoEncoderConfigurationOptionsResponse &ns1__GetVideoEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioSourceConfigurationOptions, _ns1__GetAudioSourceConfigurationOptionsResponse &ns1__GetAudioSourceConfigurationOptionsResponse) { return this->GetAudioSourceConfigurationOptions(NULL, NULL, ns1__GetAudioSourceConfigurationOptions, ns1__GetAudioSourceConfigurationOptionsResponse); }
    virtual	int GetAudioSourceConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioSourceConfigurationOptions, _ns1__GetAudioSourceConfigurationOptionsResponse &ns1__GetAudioSourceConfigurationOptionsResponse);

    /// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioEncoderConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioEncoderConfigurationOptions, _ns1__GetAudioEncoderConfigurationOptionsResponse &ns1__GetAudioEncoderConfigurationOptionsResponse) { return this->GetAudioEncoderConfigurationOptions(NULL, NULL, ns1__GetAudioEncoderConfigurationOptions, ns1__GetAudioEncoderConfigurationOptionsResponse); }
    virtual	int GetAudioEncoderConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioEncoderConfigurationOptions, _ns1__GetAudioEncoderConfigurationOptionsResponse &ns1__GetAudioEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetMetadataConfigurationOptions(ns1__GetConfiguration *ns1__GetMetadataConfigurationOptions, _ns1__GetMetadataConfigurationOptionsResponse &ns1__GetMetadataConfigurationOptionsResponse) { return this->GetMetadataConfigurationOptions(NULL, NULL, ns1__GetMetadataConfigurationOptions, ns1__GetMetadataConfigurationOptionsResponse); }
    virtual	int GetMetadataConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetMetadataConfigurationOptions, _ns1__GetMetadataConfigurationOptionsResponse &ns1__GetMetadataConfigurationOptionsResponse);

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioOutputConfigurationOptions, _ns1__GetAudioOutputConfigurationOptionsResponse &ns1__GetAudioOutputConfigurationOptionsResponse) { return this->GetAudioOutputConfigurationOptions(NULL, NULL, ns1__GetAudioOutputConfigurationOptions, ns1__GetAudioOutputConfigurationOptionsResponse); }
    virtual	int GetAudioOutputConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioOutputConfigurationOptions, _ns1__GetAudioOutputConfigurationOptionsResponse &ns1__GetAudioOutputConfigurationOptionsResponse);

    /// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioDecoderConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioDecoderConfigurationOptions, _ns1__GetAudioDecoderConfigurationOptionsResponse &ns1__GetAudioDecoderConfigurationOptionsResponse) { return this->GetAudioDecoderConfigurationOptions(NULL, NULL, ns1__GetAudioDecoderConfigurationOptions, ns1__GetAudioDecoderConfigurationOptionsResponse); }
    virtual	int GetAudioDecoderConfigurationOptions(const char *endpoint, const char *soap_action, ns1__GetConfiguration *ns1__GetAudioDecoderConfigurationOptions, _ns1__GetAudioDecoderConfigurationOptionsResponse &ns1__GetAudioDecoderConfigurationOptionsResponse);

    /// Web service operation 'GetVideoEncoderInstances' (returns error code or SOAP_OK)
    virtual	int GetVideoEncoderInstances(_ns1__GetVideoEncoderInstances *ns1__GetVideoEncoderInstances, _ns1__GetVideoEncoderInstancesResponse &ns1__GetVideoEncoderInstancesResponse) { return this->GetVideoEncoderInstances(NULL, NULL, ns1__GetVideoEncoderInstances, ns1__GetVideoEncoderInstancesResponse); }
    virtual	int GetVideoEncoderInstances(const char *endpoint, const char *soap_action, _ns1__GetVideoEncoderInstances *ns1__GetVideoEncoderInstances, _ns1__GetVideoEncoderInstancesResponse &ns1__GetVideoEncoderInstancesResponse);

    /// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
    virtual	int GetStreamUri(_ns1__GetStreamUri *ns1__GetStreamUri, _ns1__GetStreamUriResponse &ns1__GetStreamUriResponse) { return this->GetStreamUri(NULL, NULL, ns1__GetStreamUri, ns1__GetStreamUriResponse); }
    virtual	int GetStreamUri(const char *endpoint, const char *soap_action, _ns1__GetStreamUri *ns1__GetStreamUri, _ns1__GetStreamUriResponse &ns1__GetStreamUriResponse);

    /// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
    virtual	int StartMulticastStreaming(ns1__StartStopMulticastStreaming *ns1__StartMulticastStreaming, ns1__SetConfigurationResponse &ns1__StartMulticastStreamingResponse) { return this->StartMulticastStreaming(NULL, NULL, ns1__StartMulticastStreaming, ns1__StartMulticastStreamingResponse); }
    virtual	int StartMulticastStreaming(const char *endpoint, const char *soap_action, ns1__StartStopMulticastStreaming *ns1__StartMulticastStreaming, ns1__SetConfigurationResponse &ns1__StartMulticastStreamingResponse);

    /// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
    virtual	int StopMulticastStreaming(ns1__StartStopMulticastStreaming *ns1__StopMulticastStreaming, ns1__SetConfigurationResponse &ns1__StopMulticastStreamingResponse) { return this->StopMulticastStreaming(NULL, NULL, ns1__StopMulticastStreaming, ns1__StopMulticastStreamingResponse); }
    virtual	int StopMulticastStreaming(const char *endpoint, const char *soap_action, ns1__StartStopMulticastStreaming *ns1__StopMulticastStreaming, ns1__SetConfigurationResponse &ns1__StopMulticastStreamingResponse);

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    virtual	int SetSynchronizationPoint(_ns1__SetSynchronizationPoint *ns1__SetSynchronizationPoint, _ns1__SetSynchronizationPointResponse &ns1__SetSynchronizationPointResponse) { return this->SetSynchronizationPoint(NULL, NULL, ns1__SetSynchronizationPoint, ns1__SetSynchronizationPointResponse); }
    virtual	int SetSynchronizationPoint(const char *endpoint, const char *soap_action, _ns1__SetSynchronizationPoint *ns1__SetSynchronizationPoint, _ns1__SetSynchronizationPointResponse &ns1__SetSynchronizationPointResponse);

    /// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
    virtual	int GetSnapshotUri(_ns1__GetSnapshotUri *ns1__GetSnapshotUri, _ns1__GetSnapshotUriResponse &ns1__GetSnapshotUriResponse) { return this->GetSnapshotUri(NULL, NULL, ns1__GetSnapshotUri, ns1__GetSnapshotUriResponse); }
    virtual	int GetSnapshotUri(const char *endpoint, const char *soap_action, _ns1__GetSnapshotUri *ns1__GetSnapshotUri, _ns1__GetSnapshotUriResponse &ns1__GetSnapshotUriResponse);

    /// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceModes(_ns1__GetVideoSourceModes *ns1__GetVideoSourceModes, _ns1__GetVideoSourceModesResponse &ns1__GetVideoSourceModesResponse) { return this->GetVideoSourceModes(NULL, NULL, ns1__GetVideoSourceModes, ns1__GetVideoSourceModesResponse); }
    virtual	int GetVideoSourceModes(const char *endpoint, const char *soap_action, _ns1__GetVideoSourceModes *ns1__GetVideoSourceModes, _ns1__GetVideoSourceModesResponse &ns1__GetVideoSourceModesResponse);

    /// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
    virtual	int SetVideoSourceMode(_ns1__SetVideoSourceMode *ns1__SetVideoSourceMode, _ns1__SetVideoSourceModeResponse &ns1__SetVideoSourceModeResponse) { return this->SetVideoSourceMode(NULL, NULL, ns1__SetVideoSourceMode, ns1__SetVideoSourceModeResponse); }
    virtual	int SetVideoSourceMode(const char *endpoint, const char *soap_action, _ns1__SetVideoSourceMode *ns1__SetVideoSourceMode, _ns1__SetVideoSourceModeResponse &ns1__SetVideoSourceModeResponse);

    /// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
    virtual	int GetOSDs(_ns1__GetOSDs *ns1__GetOSDs, _ns1__GetOSDsResponse &ns1__GetOSDsResponse) { return this->GetOSDs(NULL, NULL, ns1__GetOSDs, ns1__GetOSDsResponse); }
    virtual	int GetOSDs(const char *endpoint, const char *soap_action, _ns1__GetOSDs *ns1__GetOSDs, _ns1__GetOSDsResponse &ns1__GetOSDsResponse);

    /// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
    virtual	int GetOSDOptions(_ns1__GetOSDOptions *ns1__GetOSDOptions, _ns1__GetOSDOptionsResponse &ns1__GetOSDOptionsResponse) { return this->GetOSDOptions(NULL, NULL, ns1__GetOSDOptions, ns1__GetOSDOptionsResponse); }
    virtual	int GetOSDOptions(const char *endpoint, const char *soap_action, _ns1__GetOSDOptions *ns1__GetOSDOptions, _ns1__GetOSDOptionsResponse &ns1__GetOSDOptionsResponse);

    /// Web service operation 'SetOSD' (returns error code or SOAP_OK)
    virtual	int SetOSD(_ns1__SetOSD *ns1__SetOSD, ns1__SetConfigurationResponse &ns1__SetOSDResponse) { return this->SetOSD(NULL, NULL, ns1__SetOSD, ns1__SetOSDResponse); }
    virtual	int SetOSD(const char *endpoint, const char *soap_action, _ns1__SetOSD *ns1__SetOSD, ns1__SetConfigurationResponse &ns1__SetOSDResponse);

    /// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
    virtual	int CreateOSD(_ns1__CreateOSD *ns1__CreateOSD, _ns1__CreateOSDResponse &ns1__CreateOSDResponse) { return this->CreateOSD(NULL, NULL, ns1__CreateOSD, ns1__CreateOSDResponse); }
    virtual	int CreateOSD(const char *endpoint, const char *soap_action, _ns1__CreateOSD *ns1__CreateOSD, _ns1__CreateOSDResponse &ns1__CreateOSDResponse);

    /// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
    virtual	int DeleteOSD(_ns1__DeleteOSD *ns1__DeleteOSD, ns1__SetConfigurationResponse &ns1__DeleteOSDResponse) { return this->DeleteOSD(NULL, NULL, ns1__DeleteOSD, ns1__DeleteOSDResponse); }
    virtual	int DeleteOSD(const char *endpoint, const char *soap_action, _ns1__DeleteOSD *ns1__DeleteOSD, ns1__SetConfigurationResponse &ns1__DeleteOSDResponse);

    /// Web service operation 'GetMasks' (returns error code or SOAP_OK)
    virtual	int GetMasks(_ns1__GetMasks *ns1__GetMasks, _ns1__GetMasksResponse &ns1__GetMasksResponse) { return this->GetMasks(NULL, NULL, ns1__GetMasks, ns1__GetMasksResponse); }
    virtual	int GetMasks(const char *endpoint, const char *soap_action, _ns1__GetMasks *ns1__GetMasks, _ns1__GetMasksResponse &ns1__GetMasksResponse);

    /// Web service operation 'GetMaskOptions' (returns error code or SOAP_OK)
    virtual	int GetMaskOptions(_ns1__GetMaskOptions *ns1__GetMaskOptions, _ns1__GetMaskOptionsResponse &ns1__GetMaskOptionsResponse) { return this->GetMaskOptions(NULL, NULL, ns1__GetMaskOptions, ns1__GetMaskOptionsResponse); }
    virtual	int GetMaskOptions(const char *endpoint, const char *soap_action, _ns1__GetMaskOptions *ns1__GetMaskOptions, _ns1__GetMaskOptionsResponse &ns1__GetMaskOptionsResponse);

    /// Web service operation 'SetMask' (returns error code or SOAP_OK)
    virtual	int SetMask(_ns1__SetMask *ns1__SetMask, ns1__SetConfigurationResponse &ns1__SetMaskResponse) { return this->SetMask(NULL, NULL, ns1__SetMask, ns1__SetMaskResponse); }
    virtual	int SetMask(const char *endpoint, const char *soap_action, _ns1__SetMask *ns1__SetMask, ns1__SetConfigurationResponse &ns1__SetMaskResponse);

    /// Web service operation 'CreateMask' (returns error code or SOAP_OK)
    virtual	int CreateMask(_ns1__CreateMask *ns1__CreateMask, _ns1__CreateMaskResponse &ns1__CreateMaskResponse) { return this->CreateMask(NULL, NULL, ns1__CreateMask, ns1__CreateMaskResponse); }
    virtual	int CreateMask(const char *endpoint, const char *soap_action, _ns1__CreateMask *ns1__CreateMask, _ns1__CreateMaskResponse &ns1__CreateMaskResponse);

    /// Web service operation 'DeleteMask' (returns error code or SOAP_OK)
    virtual	int DeleteMask(_ns1__DeleteMask *ns1__DeleteMask, ns1__SetConfigurationResponse &ns1__DeleteMaskResponse) { return this->DeleteMask(NULL, NULL, ns1__DeleteMask, ns1__DeleteMaskResponse); }
    virtual	int DeleteMask(const char *endpoint, const char *soap_action, _ns1__DeleteMask *ns1__DeleteMask, ns1__SetConfigurationResponse &ns1__DeleteMaskResponse);

};

#endif // MEDIASERVICEEXTABST_H
