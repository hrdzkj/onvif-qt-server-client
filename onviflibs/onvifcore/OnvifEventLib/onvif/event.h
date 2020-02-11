#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include "mydll_global.h"

class MYDLLSHARED_EXPORT Event
{
public:
    Event();
    ~Event();
    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // EVENT_H
