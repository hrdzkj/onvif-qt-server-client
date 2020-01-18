#ifndef REPLAYCONTROL_H
#define REPLAYCONTROL_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT ReplayControl
{
public:
    ReplayControl();
    ~ReplayControl();

    static void getGetServiceCapabilities(QString devServiceURL) ;
};

#endif // REPLAYCONTROL_H
