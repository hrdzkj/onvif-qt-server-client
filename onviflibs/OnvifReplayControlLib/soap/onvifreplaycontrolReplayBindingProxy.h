/* onvifreplaycontrolReplayBindingProxy.h
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifreplaycontrolReplayBindingProxy_H
#define onvifreplaycontrolReplayBindingProxy_H
#include "onvifreplaycontrolH.h"

class SOAP_CMAC ReplayBindingProxy
{ public:
	struct soap *soap;
	bool soap_own;
	/// Endpoint URL of service 'ReplayBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in rcx.h (non-static)
	/// Constructor
	ReplayBindingProxy();
	/// Constructor to use/share an engine state
	ReplayBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	ReplayBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	ReplayBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	ReplayBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	ReplayBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~ReplayBindingProxy();
	/// Initializer used by constructors
	virtual	void ReplayBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
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

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_replaycontrol__GetServiceCapabilities *replaycontrol__GetServiceCapabilities, _replaycontrol__GetServiceCapabilitiesResponse &replaycontrol__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, replaycontrol__GetServiceCapabilities, replaycontrol__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _replaycontrol__GetServiceCapabilities *replaycontrol__GetServiceCapabilities, _replaycontrol__GetServiceCapabilitiesResponse &replaycontrol__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetReplayUri' (returns error code or SOAP_OK)
	virtual	int GetReplayUri(_replaycontrol__GetReplayUri *replaycontrol__GetReplayUri, _replaycontrol__GetReplayUriResponse &replaycontrol__GetReplayUriResponse) { return this->GetReplayUri(NULL, NULL, replaycontrol__GetReplayUri, replaycontrol__GetReplayUriResponse); }
	virtual	int GetReplayUri(const char *endpoint, const char *soap_action, _replaycontrol__GetReplayUri *replaycontrol__GetReplayUri, _replaycontrol__GetReplayUriResponse &replaycontrol__GetReplayUriResponse);

	/// Web service operation 'GetReplayConfiguration' (returns error code or SOAP_OK)
	virtual	int GetReplayConfiguration(_replaycontrol__GetReplayConfiguration *replaycontrol__GetReplayConfiguration, _replaycontrol__GetReplayConfigurationResponse &replaycontrol__GetReplayConfigurationResponse) { return this->GetReplayConfiguration(NULL, NULL, replaycontrol__GetReplayConfiguration, replaycontrol__GetReplayConfigurationResponse); }
	virtual	int GetReplayConfiguration(const char *endpoint, const char *soap_action, _replaycontrol__GetReplayConfiguration *replaycontrol__GetReplayConfiguration, _replaycontrol__GetReplayConfigurationResponse &replaycontrol__GetReplayConfigurationResponse);

	/// Web service operation 'SetReplayConfiguration' (returns error code or SOAP_OK)
	virtual	int SetReplayConfiguration(_replaycontrol__SetReplayConfiguration *replaycontrol__SetReplayConfiguration, _replaycontrol__SetReplayConfigurationResponse &replaycontrol__SetReplayConfigurationResponse) { return this->SetReplayConfiguration(NULL, NULL, replaycontrol__SetReplayConfiguration, replaycontrol__SetReplayConfigurationResponse); }
	virtual	int SetReplayConfiguration(const char *endpoint, const char *soap_action, _replaycontrol__SetReplayConfiguration *replaycontrol__SetReplayConfiguration, _replaycontrol__SetReplayConfigurationResponse &replaycontrol__SetReplayConfigurationResponse);
};
#endif
