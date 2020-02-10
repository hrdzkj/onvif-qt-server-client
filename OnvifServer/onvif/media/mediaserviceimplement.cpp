#include "soap/onvifmediaMediaBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "media/mediaservice.h"

MediaServiceExtAbst * MediaService::serviceExt = NULL;

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int MediaBindingService::GetServiceCapabilities(_trt__GetServiceCapabilities *trt__GetServiceCapabilities, _trt__GetServiceCapabilitiesResponse &trt__GetServiceCapabilitiesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetServiceCapabilities(trt__GetServiceCapabilities, trt__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSources(_trt__GetVideoSources *trt__GetVideoSources, _trt__GetVideoSourcesResponse &trt__GetVideoSourcesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSources( trt__GetVideoSources, trt__GetVideoSourcesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSources(_trt__GetAudioSources *trt__GetAudioSources, _trt__GetAudioSourcesResponse &trt__GetAudioSourcesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSources( trt__GetAudioSources,  trt__GetAudioSourcesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputs(_trt__GetAudioOutputs *trt__GetAudioOutputs, _trt__GetAudioOutputsResponse &trt__GetAudioOutputsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputs( trt__GetAudioOutputs,  trt__GetAudioOutputsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int MediaBindingService::CreateProfile(_trt__CreateProfile *trt__CreateProfile, _trt__CreateProfileResponse &trt__CreateProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateProfile( trt__CreateProfile,  trt__CreateProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
int MediaBindingService::GetProfile(_trt__GetProfile *trt__GetProfile, _trt__GetProfileResponse &trt__GetProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetProfile( trt__GetProfile,  trt__GetProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int MediaBindingService::GetProfiles(_trt__GetProfiles *trt__GetProfiles, _trt__GetProfilesResponse &trt__GetProfilesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetProfiles( trt__GetProfiles,  trt__GetProfilesResponse) ;
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoEncoderConfiguration(_trt__AddVideoEncoderConfiguration *trt__AddVideoEncoderConfiguration, _trt__AddVideoEncoderConfigurationResponse &trt__AddVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoEncoderConfiguration( trt__AddVideoEncoderConfiguration,  trt__AddVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoSourceConfiguration(_trt__AddVideoSourceConfiguration *trt__AddVideoSourceConfiguration, _trt__AddVideoSourceConfigurationResponse &trt__AddVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoSourceConfiguration( trt__AddVideoSourceConfiguration, trt__AddVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioEncoderConfiguration(_trt__AddAudioEncoderConfiguration *trt__AddAudioEncoderConfiguration, _trt__AddAudioEncoderConfigurationResponse &trt__AddAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioEncoderConfiguration( trt__AddAudioEncoderConfiguration, trt__AddAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioSourceConfiguration(_trt__AddAudioSourceConfiguration *trt__AddAudioSourceConfiguration, _trt__AddAudioSourceConfigurationResponse &trt__AddAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioSourceConfiguration( trt__AddAudioSourceConfiguration, trt__AddAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddPTZConfiguration(_trt__AddPTZConfiguration *trt__AddPTZConfiguration, _trt__AddPTZConfigurationResponse &trt__AddPTZConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddPTZConfiguration( trt__AddPTZConfiguration, trt__AddPTZConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoAnalyticsConfiguration(_trt__AddVideoAnalyticsConfiguration *trt__AddVideoAnalyticsConfiguration, _trt__AddVideoAnalyticsConfigurationResponse &trt__AddVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddVideoAnalyticsConfiguration( trt__AddVideoAnalyticsConfiguration, trt__AddVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddMetadataConfiguration(_trt__AddMetadataConfiguration *trt__AddMetadataConfiguration, _trt__AddMetadataConfigurationResponse &trt__AddMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddMetadataConfiguration( trt__AddMetadataConfiguration, trt__AddMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioOutputConfiguration(_trt__AddAudioOutputConfiguration *trt__AddAudioOutputConfiguration, _trt__AddAudioOutputConfigurationResponse &trt__AddAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioOutputConfiguration( trt__AddAudioOutputConfiguration, trt__AddAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioDecoderConfiguration(_trt__AddAudioDecoderConfiguration *trt__AddAudioDecoderConfiguration, _trt__AddAudioDecoderConfigurationResponse &trt__AddAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->AddAudioDecoderConfiguration( trt__AddAudioDecoderConfiguration, trt__AddAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoEncoderConfiguration(_trt__RemoveVideoEncoderConfiguration *trt__RemoveVideoEncoderConfiguration, _trt__RemoveVideoEncoderConfigurationResponse &trt__RemoveVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoEncoderConfiguration( trt__RemoveVideoEncoderConfiguration,  trt__RemoveVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoSourceConfiguration(_trt__RemoveVideoSourceConfiguration *trt__RemoveVideoSourceConfiguration, _trt__RemoveVideoSourceConfigurationResponse &trt__RemoveVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoSourceConfiguration( trt__RemoveVideoSourceConfiguration,  trt__RemoveVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioEncoderConfiguration(_trt__RemoveAudioEncoderConfiguration *trt__RemoveAudioEncoderConfiguration, _trt__RemoveAudioEncoderConfigurationResponse &trt__RemoveAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioEncoderConfiguration( trt__RemoveAudioEncoderConfiguration, trt__RemoveAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioSourceConfiguration(_trt__RemoveAudioSourceConfiguration *trt__RemoveAudioSourceConfiguration, _trt__RemoveAudioSourceConfigurationResponse &trt__RemoveAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioSourceConfiguration( trt__RemoveAudioSourceConfiguration, trt__RemoveAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemovePTZConfiguration(_trt__RemovePTZConfiguration *trt__RemovePTZConfiguration, _trt__RemovePTZConfigurationResponse &trt__RemovePTZConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemovePTZConfiguration( trt__RemovePTZConfiguration, trt__RemovePTZConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoAnalyticsConfiguration(_trt__RemoveVideoAnalyticsConfiguration *trt__RemoveVideoAnalyticsConfiguration, _trt__RemoveVideoAnalyticsConfigurationResponse &trt__RemoveVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveVideoAnalyticsConfiguration( trt__RemoveVideoAnalyticsConfiguration, trt__RemoveVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveMetadataConfiguration(_trt__RemoveMetadataConfiguration *trt__RemoveMetadataConfiguration, _trt__RemoveMetadataConfigurationResponse &trt__RemoveMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveMetadataConfiguration( trt__RemoveMetadataConfiguration, trt__RemoveMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioOutputConfiguration(_trt__RemoveAudioOutputConfiguration *trt__RemoveAudioOutputConfiguration, _trt__RemoveAudioOutputConfigurationResponse &trt__RemoveAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioOutputConfiguration(trt__RemoveAudioOutputConfiguration,  trt__RemoveAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioDecoderConfiguration(_trt__RemoveAudioDecoderConfiguration *trt__RemoveAudioDecoderConfiguration, _trt__RemoveAudioDecoderConfigurationResponse &trt__RemoveAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->RemoveAudioDecoderConfiguration( trt__RemoveAudioDecoderConfiguration, trt__RemoveAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int MediaBindingService::DeleteProfile(_trt__DeleteProfile *trt__DeleteProfile, _trt__DeleteProfileResponse &trt__DeleteProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteProfile( trt__DeleteProfile, trt__DeleteProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurations(_trt__GetVideoSourceConfigurations *trt__GetVideoSourceConfigurations, _trt__GetVideoSourceConfigurationsResponse &trt__GetVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurations( trt__GetVideoSourceConfigurations,  trt__GetVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurations(_trt__GetVideoEncoderConfigurations *trt__GetVideoEncoderConfigurations, _trt__GetVideoEncoderConfigurationsResponse &trt__GetVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurations( trt__GetVideoEncoderConfigurations,  trt__GetVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurations(_trt__GetAudioSourceConfigurations *trt__GetAudioSourceConfigurations, _trt__GetAudioSourceConfigurationsResponse &trt__GetAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurations(trt__GetAudioSourceConfigurations,  trt__GetAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurations(_trt__GetAudioEncoderConfigurations *trt__GetAudioEncoderConfigurations, _trt__GetAudioEncoderConfigurationsResponse &trt__GetAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurations( trt__GetAudioEncoderConfigurations,  trt__GetAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfigurations(_trt__GetVideoAnalyticsConfigurations *trt__GetVideoAnalyticsConfigurations, _trt__GetVideoAnalyticsConfigurationsResponse &trt__GetVideoAnalyticsConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoAnalyticsConfigurations( trt__GetVideoAnalyticsConfigurations,  trt__GetVideoAnalyticsConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurations(_trt__GetMetadataConfigurations *trt__GetMetadataConfigurations, _trt__GetMetadataConfigurationsResponse &trt__GetMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurations( trt__GetMetadataConfigurations,  trt__GetMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurations(_trt__GetAudioOutputConfigurations *trt__GetAudioOutputConfigurations, _trt__GetAudioOutputConfigurationsResponse &trt__GetAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurations( trt__GetAudioOutputConfigurations,  trt__GetAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurations(_trt__GetAudioDecoderConfigurations *trt__GetAudioDecoderConfigurations, _trt__GetAudioDecoderConfigurationsResponse &trt__GetAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurations( trt__GetAudioDecoderConfigurations,  trt__GetAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfiguration(_trt__GetVideoSourceConfiguration *trt__GetVideoSourceConfiguration, _trt__GetVideoSourceConfigurationResponse &trt__GetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfiguration( trt__GetVideoSourceConfiguration,  trt__GetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfiguration(_trt__GetVideoEncoderConfiguration *trt__GetVideoEncoderConfiguration, _trt__GetVideoEncoderConfigurationResponse &trt__GetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfiguration( trt__GetVideoEncoderConfiguration,  trt__GetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfiguration(_trt__GetAudioSourceConfiguration *trt__GetAudioSourceConfiguration, _trt__GetAudioSourceConfigurationResponse &trt__GetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfiguration( trt__GetAudioSourceConfiguration,  trt__GetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfiguration(_trt__GetAudioEncoderConfiguration *trt__GetAudioEncoderConfiguration, _trt__GetAudioEncoderConfigurationResponse &trt__GetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfiguration( trt__GetAudioEncoderConfiguration, trt__GetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfiguration(_trt__GetVideoAnalyticsConfiguration *trt__GetVideoAnalyticsConfiguration, _trt__GetVideoAnalyticsConfigurationResponse &trt__GetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoAnalyticsConfiguration( trt__GetVideoAnalyticsConfiguration,  trt__GetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfiguration(_trt__GetMetadataConfiguration *trt__GetMetadataConfiguration, _trt__GetMetadataConfigurationResponse &trt__GetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfiguration( trt__GetMetadataConfiguration,  trt__GetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfiguration(_trt__GetAudioOutputConfiguration *trt__GetAudioOutputConfiguration, _trt__GetAudioOutputConfigurationResponse &trt__GetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfiguration( trt__GetAudioOutputConfiguration,  trt__GetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfiguration(_trt__GetAudioDecoderConfiguration *trt__GetAudioDecoderConfiguration, _trt__GetAudioDecoderConfigurationResponse &trt__GetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfiguration( trt__GetAudioDecoderConfiguration,  trt__GetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoEncoderConfigurations(_trt__GetCompatibleVideoEncoderConfigurations *trt__GetCompatibleVideoEncoderConfigurations, _trt__GetCompatibleVideoEncoderConfigurationsResponse &trt__GetCompatibleVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoEncoderConfigurations( trt__GetCompatibleVideoEncoderConfigurations,  trt__GetCompatibleVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoSourceConfigurations(_trt__GetCompatibleVideoSourceConfigurations *trt__GetCompatibleVideoSourceConfigurations, _trt__GetCompatibleVideoSourceConfigurationsResponse &trt__GetCompatibleVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoSourceConfigurations( trt__GetCompatibleVideoSourceConfigurations,  trt__GetCompatibleVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioEncoderConfigurations(_trt__GetCompatibleAudioEncoderConfigurations *trt__GetCompatibleAudioEncoderConfigurations, _trt__GetCompatibleAudioEncoderConfigurationsResponse &trt__GetCompatibleAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioEncoderConfigurations( trt__GetCompatibleAudioEncoderConfigurations,  trt__GetCompatibleAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioSourceConfigurations(_trt__GetCompatibleAudioSourceConfigurations *trt__GetCompatibleAudioSourceConfigurations, _trt__GetCompatibleAudioSourceConfigurationsResponse &trt__GetCompatibleAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioSourceConfigurations( trt__GetCompatibleAudioSourceConfigurations, trt__GetCompatibleAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoAnalyticsConfigurations(_trt__GetCompatibleVideoAnalyticsConfigurations *trt__GetCompatibleVideoAnalyticsConfigurations, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse &trt__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoAnalyticsConfigurations( trt__GetCompatibleVideoAnalyticsConfigurations, trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleMetadataConfigurations(_trt__GetCompatibleMetadataConfigurations *trt__GetCompatibleMetadataConfigurations, _trt__GetCompatibleMetadataConfigurationsResponse &trt__GetCompatibleMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleMetadataConfigurations( trt__GetCompatibleMetadataConfigurations, trt__GetCompatibleMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioOutputConfigurations(_trt__GetCompatibleAudioOutputConfigurations *trt__GetCompatibleAudioOutputConfigurations, _trt__GetCompatibleAudioOutputConfigurationsResponse &trt__GetCompatibleAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioOutputConfigurations( trt__GetCompatibleAudioOutputConfigurations, trt__GetCompatibleAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioDecoderConfigurations(_trt__GetCompatibleAudioDecoderConfigurations *trt__GetCompatibleAudioDecoderConfigurations, _trt__GetCompatibleAudioDecoderConfigurationsResponse &trt__GetCompatibleAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioDecoderConfigurations( trt__GetCompatibleAudioDecoderConfigurations, trt__GetCompatibleAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceConfiguration(_trt__SetVideoSourceConfiguration *trt__SetVideoSourceConfiguration, _trt__SetVideoSourceConfigurationResponse &trt__SetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceConfiguration( trt__SetVideoSourceConfiguration, trt__SetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoEncoderConfiguration(_trt__SetVideoEncoderConfiguration *trt__SetVideoEncoderConfiguration, _trt__SetVideoEncoderConfigurationResponse &trt__SetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoEncoderConfiguration( trt__SetVideoEncoderConfiguration, trt__SetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioSourceConfiguration(_trt__SetAudioSourceConfiguration *trt__SetAudioSourceConfiguration, _trt__SetAudioSourceConfigurationResponse &trt__SetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioSourceConfiguration( trt__SetAudioSourceConfiguration, trt__SetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioEncoderConfiguration(_trt__SetAudioEncoderConfiguration *trt__SetAudioEncoderConfiguration, _trt__SetAudioEncoderConfigurationResponse &trt__SetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioEncoderConfiguration( trt__SetAudioEncoderConfiguration, trt__SetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoAnalyticsConfiguration(_trt__SetVideoAnalyticsConfiguration *trt__SetVideoAnalyticsConfiguration, _trt__SetVideoAnalyticsConfigurationResponse &trt__SetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoAnalyticsConfiguration( trt__SetVideoAnalyticsConfiguration,  trt__SetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetMetadataConfiguration(_trt__SetMetadataConfiguration *trt__SetMetadataConfiguration, _trt__SetMetadataConfigurationResponse &trt__SetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetMetadataConfiguration( trt__SetMetadataConfiguration,  trt__SetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioOutputConfiguration(_trt__SetAudioOutputConfiguration *trt__SetAudioOutputConfiguration, _trt__SetAudioOutputConfigurationResponse &trt__SetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioOutputConfiguration( trt__SetAudioOutputConfiguration, trt__SetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioDecoderConfiguration(_trt__SetAudioDecoderConfiguration *trt__SetAudioDecoderConfiguration, _trt__SetAudioDecoderConfigurationResponse &trt__SetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioDecoderConfiguration(trt__SetAudioDecoderConfiguration,   trt__SetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurationOptions(_trt__GetVideoSourceConfigurationOptions *trt__GetVideoSourceConfigurationOptions, _trt__GetVideoSourceConfigurationOptionsResponse &trt__GetVideoSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurationOptions( trt__GetVideoSourceConfigurationOptions,  trt__GetVideoSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurationOptions(_trt__GetVideoEncoderConfigurationOptions *trt__GetVideoEncoderConfigurationOptions, _trt__GetVideoEncoderConfigurationOptionsResponse &trt__GetVideoEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurationOptions( trt__GetVideoEncoderConfigurationOptions, trt__GetVideoEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurationOptions(_trt__GetAudioSourceConfigurationOptions *trt__GetAudioSourceConfigurationOptions, _trt__GetAudioSourceConfigurationOptionsResponse &trt__GetAudioSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurationOptions( trt__GetAudioSourceConfigurationOptions, trt__GetAudioSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurationOptions(_trt__GetAudioEncoderConfigurationOptions *trt__GetAudioEncoderConfigurationOptions, _trt__GetAudioEncoderConfigurationOptionsResponse &trt__GetAudioEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurationOptions( trt__GetAudioEncoderConfigurationOptions, trt__GetAudioEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurationOptions(_trt__GetMetadataConfigurationOptions *trt__GetMetadataConfigurationOptions, _trt__GetMetadataConfigurationOptionsResponse &trt__GetMetadataConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurationOptions( trt__GetMetadataConfigurationOptions, trt__GetMetadataConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurationOptions(_trt__GetAudioOutputConfigurationOptions *trt__GetAudioOutputConfigurationOptions, _trt__GetAudioOutputConfigurationOptionsResponse &trt__GetAudioOutputConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurationOptions( trt__GetAudioOutputConfigurationOptions,  trt__GetAudioOutputConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurationOptions(_trt__GetAudioDecoderConfigurationOptions *trt__GetAudioDecoderConfigurationOptions, _trt__GetAudioDecoderConfigurationOptionsResponse &trt__GetAudioDecoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurationOptions( trt__GetAudioDecoderConfigurationOptions, trt__GetAudioDecoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int MediaBindingService::GetGuaranteedNumberOfVideoEncoderInstances(_trt__GetGuaranteedNumberOfVideoEncoderInstances *trt__GetGuaranteedNumberOfVideoEncoderInstances, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse &trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetGuaranteedNumberOfVideoEncoderInstances( trt__GetGuaranteedNumberOfVideoEncoderInstances, trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int MediaBindingService::GetStreamUri(_trt__GetStreamUri *trt__GetStreamUri, _trt__GetStreamUriResponse &trt__GetStreamUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetStreamUri( trt__GetStreamUri,  trt__GetStreamUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StartMulticastStreaming(_trt__StartMulticastStreaming *trt__StartMulticastStreaming, _trt__StartMulticastStreamingResponse &trt__StartMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StartMulticastStreaming( trt__StartMulticastStreaming, trt__StartMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StopMulticastStreaming(_trt__StopMulticastStreaming *trt__StopMulticastStreaming, _trt__StopMulticastStreamingResponse &trt__StopMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StopMulticastStreaming( trt__StopMulticastStreaming, trt__StopMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int MediaBindingService::SetSynchronizationPoint(_trt__SetSynchronizationPoint *trt__SetSynchronizationPoint, _trt__SetSynchronizationPointResponse &trt__SetSynchronizationPointResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetSynchronizationPoint( trt__SetSynchronizationPoint, trt__SetSynchronizationPointResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int MediaBindingService::GetSnapshotUri(_trt__GetSnapshotUri *trt__GetSnapshotUri, _trt__GetSnapshotUriResponse &trt__GetSnapshotUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetSnapshotUri( trt__GetSnapshotUri, trt__GetSnapshotUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceModes(_trt__GetVideoSourceModes *trt__GetVideoSourceModes, _trt__GetVideoSourceModesResponse &trt__GetVideoSourceModesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceModes( trt__GetVideoSourceModes, trt__GetVideoSourceModesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceMode(_trt__SetVideoSourceMode *trt__SetVideoSourceMode, _trt__SetVideoSourceModeResponse &trt__SetVideoSourceModeResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceMode( trt__SetVideoSourceMode, trt__SetVideoSourceModeResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDs(_trt__GetOSDs *trt__GetOSDs, _trt__GetOSDsResponse &trt__GetOSDsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDs( trt__GetOSDs, trt__GetOSDsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int MediaBindingService::GetOSD(_trt__GetOSD *trt__GetOSD, _trt__GetOSDResponse &trt__GetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSD( trt__GetOSD, trt__GetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDOptions(_trt__GetOSDOptions *trt__GetOSDOptions, _trt__GetOSDOptionsResponse &trt__GetOSDOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDOptions( trt__GetOSDOptions,  trt__GetOSDOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int MediaBindingService::SetOSD(_trt__SetOSD *trt__SetOSD, _trt__SetOSDResponse &trt__SetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetOSD( trt__SetOSD, trt__SetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int MediaBindingService::CreateOSD(_trt__CreateOSD *trt__CreateOSD, _trt__CreateOSDResponse &trt__CreateOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateOSD( trt__CreateOSD, trt__CreateOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int MediaBindingService::DeleteOSD(_trt__DeleteOSD *trt__DeleteOSD, _trt__DeleteOSDResponse &trt__DeleteOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteOSD( trt__DeleteOSD, trt__DeleteOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
