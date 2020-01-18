#ifndef DESCDEVICE
#define DESCDEVICE

#include "exportdef\mydll_global.h"

struct MYDLLSHARED_EXPORT DescDevice{
    int metadataversion;
    QString types;
    QString xAddrs;
    QString scopes;
};

Q_DECLARE_METATYPE(DescDevice)

#endif // DESCDEVICE

