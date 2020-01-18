#ifndef DISPLAY_H
#define DISPLAY_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT  Display
{
public:
    Display();
    ~Display();

    static void getGetServiceCapabilities(QString devServiceURL) ;
};

#endif // DISPLAY_H
