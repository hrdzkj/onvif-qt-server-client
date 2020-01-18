/* onvifdisplayDisplayBindingProxy.cpp
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "onvifdisplayDisplayBindingProxy.h"

DisplayBindingProxy::DisplayBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DisplayBindingProxy::DisplayBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	DisplayBindingProxy_init(_soap->imode, _soap->omode);
}

DisplayBindingProxy::DisplayBindingProxy(const char *url)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(iomode, iomode);
}

DisplayBindingProxy::DisplayBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(imode, omode);
}

DisplayBindingProxy::~DisplayBindingProxy()
{	if (this->soap_own)
		soap_free(this->soap);
}

void DisplayBindingProxy::DisplayBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"displayws", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void DisplayBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void DisplayBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void DisplayBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void DisplayBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *DisplayBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *DisplayBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *DisplayBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *DisplayBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int DisplayBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int DisplayBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void DisplayBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void DisplayBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *DisplayBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int DisplayBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _displayws__GetServiceCapabilities *displayws__GetServiceCapabilities, _displayws__GetServiceCapabilitiesResponse &displayws__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __displayws__GetServiceCapabilities soap_tmp___displayws__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__GetServiceCapabilities.displayws__GetServiceCapabilities = displayws__GetServiceCapabilities;
	soap_serializeheader(soap);
	soap_serialize___displayws__GetServiceCapabilities(soap, &soap_tmp___displayws__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__GetServiceCapabilities(soap, &soap_tmp___displayws__GetServiceCapabilities, "-displayws:GetServiceCapabilities", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__GetServiceCapabilities(soap, &soap_tmp___displayws__GetServiceCapabilities, "-displayws:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	displayws__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__GetServiceCapabilitiesResponse.soap_get(soap, "displayws:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetLayout(const char *endpoint, const char *soap_action, _displayws__GetLayout *displayws__GetLayout, _displayws__GetLayoutResponse &displayws__GetLayoutResponse)
{	struct soap *soap = this->soap;
	struct __displayws__GetLayout soap_tmp___displayws__GetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetLayout";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__GetLayout.displayws__GetLayout = displayws__GetLayout;
	soap_serializeheader(soap);
	soap_serialize___displayws__GetLayout(soap, &soap_tmp___displayws__GetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__GetLayout(soap, &soap_tmp___displayws__GetLayout, "-displayws:GetLayout", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__GetLayout(soap, &soap_tmp___displayws__GetLayout, "-displayws:GetLayout", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__GetLayoutResponse)
		return soap_closesock(soap);
	displayws__GetLayoutResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__GetLayoutResponse.soap_get(soap, "displayws:GetLayoutResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetLayout(const char *endpoint, const char *soap_action, _displayws__SetLayout *displayws__SetLayout, _displayws__SetLayoutResponse &displayws__SetLayoutResponse)
{	struct soap *soap = this->soap;
	struct __displayws__SetLayout soap_tmp___displayws__SetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetLayout";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__SetLayout.displayws__SetLayout = displayws__SetLayout;
	soap_serializeheader(soap);
	soap_serialize___displayws__SetLayout(soap, &soap_tmp___displayws__SetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__SetLayout(soap, &soap_tmp___displayws__SetLayout, "-displayws:SetLayout", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__SetLayout(soap, &soap_tmp___displayws__SetLayout, "-displayws:SetLayout", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__SetLayoutResponse)
		return soap_closesock(soap);
	displayws__SetLayoutResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__SetLayoutResponse.soap_get(soap, "displayws:SetLayoutResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetDisplayOptions(const char *endpoint, const char *soap_action, _displayws__GetDisplayOptions *displayws__GetDisplayOptions, _displayws__GetDisplayOptionsResponse &displayws__GetDisplayOptionsResponse)
{	struct soap *soap = this->soap;
	struct __displayws__GetDisplayOptions soap_tmp___displayws__GetDisplayOptions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetDisplayOptions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__GetDisplayOptions.displayws__GetDisplayOptions = displayws__GetDisplayOptions;
	soap_serializeheader(soap);
	soap_serialize___displayws__GetDisplayOptions(soap, &soap_tmp___displayws__GetDisplayOptions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__GetDisplayOptions(soap, &soap_tmp___displayws__GetDisplayOptions, "-displayws:GetDisplayOptions", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__GetDisplayOptions(soap, &soap_tmp___displayws__GetDisplayOptions, "-displayws:GetDisplayOptions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__GetDisplayOptionsResponse)
		return soap_closesock(soap);
	displayws__GetDisplayOptionsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__GetDisplayOptionsResponse.soap_get(soap, "displayws:GetDisplayOptionsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfigurations(const char *endpoint, const char *soap_action, _displayws__GetPaneConfigurations *displayws__GetPaneConfigurations, _displayws__GetPaneConfigurationsResponse &displayws__GetPaneConfigurationsResponse)
{	struct soap *soap = this->soap;
	struct __displayws__GetPaneConfigurations soap_tmp___displayws__GetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfigurations";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__GetPaneConfigurations.displayws__GetPaneConfigurations = displayws__GetPaneConfigurations;
	soap_serializeheader(soap);
	soap_serialize___displayws__GetPaneConfigurations(soap, &soap_tmp___displayws__GetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__GetPaneConfigurations(soap, &soap_tmp___displayws__GetPaneConfigurations, "-displayws:GetPaneConfigurations", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__GetPaneConfigurations(soap, &soap_tmp___displayws__GetPaneConfigurations, "-displayws:GetPaneConfigurations", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__GetPaneConfigurationsResponse)
		return soap_closesock(soap);
	displayws__GetPaneConfigurationsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__GetPaneConfigurationsResponse.soap_get(soap, "displayws:GetPaneConfigurationsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfiguration(const char *endpoint, const char *soap_action, _displayws__GetPaneConfiguration *displayws__GetPaneConfiguration, _displayws__GetPaneConfigurationResponse &displayws__GetPaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __displayws__GetPaneConfiguration soap_tmp___displayws__GetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfiguration";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__GetPaneConfiguration.displayws__GetPaneConfiguration = displayws__GetPaneConfiguration;
	soap_serializeheader(soap);
	soap_serialize___displayws__GetPaneConfiguration(soap, &soap_tmp___displayws__GetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__GetPaneConfiguration(soap, &soap_tmp___displayws__GetPaneConfiguration, "-displayws:GetPaneConfiguration", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__GetPaneConfiguration(soap, &soap_tmp___displayws__GetPaneConfiguration, "-displayws:GetPaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__GetPaneConfigurationResponse)
		return soap_closesock(soap);
	displayws__GetPaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__GetPaneConfigurationResponse.soap_get(soap, "displayws:GetPaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfigurations(const char *endpoint, const char *soap_action, _displayws__SetPaneConfigurations *displayws__SetPaneConfigurations, _displayws__SetPaneConfigurationsResponse &displayws__SetPaneConfigurationsResponse)
{	struct soap *soap = this->soap;
	struct __displayws__SetPaneConfigurations soap_tmp___displayws__SetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfigurations";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__SetPaneConfigurations.displayws__SetPaneConfigurations = displayws__SetPaneConfigurations;
	soap_serializeheader(soap);
	soap_serialize___displayws__SetPaneConfigurations(soap, &soap_tmp___displayws__SetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__SetPaneConfigurations(soap, &soap_tmp___displayws__SetPaneConfigurations, "-displayws:SetPaneConfigurations", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__SetPaneConfigurations(soap, &soap_tmp___displayws__SetPaneConfigurations, "-displayws:SetPaneConfigurations", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__SetPaneConfigurationsResponse)
		return soap_closesock(soap);
	displayws__SetPaneConfigurationsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__SetPaneConfigurationsResponse.soap_get(soap, "displayws:SetPaneConfigurationsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfiguration(const char *endpoint, const char *soap_action, _displayws__SetPaneConfiguration *displayws__SetPaneConfiguration, _displayws__SetPaneConfigurationResponse &displayws__SetPaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __displayws__SetPaneConfiguration soap_tmp___displayws__SetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfiguration";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__SetPaneConfiguration.displayws__SetPaneConfiguration = displayws__SetPaneConfiguration;
	soap_serializeheader(soap);
	soap_serialize___displayws__SetPaneConfiguration(soap, &soap_tmp___displayws__SetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__SetPaneConfiguration(soap, &soap_tmp___displayws__SetPaneConfiguration, "-displayws:SetPaneConfiguration", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__SetPaneConfiguration(soap, &soap_tmp___displayws__SetPaneConfiguration, "-displayws:SetPaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__SetPaneConfigurationResponse)
		return soap_closesock(soap);
	displayws__SetPaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__SetPaneConfigurationResponse.soap_get(soap, "displayws:SetPaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::CreatePaneConfiguration(const char *endpoint, const char *soap_action, _displayws__CreatePaneConfiguration *displayws__CreatePaneConfiguration, _displayws__CreatePaneConfigurationResponse &displayws__CreatePaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __displayws__CreatePaneConfiguration soap_tmp___displayws__CreatePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/CreatePaneConfiguration";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__CreatePaneConfiguration.displayws__CreatePaneConfiguration = displayws__CreatePaneConfiguration;
	soap_serializeheader(soap);
	soap_serialize___displayws__CreatePaneConfiguration(soap, &soap_tmp___displayws__CreatePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__CreatePaneConfiguration(soap, &soap_tmp___displayws__CreatePaneConfiguration, "-displayws:CreatePaneConfiguration", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__CreatePaneConfiguration(soap, &soap_tmp___displayws__CreatePaneConfiguration, "-displayws:CreatePaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__CreatePaneConfigurationResponse)
		return soap_closesock(soap);
	displayws__CreatePaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__CreatePaneConfigurationResponse.soap_get(soap, "displayws:CreatePaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::DeletePaneConfiguration(const char *endpoint, const char *soap_action, _displayws__DeletePaneConfiguration *displayws__DeletePaneConfiguration, _displayws__DeletePaneConfigurationResponse &displayws__DeletePaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __displayws__DeletePaneConfiguration soap_tmp___displayws__DeletePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/DeletePaneConfiguration";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___displayws__DeletePaneConfiguration.displayws__DeletePaneConfiguration = displayws__DeletePaneConfiguration;
	soap_serializeheader(soap);
	soap_serialize___displayws__DeletePaneConfiguration(soap, &soap_tmp___displayws__DeletePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___displayws__DeletePaneConfiguration(soap, &soap_tmp___displayws__DeletePaneConfiguration, "-displayws:DeletePaneConfiguration", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___displayws__DeletePaneConfiguration(soap, &soap_tmp___displayws__DeletePaneConfiguration, "-displayws:DeletePaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&displayws__DeletePaneConfigurationResponse)
		return soap_closesock(soap);
	displayws__DeletePaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	displayws__DeletePaneConfigurationResponse.soap_get(soap, "displayws:DeletePaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
