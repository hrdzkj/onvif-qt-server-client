#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "src/logic/observer.h"
#include "src/entity/entity.h"
#include "src/logic/mixdevicerefreshthread.h"
#include "src/logic/mixdatathread.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow,public Observer
{
    Q_OBJECT
public slots:
    void ClickButton();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
   MixDeviceRefreshThread *mixDeviceRefreshThread;
   MixDataThread mxdataThread;//todo 加载完数据后，在创建启动这个线程
public:
    virtual void update(MixDevice &newValue);
};

#endif // MAINWINDOW_H
