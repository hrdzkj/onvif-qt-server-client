#include "soap/onvifmediaMedia2BindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
//#include "onvif/mediaservice.h"
#include "mediaservice.h"

MediaServiceExtAbst * MediaService::serviceExt = NULL;

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int Media2BindingService::GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetServiceCapabilities(ns1__GetServiceCapabilities, ns1__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}



/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int Media2BindingService::CreateProfile(_ns1__CreateProfile *ns1__CreateProfile, _ns1__CreateProfileResponse &ns1__CreateProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateProfile( ns1__CreateProfile,  ns1__CreateProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}



/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int Media2BindingService::GetProfiles(_ns1__GetProfiles *ns1__GetProfiles, _ns1__GetProfilesResponse &ns1__GetProfilesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetProfiles( ns1__GetProfiles,  ns1__GetProfilesResponse) ;
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}




/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int Media2BindingService::DeleteProfile(_ns1__DeleteProfile *ns1__DeleteProfile, _ns1__DeleteProfileResponse &ns1__DeleteProfileResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteProfile( ns1__DeleteProfile, ns1__DeleteProfileResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoSourceConfigurations(_ns1__GetVideoSourceConfigurations *ns1__GetVideoSourceConfigurations, _ns1__GetVideoSourceConfigurationsResponse &ns1__GetVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurations( ns1__GetVideoSourceConfigurations,  ns1__GetVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoEncoderConfigurations(_ns1__GetVideoEncoderConfigurations *ns1__GetVideoEncoderConfigurations, _ns1__GetVideoEncoderConfigurationsResponse &ns1__GetVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurations( ns1__GetVideoEncoderConfigurations,  ns1__GetVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioSourceConfigurations(_ns1__GetAudioSourceConfigurations *ns1__GetAudioSourceConfigurations, _ns1__GetAudioSourceConfigurationsResponse &ns1__GetAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurations(ns1__GetAudioSourceConfigurations,  ns1__GetAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioEncoderConfigurations(_ns1__GetAudioEncoderConfigurations *ns1__GetAudioEncoderConfigurations, _ns1__GetAudioEncoderConfigurationsResponse &ns1__GetAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurations( ns1__GetAudioEncoderConfigurations,  ns1__GetAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}



/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetMetadataConfigurations(_ns1__GetMetadataConfigurations *ns1__GetMetadataConfigurations, _ns1__GetMetadataConfigurationsResponse &ns1__GetMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurations( ns1__GetMetadataConfigurations,  ns1__GetMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioOutputConfigurations(_ns1__GetAudioOutputConfigurations *ns1__GetAudioOutputConfigurations, _ns1__GetAudioOutputConfigurationsResponse &ns1__GetAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurations( ns1__GetAudioOutputConfigurations,  ns1__GetAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioDecoderConfigurations(_ns1__GetAudioDecoderConfigurations *ns1__GetAudioDecoderConfigurations, _ns1__GetAudioDecoderConfigurationsResponse &ns1__GetAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurations( ns1__GetAudioDecoderConfigurations,  ns1__GetAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoSourceConfiguration(_ns1__GetVideoSourceConfiguration *ns1__GetVideoSourceConfiguration, _ns1__GetVideoSourceConfigurationResponse &ns1__GetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfiguration( ns1__GetVideoSourceConfiguration,  ns1__GetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoEncoderConfiguration(_ns1__GetVideoEncoderConfiguration *ns1__GetVideoEncoderConfiguration, _ns1__GetVideoEncoderConfigurationResponse &ns1__GetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfiguration( ns1__GetVideoEncoderConfiguration,  ns1__GetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioSourceConfiguration(_ns1__GetAudioSourceConfiguration *ns1__GetAudioSourceConfiguration, _ns1__GetAudioSourceConfigurationResponse &ns1__GetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfiguration( ns1__GetAudioSourceConfiguration,  ns1__GetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioEncoderConfiguration(_ns1__GetAudioEncoderConfiguration *ns1__GetAudioEncoderConfiguration, _ns1__GetAudioEncoderConfigurationResponse &ns1__GetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfiguration( ns1__GetAudioEncoderConfiguration, ns1__GetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoAnalyticsConfiguration(_ns1__GetVideoAnalyticsConfiguration *ns1__GetVideoAnalyticsConfiguration, _ns1__GetVideoAnalyticsConfigurationResponse &ns1__GetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoAnalyticsConfiguration( ns1__GetVideoAnalyticsConfiguration,  ns1__GetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetMetadataConfiguration(_ns1__GetMetadataConfiguration *ns1__GetMetadataConfiguration, _ns1__GetMetadataConfigurationResponse &ns1__GetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfiguration( ns1__GetMetadataConfiguration,  ns1__GetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioOutputConfiguration(_ns1__GetAudioOutputConfiguration *ns1__GetAudioOutputConfiguration, _ns1__GetAudioOutputConfigurationResponse &ns1__GetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfiguration( ns1__GetAudioOutputConfiguration,  ns1__GetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioDecoderConfiguration(_ns1__GetAudioDecoderConfiguration *ns1__GetAudioDecoderConfiguration, _ns1__GetAudioDecoderConfigurationResponse &ns1__GetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfiguration( ns1__GetAudioDecoderConfiguration,  ns1__GetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleVideoEncoderConfigurations(_ns1__GetCompatibleVideoEncoderConfigurations *ns1__GetCompatibleVideoEncoderConfigurations, _ns1__GetCompatibleVideoEncoderConfigurationsResponse &ns1__GetCompatibleVideoEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoEncoderConfigurations( ns1__GetCompatibleVideoEncoderConfigurations,  ns1__GetCompatibleVideoEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleVideoSourceConfigurations(_ns1__GetCompatibleVideoSourceConfigurations *ns1__GetCompatibleVideoSourceConfigurations, _ns1__GetCompatibleVideoSourceConfigurationsResponse &ns1__GetCompatibleVideoSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoSourceConfigurations( ns1__GetCompatibleVideoSourceConfigurations,  ns1__GetCompatibleVideoSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleAudioEncoderConfigurations(_ns1__GetCompatibleAudioEncoderConfigurations *ns1__GetCompatibleAudioEncoderConfigurations, _ns1__GetCompatibleAudioEncoderConfigurationsResponse &ns1__GetCompatibleAudioEncoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioEncoderConfigurations( ns1__GetCompatibleAudioEncoderConfigurations,  ns1__GetCompatibleAudioEncoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleAudioSourceConfigurations(_ns1__GetCompatibleAudioSourceConfigurations *ns1__GetCompatibleAudioSourceConfigurations, _ns1__GetCompatibleAudioSourceConfigurationsResponse &ns1__GetCompatibleAudioSourceConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioSourceConfigurations( ns1__GetCompatibleAudioSourceConfigurations, ns1__GetCompatibleAudioSourceConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleVideoAnalyticsConfigurations(_ns1__GetCompatibleVideoAnalyticsConfigurations *ns1__GetCompatibleVideoAnalyticsConfigurations, _ns1__GetCompatibleVideoAnalyticsConfigurationsResponse &ns1__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleVideoAnalyticsConfigurations( ns1__GetCompatibleVideoAnalyticsConfigurations, ns1__GetCompatibleVideoAnalyticsConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleMetadataConfigurations(_ns1__GetCompatibleMetadataConfigurations *ns1__GetCompatibleMetadataConfigurations, _ns1__GetCompatibleMetadataConfigurationsResponse &ns1__GetCompatibleMetadataConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleMetadataConfigurations( ns1__GetCompatibleMetadataConfigurations, ns1__GetCompatibleMetadataConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleAudioOutputConfigurations(_ns1__GetCompatibleAudioOutputConfigurations *ns1__GetCompatibleAudioOutputConfigurations, _ns1__GetCompatibleAudioOutputConfigurationsResponse &ns1__GetCompatibleAudioOutputConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioOutputConfigurations( ns1__GetCompatibleAudioOutputConfigurations, ns1__GetCompatibleAudioOutputConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int Media2BindingService::GetCompatibleAudioDecoderConfigurations(_ns1__GetCompatibleAudioDecoderConfigurations *ns1__GetCompatibleAudioDecoderConfigurations, _ns1__GetCompatibleAudioDecoderConfigurationsResponse &ns1__GetCompatibleAudioDecoderConfigurationsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetCompatibleAudioDecoderConfigurations( ns1__GetCompatibleAudioDecoderConfigurations, ns1__GetCompatibleAudioDecoderConfigurationsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetVideoSourceConfiguration(_ns1__SetVideoSourceConfiguration *ns1__SetVideoSourceConfiguration, _ns1__SetVideoSourceConfigurationResponse &ns1__SetVideoSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceConfiguration( ns1__SetVideoSourceConfiguration, ns1__SetVideoSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetVideoEncoderConfiguration(_ns1__SetVideoEncoderConfiguration *ns1__SetVideoEncoderConfiguration, _ns1__SetVideoEncoderConfigurationResponse &ns1__SetVideoEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoEncoderConfiguration( ns1__SetVideoEncoderConfiguration, ns1__SetVideoEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetAudioSourceConfiguration(_ns1__SetAudioSourceConfiguration *ns1__SetAudioSourceConfiguration, _ns1__SetAudioSourceConfigurationResponse &ns1__SetAudioSourceConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioSourceConfiguration( ns1__SetAudioSourceConfiguration, ns1__SetAudioSourceConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetAudioEncoderConfiguration(_ns1__SetAudioEncoderConfiguration *ns1__SetAudioEncoderConfiguration, _ns1__SetAudioEncoderConfigurationResponse &ns1__SetAudioEncoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioEncoderConfiguration( ns1__SetAudioEncoderConfiguration, ns1__SetAudioEncoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetVideoAnalyticsConfiguration(_ns1__SetVideoAnalyticsConfiguration *ns1__SetVideoAnalyticsConfiguration, _ns1__SetVideoAnalyticsConfigurationResponse &ns1__SetVideoAnalyticsConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoAnalyticsConfiguration( ns1__SetVideoAnalyticsConfiguration,  ns1__SetVideoAnalyticsConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetMetadataConfiguration(_ns1__SetMetadataConfiguration *ns1__SetMetadataConfiguration, _ns1__SetMetadataConfigurationResponse &ns1__SetMetadataConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetMetadataConfiguration( ns1__SetMetadataConfiguration,  ns1__SetMetadataConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetAudioOutputConfiguration(_ns1__SetAudioOutputConfiguration *ns1__SetAudioOutputConfiguration, _ns1__SetAudioOutputConfigurationResponse &ns1__SetAudioOutputConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioOutputConfiguration( ns1__SetAudioOutputConfiguration, ns1__SetAudioOutputConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int Media2BindingService::SetAudioDecoderConfiguration(_ns1__SetAudioDecoderConfiguration *ns1__SetAudioDecoderConfiguration, _ns1__SetAudioDecoderConfigurationResponse &ns1__SetAudioDecoderConfigurationResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetAudioDecoderConfiguration(ns1__SetAudioDecoderConfiguration,   ns1__SetAudioDecoderConfigurationResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoSourceConfigurationOptions(_ns1__GetVideoSourceConfigurationOptions *ns1__GetVideoSourceConfigurationOptions, _ns1__GetVideoSourceConfigurationOptionsResponse &ns1__GetVideoSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceConfigurationOptions( ns1__GetVideoSourceConfigurationOptions,  ns1__GetVideoSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoEncoderConfigurationOptions(_ns1__GetVideoEncoderConfigurationOptions *ns1__GetVideoEncoderConfigurationOptions, _ns1__GetVideoEncoderConfigurationOptionsResponse &ns1__GetVideoEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoEncoderConfigurationOptions( ns1__GetVideoEncoderConfigurationOptions, ns1__GetVideoEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioSourceConfigurationOptions(_ns1__GetAudioSourceConfigurationOptions *ns1__GetAudioSourceConfigurationOptions, _ns1__GetAudioSourceConfigurationOptionsResponse &ns1__GetAudioSourceConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioSourceConfigurationOptions( ns1__GetAudioSourceConfigurationOptions, ns1__GetAudioSourceConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioEncoderConfigurationOptions(_ns1__GetAudioEncoderConfigurationOptions *ns1__GetAudioEncoderConfigurationOptions, _ns1__GetAudioEncoderConfigurationOptionsResponse &ns1__GetAudioEncoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioEncoderConfigurationOptions( ns1__GetAudioEncoderConfigurationOptions, ns1__GetAudioEncoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetMetadataConfigurationOptions(_ns1__GetMetadataConfigurationOptions *ns1__GetMetadataConfigurationOptions, _ns1__GetMetadataConfigurationOptionsResponse &ns1__GetMetadataConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetMetadataConfigurationOptions( ns1__GetMetadataConfigurationOptions, ns1__GetMetadataConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioOutputConfigurationOptions(_ns1__GetAudioOutputConfigurationOptions *ns1__GetAudioOutputConfigurationOptions, _ns1__GetAudioOutputConfigurationOptionsResponse &ns1__GetAudioOutputConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioOutputConfigurationOptions( ns1__GetAudioOutputConfigurationOptions,  ns1__GetAudioOutputConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetAudioDecoderConfigurationOptions(_ns1__GetAudioDecoderConfigurationOptions *ns1__GetAudioDecoderConfigurationOptions, _ns1__GetAudioDecoderConfigurationOptionsResponse &ns1__GetAudioDecoderConfigurationOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetAudioDecoderConfigurationOptions( ns1__GetAudioDecoderConfigurationOptions, ns1__GetAudioDecoderConfigurationOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int Media2BindingService::GetGuaranteedNumberOfVideoEncoderInstances(_ns1__GetGuaranteedNumberOfVideoEncoderInstances *ns1__GetGuaranteedNumberOfVideoEncoderInstances, _ns1__GetGuaranteedNumberOfVideoEncoderInstancesResponse &ns1__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetGuaranteedNumberOfVideoEncoderInstances( ns1__GetGuaranteedNumberOfVideoEncoderInstances, ns1__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int Media2BindingService::GetStreamUri(_ns1__GetStreamUri *ns1__GetStreamUri, _ns1__GetStreamUriResponse &ns1__GetStreamUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetStreamUri( ns1__GetStreamUri,  ns1__GetStreamUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int Media2BindingService::StartMulticastStreaming(_ns1__StartMulticastStreaming *ns1__StartMulticastStreaming, _ns1__StartMulticastStreamingResponse &ns1__StartMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StartMulticastStreaming( ns1__StartMulticastStreaming, ns1__StartMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int Media2BindingService::StopMulticastStreaming(_ns1__StopMulticastStreaming *ns1__StopMulticastStreaming, _ns1__StopMulticastStreamingResponse &ns1__StopMulticastStreamingResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->StopMulticastStreaming( ns1__StopMulticastStreaming, ns1__StopMulticastStreamingResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int Media2BindingService::SetSynchronizationPoint(_ns1__SetSynchronizationPoint *ns1__SetSynchronizationPoint, _ns1__SetSynchronizationPointResponse &ns1__SetSynchronizationPointResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetSynchronizationPoint( ns1__SetSynchronizationPoint, ns1__SetSynchronizationPointResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int Media2BindingService::GetSnapshotUri(_ns1__GetSnapshotUri *ns1__GetSnapshotUri, _ns1__GetSnapshotUriResponse &ns1__GetSnapshotUriResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetSnapshotUri( ns1__GetSnapshotUri, ns1__GetSnapshotUriResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int Media2BindingService::GetVideoSourceModes(_ns1__GetVideoSourceModes *ns1__GetVideoSourceModes, _ns1__GetVideoSourceModesResponse &ns1__GetVideoSourceModesResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetVideoSourceModes( ns1__GetVideoSourceModes, ns1__GetVideoSourceModesResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int Media2BindingService::SetVideoSourceMode(_ns1__SetVideoSourceMode *ns1__SetVideoSourceMode, _ns1__SetVideoSourceModeResponse &ns1__SetVideoSourceModeResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetVideoSourceMode( ns1__SetVideoSourceMode, ns1__SetVideoSourceModeResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int Media2BindingService::GetOSDs(_ns1__GetOSDs *ns1__GetOSDs, _ns1__GetOSDsResponse &ns1__GetOSDsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDs( ns1__GetOSDs, ns1__GetOSDsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int Media2BindingService::GetOSD(_ns1__GetOSD *ns1__GetOSD, _ns1__GetOSDResponse &ns1__GetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSD( ns1__GetOSD, ns1__GetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int Media2BindingService::GetOSDOptions(_ns1__GetOSDOptions *ns1__GetOSDOptions, _ns1__GetOSDOptionsResponse &ns1__GetOSDOptionsResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->GetOSDOptions( ns1__GetOSDOptions,  ns1__GetOSDOptionsResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int Media2BindingService::SetOSD(_ns1__SetOSD *ns1__SetOSD, _ns1__SetOSDResponse &ns1__SetOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->SetOSD( ns1__SetOSD, ns1__SetOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int Media2BindingService::CreateOSD(_ns1__CreateOSD *ns1__CreateOSD, _ns1__CreateOSDResponse &ns1__CreateOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->CreateOSD( ns1__CreateOSD, ns1__CreateOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int Media2BindingService::DeleteOSD(_ns1__DeleteOSD *ns1__DeleteOSD, _ns1__DeleteOSDResponse &ns1__DeleteOSDResponse) {
    if(MediaService::serviceExt != NULL){
        return MediaService::serviceExt->DeleteOSD( ns1__DeleteOSD, ns1__DeleteOSDResponse);
    } else {
        qDebug() << "MediaService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
