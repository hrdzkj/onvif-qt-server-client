#ifndef RECORDINGSEARCH_H
#define RECORDINGSEARCH_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT  RecordingSearch
{
public:
    RecordingSearch();
    ~RecordingSearch();

    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // RECORDINGSEARCH_H
