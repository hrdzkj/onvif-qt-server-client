/* onvifmediaMedia2BindingService.h
   Generated by gSOAP 2.8.22 from ./include/onvif.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifmediaMedia2BindingService_H
#define onvifmediaMedia2BindingService_H
#include "onvifmediaH.h"
class SOAP_CMAC Media2BindingService : public soap
{ public:
	/// Variables globally declared in ./include/onvif.h (non-static)
	/// Constructor
	Media2BindingService();
	/// Construct from another engine state
	Media2BindingService(const struct soap&);
	/// Constructor with engine input+output mode control
	Media2BindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	Media2BindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~Media2BindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void Media2BindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	Media2BindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ns1__GetServiceCapabilities *ns1__GetServiceCapabilities, _ns1__GetServiceCapabilitiesResponse &ns1__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
	virtual	int CreateProfile(_ns1__CreateProfile *ns1__CreateProfile, _ns1__CreateProfileResponse &ns1__CreateProfileResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
	virtual	int GetProfiles(_ns1__GetProfiles *ns1__GetProfiles, _ns1__GetProfilesResponse &ns1__GetProfilesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AddConfiguration' (returns error code or SOAP_OK)
	virtual	int AddConfiguration(_ns1__AddConfiguration *ns1__AddConfiguration, _ns1__AddConfigurationResponse &ns1__AddConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'RemoveConfiguration' (returns error code or SOAP_OK)
	virtual	int RemoveConfiguration(_ns1__RemoveConfiguration *ns1__RemoveConfiguration, _ns1__RemoveConfigurationResponse &ns1__RemoveConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
	virtual	int DeleteProfile(_ns1__DeleteProfile *ns1__DeleteProfile, _ns1__DeleteProfileResponse &ns1__DeleteProfileResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfigurations(ns1__GetConfiguration *ns1__GetVideoSourceConfigurations, _ns1__GetVideoSourceConfigurationsResponse &ns1__GetVideoSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderConfigurations(ns1__GetConfiguration *ns1__GetVideoEncoderConfigurations, _ns1__GetVideoEncoderConfigurationsResponse &ns1__GetVideoEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfigurations(ns1__GetConfiguration *ns1__GetAudioSourceConfigurations, _ns1__GetAudioSourceConfigurationsResponse &ns1__GetAudioSourceConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioEncoderConfigurations(ns1__GetConfiguration *ns1__GetAudioEncoderConfigurations, _ns1__GetAudioEncoderConfigurationsResponse &ns1__GetAudioEncoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAnalyticsConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAnalyticsConfigurations(ns1__GetConfiguration *ns1__GetAnalyticsConfigurations, _ns1__GetAnalyticsConfigurationsResponse &ns1__GetAnalyticsConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
	virtual	int GetMetadataConfigurations(ns1__GetConfiguration *ns1__GetMetadataConfigurations, _ns1__GetMetadataConfigurationsResponse &ns1__GetMetadataConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfigurations(ns1__GetConfiguration *ns1__GetAudioOutputConfigurations, _ns1__GetAudioOutputConfigurationsResponse &ns1__GetAudioOutputConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
	virtual	int GetAudioDecoderConfigurations(ns1__GetConfiguration *ns1__GetAudioDecoderConfigurations, _ns1__GetAudioDecoderConfigurationsResponse &ns1__GetAudioDecoderConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoSourceConfiguration(_ns1__SetVideoSourceConfiguration *ns1__SetVideoSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetVideoEncoderConfiguration(_ns1__SetVideoEncoderConfiguration *ns1__SetVideoEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetVideoEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioSourceConfiguration(_ns1__SetAudioSourceConfiguration *ns1__SetAudioSourceConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioSourceConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioEncoderConfiguration(_ns1__SetAudioEncoderConfiguration *ns1__SetAudioEncoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioEncoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
	virtual	int SetMetadataConfiguration(_ns1__SetMetadataConfiguration *ns1__SetMetadataConfiguration, ns1__SetConfigurationResponse &ns1__SetMetadataConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioOutputConfiguration(_ns1__SetAudioOutputConfiguration *ns1__SetAudioOutputConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioOutputConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
	virtual	int SetAudioDecoderConfiguration(_ns1__SetAudioDecoderConfiguration *ns1__SetAudioDecoderConfiguration, ns1__SetConfigurationResponse &ns1__SetAudioDecoderConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceConfigurationOptions(ns1__GetConfiguration *ns1__GetVideoSourceConfigurationOptions, _ns1__GetVideoSourceConfigurationOptionsResponse &ns1__GetVideoSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderConfigurationOptions(ns1__GetConfiguration *ns1__GetVideoEncoderConfigurationOptions, _ns1__GetVideoEncoderConfigurationOptionsResponse &ns1__GetVideoEncoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioSourceConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioSourceConfigurationOptions, _ns1__GetAudioSourceConfigurationOptionsResponse &ns1__GetAudioSourceConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioEncoderConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioEncoderConfigurationOptions, _ns1__GetAudioEncoderConfigurationOptionsResponse &ns1__GetAudioEncoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetMetadataConfigurationOptions(ns1__GetConfiguration *ns1__GetMetadataConfigurationOptions, _ns1__GetMetadataConfigurationOptionsResponse &ns1__GetMetadataConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioOutputConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioOutputConfigurationOptions, _ns1__GetAudioOutputConfigurationOptionsResponse &ns1__GetAudioOutputConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetAudioDecoderConfigurationOptions(ns1__GetConfiguration *ns1__GetAudioDecoderConfigurationOptions, _ns1__GetAudioDecoderConfigurationOptionsResponse &ns1__GetAudioDecoderConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoEncoderInstances' (returns error code or SOAP_OK)
	virtual	int GetVideoEncoderInstances(_ns1__GetVideoEncoderInstances *ns1__GetVideoEncoderInstances, _ns1__GetVideoEncoderInstancesResponse &ns1__GetVideoEncoderInstancesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
	virtual	int GetStreamUri(_ns1__GetStreamUri *ns1__GetStreamUri, _ns1__GetStreamUriResponse &ns1__GetStreamUriResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
	virtual	int StartMulticastStreaming(ns1__StartStopMulticastStreaming *ns1__StartMulticastStreaming, ns1__SetConfigurationResponse &ns1__StartMulticastStreamingResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
	virtual	int StopMulticastStreaming(ns1__StartStopMulticastStreaming *ns1__StopMulticastStreaming, ns1__SetConfigurationResponse &ns1__StopMulticastStreamingResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
	virtual	int SetSynchronizationPoint(_ns1__SetSynchronizationPoint *ns1__SetSynchronizationPoint, _ns1__SetSynchronizationPointResponse &ns1__SetSynchronizationPointResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
	virtual	int GetSnapshotUri(_ns1__GetSnapshotUri *ns1__GetSnapshotUri, _ns1__GetSnapshotUriResponse &ns1__GetSnapshotUriResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
	virtual	int GetVideoSourceModes(_ns1__GetVideoSourceModes *ns1__GetVideoSourceModes, _ns1__GetVideoSourceModesResponse &ns1__GetVideoSourceModesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
	virtual	int SetVideoSourceMode(_ns1__SetVideoSourceMode *ns1__SetVideoSourceMode, _ns1__SetVideoSourceModeResponse &ns1__SetVideoSourceModeResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
	virtual	int GetOSDs(_ns1__GetOSDs *ns1__GetOSDs, _ns1__GetOSDsResponse &ns1__GetOSDsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
	virtual	int GetOSDOptions(_ns1__GetOSDOptions *ns1__GetOSDOptions, _ns1__GetOSDOptionsResponse &ns1__GetOSDOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
	virtual	int SetOSD(_ns1__SetOSD *ns1__SetOSD, ns1__SetConfigurationResponse &ns1__SetOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
	virtual	int CreateOSD(_ns1__CreateOSD *ns1__CreateOSD, _ns1__CreateOSDResponse &ns1__CreateOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
	virtual	int DeleteOSD(_ns1__DeleteOSD *ns1__DeleteOSD, ns1__SetConfigurationResponse &ns1__DeleteOSDResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMasks' (returns error code or SOAP_OK)
	virtual	int GetMasks(_ns1__GetMasks *ns1__GetMasks, _ns1__GetMasksResponse &ns1__GetMasksResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMaskOptions' (returns error code or SOAP_OK)
	virtual	int GetMaskOptions(_ns1__GetMaskOptions *ns1__GetMaskOptions, _ns1__GetMaskOptionsResponse &ns1__GetMaskOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetMask' (returns error code or SOAP_OK)
	virtual	int SetMask(_ns1__SetMask *ns1__SetMask, ns1__SetConfigurationResponse &ns1__SetMaskResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateMask' (returns error code or SOAP_OK)
	virtual	int CreateMask(_ns1__CreateMask *ns1__CreateMask, _ns1__CreateMaskResponse &ns1__CreateMaskResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteMask' (returns error code or SOAP_OK)
	virtual	int DeleteMask(_ns1__DeleteMask *ns1__DeleteMask, ns1__SetConfigurationResponse &ns1__DeleteMaskResponse) SOAP_PURE_VIRTUAL;
};
#endif