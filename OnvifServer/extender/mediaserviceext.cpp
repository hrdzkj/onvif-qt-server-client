#include "mediaserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>

MediaServiceExt::MediaServiceExt() : MediaServiceExtAbst()
{

}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int MediaServiceExt::GetServiceCapabilities(_trt__GetServiceCapabilities *trt__GetServiceCapabilities, _trt__GetServiceCapabilitiesResponse &trt__GetServiceCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSources(_trt__GetVideoSources *trt__GetVideoSources, _trt__GetVideoSourcesResponse &trt__GetVideoSourcesResponse) {
    qDebug() << "Media Service GetVideoSources in NVT\n";

    tt__VideoSource * ttVideoSource = new tt__VideoSource();
    //ttVideoSource->token = "000";
    ttVideoSource->Framerate = 25;

    ttVideoSource->Resolution = new tt__VideoResolution();
    ttVideoSource->Resolution->Height = 720;
    ttVideoSource->Resolution->Width = 1080;

    trt__GetVideoSourcesResponse.VideoSources.push_back(ttVideoSource);

    return SOAP_OK;
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSources(_trt__GetAudioSources *trt__GetAudioSources, _trt__GetAudioSourcesResponse &trt__GetAudioSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputs(_trt__GetAudioOutputs *trt__GetAudioOutputs, _trt__GetAudioOutputsResponse &trt__GetAudioOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int MediaServiceExt::CreateProfile(_trt__CreateProfile *trt__CreateProfile, _trt__CreateProfileResponse &trt__CreateProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
int MediaServiceExt::GetProfile(_trt__GetProfile *trt__GetProfile, _trt__GetProfileResponse &trt__GetProfileResponse) {
    qDebug() << "Media Service GetProfile in NVT\n";

    if(trt__GetProfile->ProfileToken.compare("profile1") == 0){

                tt__Profile * ttProfile = new tt__Profile();
                ttProfile->fixed = 0;
                ttProfile->token = "profile1";
                ttProfile->Name = "Profile1";

                //VideoSource
                ttProfile->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
                ttProfile->VideoSourceConfiguration->token = "video_source_config";
                ttProfile->VideoSourceConfiguration->Name = "video_source_config";
                ttProfile->VideoSourceConfiguration->UseCount = 1;
                //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

                ttProfile->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
                ttProfile->VideoSourceConfiguration->Bounds->height = 720;
                ttProfile->VideoSourceConfiguration->Bounds->width =1280;
                ttProfile->VideoSourceConfiguration->Bounds->y =1;
                ttProfile->VideoSourceConfiguration->Bounds->x =1;

                //VideoEncoder
                ttProfile->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
                ttProfile->VideoEncoderConfiguration->token = "video_encoder_config";
                ttProfile->VideoEncoderConfiguration->Name = "video_encoder_config";
                ttProfile->VideoEncoderConfiguration->UseCount = 1;

                ttProfile->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

                ttProfile->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
                ttProfile->VideoEncoderConfiguration->Resolution->Width = 1280;
                ttProfile->VideoEncoderConfiguration->Resolution->Height = 720;
                ttProfile->VideoEncoderConfiguration->Quality = 7;
                ttProfile->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
                ttProfile->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
                ttProfile->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
                ttProfile->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

                ttProfile->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
                ttProfile->VideoEncoderConfiguration->H264->GovLength = 30;
                ttProfile->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

                ttProfile->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
                ttProfile->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
                ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

                ttProfile->VideoEncoderConfiguration->Multicast->Port = 0;
                ttProfile->VideoEncoderConfiguration->Multicast->TTL = 3;
                ttProfile->VideoEncoderConfiguration->Multicast->AutoStart = false;

                ttProfile->VideoEncoderConfiguration->SessionTimeout = 1000;

                //PTZ
                ttProfile->PTZConfiguration = new tt__PTZConfiguration;
                ttProfile->PTZConfiguration->Name = "PTZConfig_Channel1";
                ttProfile->PTZConfiguration->UseCount = 2;
                //ttProfile->PTZConfiguration->NodeToken = "000";
                ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
                ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
                ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
                ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
                ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
                ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
                ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
                ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
                ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

                ttProfile->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
                ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

             //   LONG64 tout = 1000;
             //   ttProfile->PTZConfiguration->DefaultPTZTimeout = &tout;

                ttProfile->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
                ttProfile->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
                ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


                ttProfile->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
                ttProfile->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
                ttProfile->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
                ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;


                trt__GetProfileResponse.Profile = ttProfile;



    }else if(trt__GetProfile->ProfileToken.compare("profile2") == 0){
        tt__Profile * ttProfile2 = new tt__Profile();
        ttProfile2->fixed = 0;
        ttProfile2->token = "profile2";
        ttProfile2->Name = "Profile2";

        //Video source conf
        ttProfile2->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
        ttProfile2->VideoSourceConfiguration->token = "video_source_config2";
        ttProfile2->VideoSourceConfiguration->Name = "video_source_config2";
        ttProfile2->VideoSourceConfiguration->UseCount = 1;
        //ttProfile2->VideoSourceConfiguration->SourceToken = "video_source2";

        ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
        ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
        ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
        ttProfile2->VideoSourceConfiguration->Bounds->y =1;
        ttProfile2->VideoSourceConfiguration->Bounds->x =1;


        //Video encoder conf
        ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
        ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
        ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
        ttProfile2->VideoEncoderConfiguration->UseCount = 1;

        ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

        ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
        ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
        ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
        ttProfile2->VideoEncoderConfiguration->Quality = 7;
        ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
        ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
        ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
        ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

        ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
        ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
        ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

        ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
        ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

        ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
        ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
        ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

        ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;


        //PTZ
        ttProfile2->PTZConfiguration = new tt__PTZConfiguration;
        ttProfile2->PTZConfiguration->Name = "PTZConfig_Channel1";
        ttProfile2->PTZConfiguration->UseCount = 2;
        //ttProfile->PTZConfiguration->NodeToken = "000";
        ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
        ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
        ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
        ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
        ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
        ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
        ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

        ttProfile2->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
        ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

     //   LONG64 tout = 1000;
     //   ttProfile2->PTZConfiguration->DefaultPTZTimeout = &tout;

        ttProfile2->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
        ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


        ttProfile2->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
        ttProfile2->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
        ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;



        trt__GetProfileResponse.Profile = ttProfile2;


    }
    return SOAP_OK;
}

/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int MediaServiceExt::GetProfiles(_trt__GetProfiles *trt__GetProfiles, _trt__GetProfilesResponse &trt__GetProfilesResponse) {
   qDebug() << "Media Service GetProfiles in NVTTTTT\n";


   tt__Profile * ttProfile = new tt__Profile();
   ttProfile->fixed = 0;
   ttProfile->token = "profile1";
   ttProfile->Name = "Profile1";

   //VideoSourceConf
   ttProfile->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
   ttProfile->VideoSourceConfiguration->token = "video_source_config";
   ttProfile->VideoSourceConfiguration->Name = "video_source_config";
   ttProfile->VideoSourceConfiguration->UseCount = 1;
   //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

   ttProfile->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
   ttProfile->VideoSourceConfiguration->Bounds->height = 720;
   ttProfile->VideoSourceConfiguration->Bounds->width =1280;
   ttProfile->VideoSourceConfiguration->Bounds->y =1;
   ttProfile->VideoSourceConfiguration->Bounds->x =1;

   //VideoEncoderConf
   ttProfile->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
   ttProfile->VideoEncoderConfiguration->token = "video_encoder_config";
   ttProfile->VideoEncoderConfiguration->Name = "video_encoder_config";
   ttProfile->VideoEncoderConfiguration->UseCount = 1;

   ttProfile->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

   ttProfile->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
   ttProfile->VideoEncoderConfiguration->Resolution->Width = 1280;
   ttProfile->VideoEncoderConfiguration->Resolution->Height = 720;
   ttProfile->VideoEncoderConfiguration->Quality = 7;
   ttProfile->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
   ttProfile->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
   ttProfile->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
   ttProfile->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

   ttProfile->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
   ttProfile->VideoEncoderConfiguration->H264->GovLength = 30;
   ttProfile->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

   ttProfile->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
   ttProfile->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
   ttProfile->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

   ttProfile->VideoEncoderConfiguration->Multicast->Port = 0;
   ttProfile->VideoEncoderConfiguration->Multicast->TTL = 3;
   ttProfile->VideoEncoderConfiguration->Multicast->AutoStart = false;

   ttProfile->VideoEncoderConfiguration->SessionTimeout = 1000;


   //PTZ
   ttProfile->PTZConfiguration = new tt__PTZConfiguration;
   ttProfile->PTZConfiguration->Name = "PTZConfig_Channel1";
   ttProfile->PTZConfiguration->UseCount = 2;
   //ttProfile->PTZConfiguration->NodeToken = "000";
   ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
   ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
   ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
   ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
   ttProfile->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
   ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
   ttProfile->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
   ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
   ttProfile->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

   ttProfile->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
   ttProfile->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

//   LONG64 tout = 1000;
//   ttProfile->PTZConfiguration->DefaultPTZTimeout = &tout;

   ttProfile->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
   ttProfile->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
   ttProfile->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


   ttProfile->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
   ttProfile->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
   ttProfile->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
   ttProfile->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;


   trt__GetProfilesResponse.Profiles.push_back(ttProfile);

//    //Profile 2------------------------------


   tt__Profile * ttProfile2 = new tt__Profile();
   ttProfile2->fixed = 0;
   ttProfile2->token = "profile2";
   ttProfile2->Name = "Profile2";

   //videosource conf
   ttProfile2->VideoSourceConfiguration = new tt__VideoSourceConfiguration();
   ttProfile2->VideoSourceConfiguration->token = "video_source_config2";
   ttProfile2->VideoSourceConfiguration->Name = "video_source_config2";
   ttProfile2->VideoSourceConfiguration->UseCount = 1;
   //ttProfile2->VideoSourceConfiguration->SourceToken = "video_source2";

   ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
   ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
   ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
   ttProfile2->VideoSourceConfiguration->Bounds->y =1;
   ttProfile2->VideoSourceConfiguration->Bounds->x =1;

   //VideoEncoder conf
   ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
   ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
   ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
   ttProfile2->VideoEncoderConfiguration->UseCount = 1;

   ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

   ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
   ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
   ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
   ttProfile2->VideoEncoderConfiguration->Quality = 7;
   ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
   ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
   ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
   ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

   ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
   ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
   ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

   ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
   ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

   ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
   ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
   ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

   ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;

   //PTZ
   ttProfile2->PTZConfiguration = new tt__PTZConfiguration;
   ttProfile2->PTZConfiguration->Name = "PTZConfig_Channel1";
   ttProfile2->PTZConfiguration->UseCount = 2;
   //ttProfile->PTZConfiguration->NodeToken = "000";
   ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultAbsolutePantTiltPositionSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
   ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultAbsoluteZoomPositionSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
   ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultRelativePanTiltTranslationSpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace");
   ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultRelativeZoomTranslationSpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace");
   ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultContinuousPanTiltVelocitySpace->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace");
   ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace = new std::string;
   ttProfile2->PTZConfiguration->DefaultContinuousZoomVelocitySpace->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace");

   ttProfile2->PTZConfiguration->DefaultPTZSpeed = new tt__PTZSpeed;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt = new tt__Vector2D;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space = new std::string;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace");
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->x = 0.8;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->PanTilt->y = 0.8;

   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom = new tt__Vector1D;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space = new std::string;
   ttProfile2->PTZConfiguration->DefaultPTZSpeed->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace");

//   LONG64 tout = 1000;
//   ttProfile2->PTZConfiguration->DefaultPTZTimeout = &tout;

   ttProfile2->PTZConfiguration->PanTiltLimits = new tt__PanTiltLimits;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range = new tt__Space2DDescription;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Min = -1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->XRange->Max = 1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Min = -1.000000;
   ttProfile2->PTZConfiguration->PanTiltLimits->Range->YRange->Max = 1.000000;


   ttProfile2->PTZConfiguration->ZoomLimits = new tt__ZoomLimits;
   ttProfile2->PTZConfiguration->ZoomLimits->Range = new tt__Space1DDescription;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange = new tt__FloatRange;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Min = 0.000000;
   ttProfile2->PTZConfiguration->ZoomLimits->Range->XRange->Max = 1.000000;



   trt__GetProfilesResponse.Profiles.push_back(ttProfile2);

   return SOAP_OK;
}

/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoEncoderConfiguration(_trt__AddVideoEncoderConfiguration *trt__AddVideoEncoderConfiguration, _trt__AddVideoEncoderConfigurationResponse &trt__AddVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoSourceConfiguration(_trt__AddVideoSourceConfiguration *trt__AddVideoSourceConfiguration, _trt__AddVideoSourceConfigurationResponse &trt__AddVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioEncoderConfiguration(_trt__AddAudioEncoderConfiguration *trt__AddAudioEncoderConfiguration, _trt__AddAudioEncoderConfigurationResponse &trt__AddAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioSourceConfiguration(_trt__AddAudioSourceConfiguration *trt__AddAudioSourceConfiguration, _trt__AddAudioSourceConfigurationResponse &trt__AddAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddPTZConfiguration(_trt__AddPTZConfiguration *trt__AddPTZConfiguration, _trt__AddPTZConfigurationResponse &trt__AddPTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddVideoAnalyticsConfiguration(_trt__AddVideoAnalyticsConfiguration *trt__AddVideoAnalyticsConfiguration, _trt__AddVideoAnalyticsConfigurationResponse &trt__AddVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddMetadataConfiguration(_trt__AddMetadataConfiguration *trt__AddMetadataConfiguration, _trt__AddMetadataConfigurationResponse &trt__AddMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioOutputConfiguration(_trt__AddAudioOutputConfiguration *trt__AddAudioOutputConfiguration, _trt__AddAudioOutputConfigurationResponse &trt__AddAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::AddAudioDecoderConfiguration(_trt__AddAudioDecoderConfiguration *trt__AddAudioDecoderConfiguration, _trt__AddAudioDecoderConfigurationResponse &trt__AddAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoEncoderConfiguration(_trt__RemoveVideoEncoderConfiguration *trt__RemoveVideoEncoderConfiguration, _trt__RemoveVideoEncoderConfigurationResponse &trt__RemoveVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoSourceConfiguration(_trt__RemoveVideoSourceConfiguration *trt__RemoveVideoSourceConfiguration, _trt__RemoveVideoSourceConfigurationResponse &trt__RemoveVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioEncoderConfiguration(_trt__RemoveAudioEncoderConfiguration *trt__RemoveAudioEncoderConfiguration, _trt__RemoveAudioEncoderConfigurationResponse &trt__RemoveAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioSourceConfiguration(_trt__RemoveAudioSourceConfiguration *trt__RemoveAudioSourceConfiguration, _trt__RemoveAudioSourceConfigurationResponse &trt__RemoveAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemovePTZConfiguration(_trt__RemovePTZConfiguration *trt__RemovePTZConfiguration, _trt__RemovePTZConfigurationResponse &trt__RemovePTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveVideoAnalyticsConfiguration(_trt__RemoveVideoAnalyticsConfiguration *trt__RemoveVideoAnalyticsConfiguration, _trt__RemoveVideoAnalyticsConfigurationResponse &trt__RemoveVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveMetadataConfiguration(_trt__RemoveMetadataConfiguration *trt__RemoveMetadataConfiguration, _trt__RemoveMetadataConfigurationResponse &trt__RemoveMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioOutputConfiguration(_trt__RemoveAudioOutputConfiguration *trt__RemoveAudioOutputConfiguration, _trt__RemoveAudioOutputConfigurationResponse &trt__RemoveAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::RemoveAudioDecoderConfiguration(_trt__RemoveAudioDecoderConfiguration *trt__RemoveAudioDecoderConfiguration, _trt__RemoveAudioDecoderConfigurationResponse &trt__RemoveAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int MediaServiceExt::DeleteProfile(_trt__DeleteProfile *trt__DeleteProfile, _trt__DeleteProfileResponse &trt__DeleteProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfigurations(_trt__GetVideoSourceConfigurations *trt__GetVideoSourceConfigurations, _trt__GetVideoSourceConfigurationsResponse &trt__GetVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfigurations(_trt__GetVideoEncoderConfigurations *trt__GetVideoEncoderConfigurations, _trt__GetVideoEncoderConfigurationsResponse &trt__GetVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfigurations(_trt__GetAudioSourceConfigurations *trt__GetAudioSourceConfigurations, _trt__GetAudioSourceConfigurationsResponse &trt__GetAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfigurations(_trt__GetAudioEncoderConfigurations *trt__GetAudioEncoderConfigurations, _trt__GetAudioEncoderConfigurationsResponse &trt__GetAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoAnalyticsConfigurations(_trt__GetVideoAnalyticsConfigurations *trt__GetVideoAnalyticsConfigurations, _trt__GetVideoAnalyticsConfigurationsResponse &trt__GetVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfigurations(_trt__GetMetadataConfigurations *trt__GetMetadataConfigurations, _trt__GetMetadataConfigurationsResponse &trt__GetMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfigurations(_trt__GetAudioOutputConfigurations *trt__GetAudioOutputConfigurations, _trt__GetAudioOutputConfigurationsResponse &trt__GetAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfigurations(_trt__GetAudioDecoderConfigurations *trt__GetAudioDecoderConfigurations, _trt__GetAudioDecoderConfigurationsResponse &trt__GetAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfiguration(_trt__GetVideoSourceConfiguration *trt__GetVideoSourceConfiguration, _trt__GetVideoSourceConfigurationResponse &trt__GetVideoSourceConfigurationResponse) {
    qDebug() << "Media Service GetVideoSourceConfiguration in NVT\n";

    trt__GetVideoSourceConfigurationResponse.Configuration = new tt__VideoSourceConfiguration();
    trt__GetVideoSourceConfigurationResponse.Configuration->token = "video_source_config";
    trt__GetVideoSourceConfigurationResponse.Configuration->Name = "video_source_config";
    trt__GetVideoSourceConfigurationResponse.Configuration->UseCount = 1;
    //ttProfile->VideoSourceConfiguration->SourceToken = "video_source";

    trt__GetVideoSourceConfigurationResponse.Configuration->Bounds = new tt__IntRectangle();
    trt__GetVideoSourceConfigurationResponse.Configuration->Bounds->height = 720;
    trt__GetVideoSourceConfigurationResponse.Configuration->Bounds->width =1280;
    trt__GetVideoSourceConfigurationResponse.Configuration->Bounds->y =1;
    trt__GetVideoSourceConfigurationResponse.Configuration->Bounds->x =1;




    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfiguration(_trt__GetVideoEncoderConfiguration *trt__GetVideoEncoderConfiguration, _trt__GetVideoEncoderConfigurationResponse &trt__GetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfiguration(_trt__GetAudioSourceConfiguration *trt__GetAudioSourceConfiguration, _trt__GetAudioSourceConfigurationResponse &trt__GetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfiguration(_trt__GetAudioEncoderConfiguration *trt__GetAudioEncoderConfiguration, _trt__GetAudioEncoderConfigurationResponse &trt__GetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoAnalyticsConfiguration(_trt__GetVideoAnalyticsConfiguration *trt__GetVideoAnalyticsConfiguration, _trt__GetVideoAnalyticsConfigurationResponse &trt__GetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfiguration(_trt__GetMetadataConfiguration *trt__GetMetadataConfiguration, _trt__GetMetadataConfigurationResponse &trt__GetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfiguration(_trt__GetAudioOutputConfiguration *trt__GetAudioOutputConfiguration, _trt__GetAudioOutputConfigurationResponse &trt__GetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfiguration(_trt__GetAudioDecoderConfiguration *trt__GetAudioDecoderConfiguration, _trt__GetAudioDecoderConfigurationResponse &trt__GetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoEncoderConfigurations(_trt__GetCompatibleVideoEncoderConfigurations *trt__GetCompatibleVideoEncoderConfigurations, _trt__GetCompatibleVideoEncoderConfigurationsResponse &trt__GetCompatibleVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoSourceConfigurations(_trt__GetCompatibleVideoSourceConfigurations *trt__GetCompatibleVideoSourceConfigurations, _trt__GetCompatibleVideoSourceConfigurationsResponse &trt__GetCompatibleVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioEncoderConfigurations(_trt__GetCompatibleAudioEncoderConfigurations *trt__GetCompatibleAudioEncoderConfigurations, _trt__GetCompatibleAudioEncoderConfigurationsResponse &trt__GetCompatibleAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioSourceConfigurations(_trt__GetCompatibleAudioSourceConfigurations *trt__GetCompatibleAudioSourceConfigurations, _trt__GetCompatibleAudioSourceConfigurationsResponse &trt__GetCompatibleAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleVideoAnalyticsConfigurations(_trt__GetCompatibleVideoAnalyticsConfigurations *trt__GetCompatibleVideoAnalyticsConfigurations, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse &trt__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleMetadataConfigurations(_trt__GetCompatibleMetadataConfigurations *trt__GetCompatibleMetadataConfigurations, _trt__GetCompatibleMetadataConfigurationsResponse &trt__GetCompatibleMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioOutputConfigurations(_trt__GetCompatibleAudioOutputConfigurations *trt__GetCompatibleAudioOutputConfigurations, _trt__GetCompatibleAudioOutputConfigurationsResponse &trt__GetCompatibleAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaServiceExt::GetCompatibleAudioDecoderConfigurations(_trt__GetCompatibleAudioDecoderConfigurations *trt__GetCompatibleAudioDecoderConfigurations, _trt__GetCompatibleAudioDecoderConfigurationsResponse &trt__GetCompatibleAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoSourceConfiguration(_trt__SetVideoSourceConfiguration *trt__SetVideoSourceConfiguration, _trt__SetVideoSourceConfigurationResponse &trt__SetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoEncoderConfiguration(_trt__SetVideoEncoderConfiguration *trt__SetVideoEncoderConfiguration, _trt__SetVideoEncoderConfigurationResponse &trt__SetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioSourceConfiguration(_trt__SetAudioSourceConfiguration *trt__SetAudioSourceConfiguration, _trt__SetAudioSourceConfigurationResponse &trt__SetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioEncoderConfiguration(_trt__SetAudioEncoderConfiguration *trt__SetAudioEncoderConfiguration, _trt__SetAudioEncoderConfigurationResponse &trt__SetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoAnalyticsConfiguration(_trt__SetVideoAnalyticsConfiguration *trt__SetVideoAnalyticsConfiguration, _trt__SetVideoAnalyticsConfigurationResponse &trt__SetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetMetadataConfiguration(_trt__SetMetadataConfiguration *trt__SetMetadataConfiguration, _trt__SetMetadataConfigurationResponse &trt__SetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioOutputConfiguration(_trt__SetAudioOutputConfiguration *trt__SetAudioOutputConfiguration, _trt__SetAudioOutputConfigurationResponse &trt__SetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaServiceExt::SetAudioDecoderConfiguration(_trt__SetAudioDecoderConfiguration *trt__SetAudioDecoderConfiguration, _trt__SetAudioDecoderConfigurationResponse &trt__SetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceConfigurationOptions(_trt__GetVideoSourceConfigurationOptions *trt__GetVideoSourceConfigurationOptions, _trt__GetVideoSourceConfigurationOptionsResponse &trt__GetVideoSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoEncoderConfigurationOptions(_trt__GetVideoEncoderConfigurationOptions *trt__GetVideoEncoderConfigurationOptions, _trt__GetVideoEncoderConfigurationOptionsResponse &trt__GetVideoEncoderConfigurationOptionsResponse) {

//    trt__GetVideoEncoderConfigurationOptionsResponse.Options = new tt__VideoEncoderConfigurationOptions;
//    trt__GetVideoEncoderConfigurationOptionsResponse.Options->H264 = new tt__H264Options;
//    trt__GetVideoEncoderConfigurationOptionsResponse.Options->H264-> = new tt__H264Options;

//    ttProfile2->VideoSourceConfiguration->Bounds = new tt__IntRectangle();
//    ttProfile2->VideoSourceConfiguration->Bounds->height = 720;
//    ttProfile2->VideoSourceConfiguration->Bounds->width =1280;
//    ttProfile2->VideoSourceConfiguration->Bounds->y =1;
//    ttProfile2->VideoSourceConfiguration->Bounds->x =1;

//    ttProfile2->VideoEncoderConfiguration = new tt__VideoEncoderConfiguration();
//    ttProfile2->VideoEncoderConfiguration->token = "video_encoder_config2";
//    ttProfile2->VideoEncoderConfiguration->Name = "video_encoder_config2";
//    ttProfile2->VideoEncoderConfiguration->UseCount = 1;

//    ttProfile2->VideoEncoderConfiguration->Encoding = tt__VideoEncoding__H264;

//    ttProfile2->VideoEncoderConfiguration->Resolution = new tt__VideoResolution;
//    ttProfile2->VideoEncoderConfiguration->Resolution->Width = 1280;
//    ttProfile2->VideoEncoderConfiguration->Resolution->Height = 720;
//    ttProfile2->VideoEncoderConfiguration->Quality = 7;
//    ttProfile2->VideoEncoderConfiguration->RateControl = new tt__VideoRateControl;
//    ttProfile2->VideoEncoderConfiguration->RateControl->FrameRateLimit = 30;
//    ttProfile2->VideoEncoderConfiguration->RateControl->EncodingInterval = 0;
//    ttProfile2->VideoEncoderConfiguration->RateControl->BitrateLimit = 2048;

//    ttProfile2->VideoEncoderConfiguration->H264 = new tt__H264Configuration;
//    ttProfile2->VideoEncoderConfiguration->H264->GovLength = 30;
//    ttProfile2->VideoEncoderConfiguration->H264->H264Profile = tt__H264Profile__Baseline;

//    ttProfile2->VideoEncoderConfiguration->Multicast = new tt__MulticastConfiguration;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address = new tt__IPAddress;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->Type = tt__IPType__IPv4;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address = new std::string;
//    ttProfile2->VideoEncoderConfiguration->Multicast->Address->IPv4Address->assign("0.0.0.0");

//    ttProfile2->VideoEncoderConfiguration->Multicast->Port = 0;
//    ttProfile2->VideoEncoderConfiguration->Multicast->TTL = 3;
//    ttProfile2->VideoEncoderConfiguration->Multicast->AutoStart = false;

//    ttProfile2->VideoEncoderConfiguration->SessionTimeout = 1000;




    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioSourceConfigurationOptions(_trt__GetAudioSourceConfigurationOptions *trt__GetAudioSourceConfigurationOptions, _trt__GetAudioSourceConfigurationOptionsResponse &trt__GetAudioSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioEncoderConfigurationOptions(_trt__GetAudioEncoderConfigurationOptions *trt__GetAudioEncoderConfigurationOptions, _trt__GetAudioEncoderConfigurationOptionsResponse &trt__GetAudioEncoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetMetadataConfigurationOptions(_trt__GetMetadataConfigurationOptions *trt__GetMetadataConfigurationOptions, _trt__GetMetadataConfigurationOptionsResponse &trt__GetMetadataConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioOutputConfigurationOptions(_trt__GetAudioOutputConfigurationOptions *trt__GetAudioOutputConfigurationOptions, _trt__GetAudioOutputConfigurationOptionsResponse &trt__GetAudioOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetAudioDecoderConfigurationOptions(_trt__GetAudioDecoderConfigurationOptions *trt__GetAudioDecoderConfigurationOptions, _trt__GetAudioDecoderConfigurationOptionsResponse &trt__GetAudioDecoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int MediaServiceExt::GetGuaranteedNumberOfVideoEncoderInstances(_trt__GetGuaranteedNumberOfVideoEncoderInstances *trt__GetGuaranteedNumberOfVideoEncoderInstances, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse &trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int MediaServiceExt::GetStreamUri(_trt__GetStreamUri *trt__GetStreamUri, _trt__GetStreamUriResponse &trt__GetStreamUriResponse) {
    qDebug() << "Media Service GetStreamUri in NVT profile token = " << trt__GetStreamUri->ProfileToken.data() << "\n";

    tt__MediaUri *ttMediaUri = new tt__MediaUri();
    ttMediaUri->InvalidAfterConnect = true;
    ttMediaUri->InvalidAfterReboot = true;
    ttMediaUri->Timeout = 10000;

    if(trt__GetStreamUri->ProfileToken.compare("profile1") == 0){
        ttMediaUri->Uri = "rtsp://172.16.6.79/test.264";
        trt__GetStreamUriResponse.MediaUri = ttMediaUri;
    } else if(trt__GetStreamUri->ProfileToken.compare("profile2") == 0){
        ttMediaUri->Uri = "rtsp://172.16.6.79:8654/mylink";
        trt__GetStreamUriResponse.MediaUri = ttMediaUri;
    }

    return SOAP_OK;
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int MediaServiceExt::StartMulticastStreaming(_trt__StartMulticastStreaming *trt__StartMulticastStreaming, _trt__StartMulticastStreamingResponse &trt__StartMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int MediaServiceExt::StopMulticastStreaming(_trt__StopMulticastStreaming *trt__StopMulticastStreaming, _trt__StopMulticastStreamingResponse &trt__StopMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int MediaServiceExt::SetSynchronizationPoint(_trt__SetSynchronizationPoint *trt__SetSynchronizationPoint, _trt__SetSynchronizationPointResponse &trt__SetSynchronizationPointResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int MediaServiceExt::GetSnapshotUri(_trt__GetSnapshotUri *trt__GetSnapshotUri, _trt__GetSnapshotUriResponse &trt__GetSnapshotUriResponse) {
    qDebug() << "Media Service GetSnapshotUri in NVT\n";

    trt__GetSnapshotUri->ProfileToken;
    tt__MediaUri *ttMediaUri = new tt__MediaUri();
    ttMediaUri->Uri = "http://www.nanowerk.com/images/nanointro3.jpg";
    ttMediaUri->InvalidAfterConnect = true;
    ttMediaUri->InvalidAfterReboot = true;

    trt__GetSnapshotUriResponse.MediaUri = ttMediaUri;
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int MediaServiceExt::GetVideoSourceModes(_trt__GetVideoSourceModes *trt__GetVideoSourceModes, _trt__GetVideoSourceModesResponse &trt__GetVideoSourceModesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int MediaServiceExt::SetVideoSourceMode(_trt__SetVideoSourceMode *trt__SetVideoSourceMode, _trt__SetVideoSourceModeResponse &trt__SetVideoSourceModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSDs(_trt__GetOSDs *trt__GetOSDs, _trt__GetOSDsResponse &trt__GetOSDsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSD(_trt__GetOSD *trt__GetOSD, _trt__GetOSDResponse &trt__GetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int MediaServiceExt::GetOSDOptions(_trt__GetOSDOptions *trt__GetOSDOptions, _trt__GetOSDOptionsResponse &trt__GetOSDOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int MediaServiceExt::SetOSD(_trt__SetOSD *trt__SetOSD, _trt__SetOSDResponse &trt__SetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int MediaServiceExt::CreateOSD(_trt__CreateOSD *trt__CreateOSD, _trt__CreateOSDResponse &trt__CreateOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int MediaServiceExt::DeleteOSD(_trt__DeleteOSD *trt__DeleteOSD, _trt__DeleteOSDResponse &trt__DeleteOSDResponse) {
    return SOAP_OK;
}
