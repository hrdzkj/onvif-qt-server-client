#ifndef AUTHORITY_H
#define AUTHORITY_H

#include "gsoap/stdsoap2.h"

class  Authority
{
public:
    Authority();
    ~Authority();
    static int addSoapUsernameTokenDigest(struct soap *soap, const char *username, const char *password);
};


#endif // AUTHORITY_H
