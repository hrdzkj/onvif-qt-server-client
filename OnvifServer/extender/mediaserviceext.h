#ifndef MEDIASERVICEEXT_H
#define MEDIASERVICEEXT_H
#include "media/mediaserviceextabst.h"


class MediaServiceExt : public MediaServiceExtAbst
{
public:
    MediaServiceExt();

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_trt__GetServiceCapabilities *trt__GetServiceCapabilities, _trt__GetServiceCapabilitiesResponse &trt__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
    int GetVideoSources(_trt__GetVideoSources *trt__GetVideoSources, _trt__GetVideoSourcesResponse &trt__GetVideoSourcesResponse);

    /// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
    int GetAudioSources(_trt__GetAudioSources *trt__GetAudioSources, _trt__GetAudioSourcesResponse &trt__GetAudioSourcesResponse);

    /// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
    int GetAudioOutputs(_trt__GetAudioOutputs *trt__GetAudioOutputs, _trt__GetAudioOutputsResponse &trt__GetAudioOutputsResponse);

    /// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
    int CreateProfile(_trt__CreateProfile *trt__CreateProfile, _trt__CreateProfileResponse &trt__CreateProfileResponse);

    /// Web service operation 'GetProfile' (returns error code or SOAP_OK)
    int GetProfile(_trt__GetProfile *trt__GetProfile, _trt__GetProfileResponse &trt__GetProfileResponse);

    /// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
    int GetProfiles(_trt__GetProfiles *trt__GetProfiles, _trt__GetProfilesResponse &trt__GetProfilesResponse);

    /// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int AddVideoEncoderConfiguration(_trt__AddVideoEncoderConfiguration *trt__AddVideoEncoderConfiguration, _trt__AddVideoEncoderConfigurationResponse &trt__AddVideoEncoderConfigurationResponse);

    /// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
    int AddVideoSourceConfiguration(_trt__AddVideoSourceConfiguration *trt__AddVideoSourceConfiguration, _trt__AddVideoSourceConfigurationResponse &trt__AddVideoSourceConfigurationResponse);

    /// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int AddAudioEncoderConfiguration(_trt__AddAudioEncoderConfiguration *trt__AddAudioEncoderConfiguration, _trt__AddAudioEncoderConfigurationResponse &trt__AddAudioEncoderConfigurationResponse);

    /// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
    int AddAudioSourceConfiguration(_trt__AddAudioSourceConfiguration *trt__AddAudioSourceConfiguration, _trt__AddAudioSourceConfigurationResponse &trt__AddAudioSourceConfigurationResponse);

    /// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
    int AddPTZConfiguration(_trt__AddPTZConfiguration *trt__AddPTZConfiguration, _trt__AddPTZConfigurationResponse &trt__AddPTZConfigurationResponse);

    /// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int AddVideoAnalyticsConfiguration(_trt__AddVideoAnalyticsConfiguration *trt__AddVideoAnalyticsConfiguration, _trt__AddVideoAnalyticsConfigurationResponse &trt__AddVideoAnalyticsConfigurationResponse);

    /// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
    int AddMetadataConfiguration(_trt__AddMetadataConfiguration *trt__AddMetadataConfiguration, _trt__AddMetadataConfigurationResponse &trt__AddMetadataConfigurationResponse);

    /// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
    int AddAudioOutputConfiguration(_trt__AddAudioOutputConfiguration *trt__AddAudioOutputConfiguration, _trt__AddAudioOutputConfigurationResponse &trt__AddAudioOutputConfigurationResponse);

    /// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int AddAudioDecoderConfiguration(_trt__AddAudioDecoderConfiguration *trt__AddAudioDecoderConfiguration, _trt__AddAudioDecoderConfigurationResponse &trt__AddAudioDecoderConfigurationResponse);

    /// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoEncoderConfiguration(_trt__RemoveVideoEncoderConfiguration *trt__RemoveVideoEncoderConfiguration, _trt__RemoveVideoEncoderConfigurationResponse &trt__RemoveVideoEncoderConfigurationResponse);

    /// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoSourceConfiguration(_trt__RemoveVideoSourceConfiguration *trt__RemoveVideoSourceConfiguration, _trt__RemoveVideoSourceConfigurationResponse &trt__RemoveVideoSourceConfigurationResponse);

    /// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioEncoderConfiguration(_trt__RemoveAudioEncoderConfiguration *trt__RemoveAudioEncoderConfiguration, _trt__RemoveAudioEncoderConfigurationResponse &trt__RemoveAudioEncoderConfigurationResponse);

    /// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioSourceConfiguration(_trt__RemoveAudioSourceConfiguration *trt__RemoveAudioSourceConfiguration, _trt__RemoveAudioSourceConfigurationResponse &trt__RemoveAudioSourceConfigurationResponse);

    /// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
    int RemovePTZConfiguration(_trt__RemovePTZConfiguration *trt__RemovePTZConfiguration, _trt__RemovePTZConfigurationResponse &trt__RemovePTZConfigurationResponse);

    /// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int RemoveVideoAnalyticsConfiguration(_trt__RemoveVideoAnalyticsConfiguration *trt__RemoveVideoAnalyticsConfiguration, _trt__RemoveVideoAnalyticsConfigurationResponse &trt__RemoveVideoAnalyticsConfigurationResponse);

    /// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
    int RemoveMetadataConfiguration(_trt__RemoveMetadataConfiguration *trt__RemoveMetadataConfiguration, _trt__RemoveMetadataConfigurationResponse &trt__RemoveMetadataConfigurationResponse);

    /// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioOutputConfiguration(_trt__RemoveAudioOutputConfiguration *trt__RemoveAudioOutputConfiguration, _trt__RemoveAudioOutputConfigurationResponse &trt__RemoveAudioOutputConfigurationResponse);

    /// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int RemoveAudioDecoderConfiguration(_trt__RemoveAudioDecoderConfiguration *trt__RemoveAudioDecoderConfiguration, _trt__RemoveAudioDecoderConfigurationResponse &trt__RemoveAudioDecoderConfigurationResponse);

    /// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
    int DeleteProfile(_trt__DeleteProfile *trt__DeleteProfile, _trt__DeleteProfileResponse &trt__DeleteProfileResponse);

    /// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
    int GetVideoSourceConfigurations(_trt__GetVideoSourceConfigurations *trt__GetVideoSourceConfigurations, _trt__GetVideoSourceConfigurationsResponse &trt__GetVideoSourceConfigurationsResponse);

    /// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
    int GetVideoEncoderConfigurations(_trt__GetVideoEncoderConfigurations *trt__GetVideoEncoderConfigurations, _trt__GetVideoEncoderConfigurationsResponse &trt__GetVideoEncoderConfigurationsResponse);

    /// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
    int GetAudioSourceConfigurations(_trt__GetAudioSourceConfigurations *trt__GetAudioSourceConfigurations, _trt__GetAudioSourceConfigurationsResponse &trt__GetAudioSourceConfigurationsResponse);

    /// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
    int GetAudioEncoderConfigurations(_trt__GetAudioEncoderConfigurations *trt__GetAudioEncoderConfigurations, _trt__GetAudioEncoderConfigurationsResponse &trt__GetAudioEncoderConfigurationsResponse);

    /// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    int GetVideoAnalyticsConfigurations(_trt__GetVideoAnalyticsConfigurations *trt__GetVideoAnalyticsConfigurations, _trt__GetVideoAnalyticsConfigurationsResponse &trt__GetVideoAnalyticsConfigurationsResponse);

    /// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
    int GetMetadataConfigurations(_trt__GetMetadataConfigurations *trt__GetMetadataConfigurations, _trt__GetMetadataConfigurationsResponse &trt__GetMetadataConfigurationsResponse);

    /// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
    int GetAudioOutputConfigurations(_trt__GetAudioOutputConfigurations *trt__GetAudioOutputConfigurations, _trt__GetAudioOutputConfigurationsResponse &trt__GetAudioOutputConfigurationsResponse);

    /// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
    int GetAudioDecoderConfigurations(_trt__GetAudioDecoderConfigurations *trt__GetAudioDecoderConfigurations, _trt__GetAudioDecoderConfigurationsResponse &trt__GetAudioDecoderConfigurationsResponse);

    /// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int GetVideoSourceConfiguration(_trt__GetVideoSourceConfiguration *trt__GetVideoSourceConfiguration, _trt__GetVideoSourceConfigurationResponse &trt__GetVideoSourceConfigurationResponse);

    /// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int GetVideoEncoderConfiguration(_trt__GetVideoEncoderConfiguration *trt__GetVideoEncoderConfiguration, _trt__GetVideoEncoderConfigurationResponse &trt__GetVideoEncoderConfigurationResponse);

    /// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int GetAudioSourceConfiguration(_trt__GetAudioSourceConfiguration *trt__GetAudioSourceConfiguration, _trt__GetAudioSourceConfigurationResponse &trt__GetAudioSourceConfigurationResponse);

    /// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int GetAudioEncoderConfiguration(_trt__GetAudioEncoderConfiguration *trt__GetAudioEncoderConfiguration, _trt__GetAudioEncoderConfigurationResponse &trt__GetAudioEncoderConfigurationResponse);

    /// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int GetVideoAnalyticsConfiguration(_trt__GetVideoAnalyticsConfiguration *trt__GetVideoAnalyticsConfiguration, _trt__GetVideoAnalyticsConfigurationResponse &trt__GetVideoAnalyticsConfigurationResponse);

    /// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
    int GetMetadataConfiguration(_trt__GetMetadataConfiguration *trt__GetMetadataConfiguration, _trt__GetMetadataConfigurationResponse &trt__GetMetadataConfigurationResponse);

    /// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int GetAudioOutputConfiguration(_trt__GetAudioOutputConfiguration *trt__GetAudioOutputConfiguration, _trt__GetAudioOutputConfigurationResponse &trt__GetAudioOutputConfigurationResponse);

    /// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int GetAudioDecoderConfiguration(_trt__GetAudioDecoderConfiguration *trt__GetAudioDecoderConfiguration, _trt__GetAudioDecoderConfigurationResponse &trt__GetAudioDecoderConfigurationResponse);

    /// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoEncoderConfigurations(_trt__GetCompatibleVideoEncoderConfigurations *trt__GetCompatibleVideoEncoderConfigurations, _trt__GetCompatibleVideoEncoderConfigurationsResponse &trt__GetCompatibleVideoEncoderConfigurationsResponse);

    /// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoSourceConfigurations(_trt__GetCompatibleVideoSourceConfigurations *trt__GetCompatibleVideoSourceConfigurations, _trt__GetCompatibleVideoSourceConfigurationsResponse &trt__GetCompatibleVideoSourceConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioEncoderConfigurations(_trt__GetCompatibleAudioEncoderConfigurations *trt__GetCompatibleAudioEncoderConfigurations, _trt__GetCompatibleAudioEncoderConfigurationsResponse &trt__GetCompatibleAudioEncoderConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioSourceConfigurations(_trt__GetCompatibleAudioSourceConfigurations *trt__GetCompatibleAudioSourceConfigurations, _trt__GetCompatibleAudioSourceConfigurationsResponse &trt__GetCompatibleAudioSourceConfigurationsResponse);

    /// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleVideoAnalyticsConfigurations(_trt__GetCompatibleVideoAnalyticsConfigurations *trt__GetCompatibleVideoAnalyticsConfigurations, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse &trt__GetCompatibleVideoAnalyticsConfigurationsResponse);

    /// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleMetadataConfigurations(_trt__GetCompatibleMetadataConfigurations *trt__GetCompatibleMetadataConfigurations, _trt__GetCompatibleMetadataConfigurationsResponse &trt__GetCompatibleMetadataConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioOutputConfigurations(_trt__GetCompatibleAudioOutputConfigurations *trt__GetCompatibleAudioOutputConfigurations, _trt__GetCompatibleAudioOutputConfigurationsResponse &trt__GetCompatibleAudioOutputConfigurationsResponse);

    /// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
    int GetCompatibleAudioDecoderConfigurations(_trt__GetCompatibleAudioDecoderConfigurations *trt__GetCompatibleAudioDecoderConfigurations, _trt__GetCompatibleAudioDecoderConfigurationsResponse &trt__GetCompatibleAudioDecoderConfigurationsResponse);

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int SetVideoSourceConfiguration(_trt__SetVideoSourceConfiguration *trt__SetVideoSourceConfiguration, _trt__SetVideoSourceConfigurationResponse &trt__SetVideoSourceConfigurationResponse);

    /// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
    int SetVideoEncoderConfiguration(_trt__SetVideoEncoderConfiguration *trt__SetVideoEncoderConfiguration, _trt__SetVideoEncoderConfigurationResponse &trt__SetVideoEncoderConfigurationResponse);

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int SetAudioSourceConfiguration(_trt__SetAudioSourceConfiguration *trt__SetAudioSourceConfiguration, _trt__SetAudioSourceConfigurationResponse &trt__SetAudioSourceConfigurationResponse);

    /// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
    int SetAudioEncoderConfiguration(_trt__SetAudioEncoderConfiguration *trt__SetAudioEncoderConfiguration, _trt__SetAudioEncoderConfigurationResponse &trt__SetAudioEncoderConfigurationResponse);

    /// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
    int SetVideoAnalyticsConfiguration(_trt__SetVideoAnalyticsConfiguration *trt__SetVideoAnalyticsConfiguration, _trt__SetVideoAnalyticsConfigurationResponse &trt__SetVideoAnalyticsConfigurationResponse);

    /// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
    int SetMetadataConfiguration(_trt__SetMetadataConfiguration *trt__SetMetadataConfiguration, _trt__SetMetadataConfigurationResponse &trt__SetMetadataConfigurationResponse);

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int SetAudioOutputConfiguration(_trt__SetAudioOutputConfiguration *trt__SetAudioOutputConfiguration, _trt__SetAudioOutputConfigurationResponse &trt__SetAudioOutputConfigurationResponse);

    /// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
    int SetAudioDecoderConfiguration(_trt__SetAudioDecoderConfiguration *trt__SetAudioDecoderConfiguration, _trt__SetAudioDecoderConfigurationResponse &trt__SetAudioDecoderConfigurationResponse);

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoSourceConfigurationOptions(_trt__GetVideoSourceConfigurationOptions *trt__GetVideoSourceConfigurationOptions, _trt__GetVideoSourceConfigurationOptionsResponse &trt__GetVideoSourceConfigurationOptionsResponse);

    /// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoEncoderConfigurationOptions(_trt__GetVideoEncoderConfigurationOptions *trt__GetVideoEncoderConfigurationOptions, _trt__GetVideoEncoderConfigurationOptionsResponse &trt__GetVideoEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioSourceConfigurationOptions(_trt__GetAudioSourceConfigurationOptions *trt__GetAudioSourceConfigurationOptions, _trt__GetAudioSourceConfigurationOptionsResponse &trt__GetAudioSourceConfigurationOptionsResponse);

    /// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioEncoderConfigurationOptions(_trt__GetAudioEncoderConfigurationOptions *trt__GetAudioEncoderConfigurationOptions, _trt__GetAudioEncoderConfigurationOptionsResponse &trt__GetAudioEncoderConfigurationOptionsResponse);

    /// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
    int GetMetadataConfigurationOptions(_trt__GetMetadataConfigurationOptions *trt__GetMetadataConfigurationOptions, _trt__GetMetadataConfigurationOptionsResponse &trt__GetMetadataConfigurationOptionsResponse);

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioOutputConfigurationOptions(_trt__GetAudioOutputConfigurationOptions *trt__GetAudioOutputConfigurationOptions, _trt__GetAudioOutputConfigurationOptionsResponse &trt__GetAudioOutputConfigurationOptionsResponse);

    /// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioDecoderConfigurationOptions(_trt__GetAudioDecoderConfigurationOptions *trt__GetAudioDecoderConfigurationOptions, _trt__GetAudioDecoderConfigurationOptionsResponse &trt__GetAudioDecoderConfigurationOptionsResponse);

    /// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
    int GetGuaranteedNumberOfVideoEncoderInstances(_trt__GetGuaranteedNumberOfVideoEncoderInstances *trt__GetGuaranteedNumberOfVideoEncoderInstances, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse &trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);

    /// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
    int GetStreamUri(_trt__GetStreamUri *trt__GetStreamUri, _trt__GetStreamUriResponse &trt__GetStreamUriResponse);

    /// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
    int StartMulticastStreaming(_trt__StartMulticastStreaming *trt__StartMulticastStreaming, _trt__StartMulticastStreamingResponse &trt__StartMulticastStreamingResponse);

    /// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
    int StopMulticastStreaming(_trt__StopMulticastStreaming *trt__StopMulticastStreaming, _trt__StopMulticastStreamingResponse &trt__StopMulticastStreamingResponse);

    /// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
    int SetSynchronizationPoint(_trt__SetSynchronizationPoint *trt__SetSynchronizationPoint, _trt__SetSynchronizationPointResponse &trt__SetSynchronizationPointResponse);

    /// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
    int GetSnapshotUri(_trt__GetSnapshotUri *trt__GetSnapshotUri, _trt__GetSnapshotUriResponse &trt__GetSnapshotUriResponse);

    /// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
    int GetVideoSourceModes(_trt__GetVideoSourceModes *trt__GetVideoSourceModes, _trt__GetVideoSourceModesResponse &trt__GetVideoSourceModesResponse);

    /// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
    int SetVideoSourceMode(_trt__SetVideoSourceMode *trt__SetVideoSourceMode, _trt__SetVideoSourceModeResponse &trt__SetVideoSourceModeResponse);

    /// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
    int GetOSDs(_trt__GetOSDs *trt__GetOSDs, _trt__GetOSDsResponse &trt__GetOSDsResponse);

    /// Web service operation 'GetOSD' (returns error code or SOAP_OK)
    int GetOSD(_trt__GetOSD *trt__GetOSD, _trt__GetOSDResponse &trt__GetOSDResponse);

    /// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
    int GetOSDOptions(_trt__GetOSDOptions *trt__GetOSDOptions, _trt__GetOSDOptionsResponse &trt__GetOSDOptionsResponse);

    /// Web service operation 'SetOSD' (returns error code or SOAP_OK)
    int SetOSD(_trt__SetOSD *trt__SetOSD, _trt__SetOSDResponse &trt__SetOSDResponse);

    /// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
    int CreateOSD(_trt__CreateOSD *trt__CreateOSD, _trt__CreateOSDResponse &trt__CreateOSDResponse);

    /// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
    int DeleteOSD(_trt__DeleteOSD *trt__DeleteOSD, _trt__DeleteOSDResponse &trt__DeleteOSDResponse);

};

#endif // MEDIASERVICEEXT_H
