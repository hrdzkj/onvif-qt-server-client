#include "authority.h"
#include "wsseapi.h"


 int Authority::addSoapUsernameTokenDigest(struct soap *soap, const char *username, const char *password)
{
    int result = 0;

    //SOAP_ASSERT(NULL != username);
    //SOAP_ASSERT(NULL != password);

    result = soap_wsse_add_UsernameTokenDigest(soap, NULL, username, password);
    //SOAP_CHECK_ERROR(result, soap, "add_UsernameTokenDigest");

    return result;
}
