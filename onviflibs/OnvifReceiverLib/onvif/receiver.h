#ifndef RECEIVER_H
#define RECEIVER_H

#include <QString>
#include <string>
#include "exportdef\mydll_global.h"

class MYDLLSHARED_EXPORT Receiver
{
public:
    Receiver();
    ~Receiver();

    static QVector<std::string>  getGetReceivers(QString devServiceURL);
};

#endif // RECEIVER_H
