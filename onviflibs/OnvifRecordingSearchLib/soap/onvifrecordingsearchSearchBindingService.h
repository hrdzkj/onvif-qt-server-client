/* onvifrecordingsearchSearchBindingService.h
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef onvifrecordingsearchSearchBindingService_H
#define onvifrecordingsearchSearchBindingService_H
#include "onvifrecordingsearchH.h"
class SOAP_CMAC SearchBindingService
{ public:
	struct soap *soap;
	bool soap_own;
	/// Variables globally declared in rcx.h (non-static)
	/// Constructor
	SearchBindingService();
	/// Constructor to use/share an engine state
	SearchBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	SearchBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	SearchBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~SearchBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void SearchBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	SearchBindingService *copy() SOAP_PURE_VIRTUAL;
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
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
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
	virtual	int dispatch(struct soap *soap);

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_recordingsearch__GetServiceCapabilities *recordingsearch__GetServiceCapabilities, _recordingsearch__GetServiceCapabilitiesResponse &recordingsearch__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRecordingSummary' (returns error code or SOAP_OK)
	virtual	int GetRecordingSummary(_recordingsearch__GetRecordingSummary *recordingsearch__GetRecordingSummary, _recordingsearch__GetRecordingSummaryResponse &recordingsearch__GetRecordingSummaryResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRecordingInformation' (returns error code or SOAP_OK)
	virtual	int GetRecordingInformation(_recordingsearch__GetRecordingInformation *recordingsearch__GetRecordingInformation, _recordingsearch__GetRecordingInformationResponse &recordingsearch__GetRecordingInformationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMediaAttributes' (returns error code or SOAP_OK)
	virtual	int GetMediaAttributes(_recordingsearch__GetMediaAttributes *recordingsearch__GetMediaAttributes, _recordingsearch__GetMediaAttributesResponse &recordingsearch__GetMediaAttributesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'FindRecordings' (returns error code or SOAP_OK)
	virtual	int FindRecordings(_recordingsearch__FindRecordings *recordingsearch__FindRecordings, _recordingsearch__FindRecordingsResponse &recordingsearch__FindRecordingsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetRecordingSearchResults' (returns error code or SOAP_OK)
	virtual	int GetRecordingSearchResults(_recordingsearch__GetRecordingSearchResults *recordingsearch__GetRecordingSearchResults, _recordingsearch__GetRecordingSearchResultsResponse &recordingsearch__GetRecordingSearchResultsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'FindEvents' (returns error code or SOAP_OK)
	virtual	int FindEvents(_recordingsearch__FindEvents *recordingsearch__FindEvents, _recordingsearch__FindEventsResponse &recordingsearch__FindEventsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetEventSearchResults' (returns error code or SOAP_OK)
	virtual	int GetEventSearchResults(_recordingsearch__GetEventSearchResults *recordingsearch__GetEventSearchResults, _recordingsearch__GetEventSearchResultsResponse &recordingsearch__GetEventSearchResultsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'FindPTZPosition' (returns error code or SOAP_OK)
	virtual	int FindPTZPosition(_recordingsearch__FindPTZPosition *recordingsearch__FindPTZPosition, _recordingsearch__FindPTZPositionResponse &recordingsearch__FindPTZPositionResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPTZPositionSearchResults' (returns error code or SOAP_OK)
	virtual	int GetPTZPositionSearchResults(_recordingsearch__GetPTZPositionSearchResults *recordingsearch__GetPTZPositionSearchResults, _recordingsearch__GetPTZPositionSearchResultsResponse &recordingsearch__GetPTZPositionSearchResultsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetSearchState' (returns error code or SOAP_OK)
	virtual	int GetSearchState(_recordingsearch__GetSearchState *recordingsearch__GetSearchState, _recordingsearch__GetSearchStateResponse &recordingsearch__GetSearchStateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'EndSearch' (returns error code or SOAP_OK)
	virtual	int EndSearch(_recordingsearch__EndSearch *recordingsearch__EndSearch, _recordingsearch__EndSearchResponse &recordingsearch__EndSearchResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'FindMetadata' (returns error code or SOAP_OK)
	virtual	int FindMetadata(_recordingsearch__FindMetadata *recordingsearch__FindMetadata, _recordingsearch__FindMetadataResponse &recordingsearch__FindMetadataResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMetadataSearchResults' (returns error code or SOAP_OK)
	virtual	int GetMetadataSearchResults(_recordingsearch__GetMetadataSearchResults *recordingsearch__GetMetadataSearchResults, _recordingsearch__GetMetadataSearchResultsResponse &recordingsearch__GetMetadataSearchResultsResponse) SOAP_PURE_VIRTUAL;
};
#endif
