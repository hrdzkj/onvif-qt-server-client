#ifndef IMAGING_H
#define IMAGING_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT Imaging
{
public:
    Imaging();
    ~Imaging();

    static int  getGetServiceCapabilities(QString serviceURL);
};

#endif // IMAGING_H
