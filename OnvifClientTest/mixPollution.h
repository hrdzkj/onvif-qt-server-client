#ifndef MIXPOLLUTION_H
#define MIXPOLLUTION_H
#include <QMainWindow>
#include "descdevice.h"
#include "discoveryobj.h"
#include<QDebug>
#include "media.h"
#include <iostream>
#include <string>

using std::string;
using::std::vector;

namespace Ui {
class MixPollution;
}

class MixPollution : public QMainWindow
{
    Q_OBJECT
  private:
     void mixData();
     void midaMixData();
     void showOSDOption();
     void getGetServiceCapabilities();
public:
    explicit MixPollution(QWidget *parent = 0);
    ~MixPollution();

private:
    Ui::MixPollution *ui;
};
#endif // MIXPOLLUTION_H
