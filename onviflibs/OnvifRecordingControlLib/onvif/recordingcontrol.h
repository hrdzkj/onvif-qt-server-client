#ifndef RECORDINGCONTROL_H
#define RECORDINGCONTROL_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT  RecordingControl
{
public:
    RecordingControl();
    ~RecordingControl();

    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // RECORDINGCONTROL_H
