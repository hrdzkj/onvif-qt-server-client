#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
#include "src/db/dbOperator.h"
#include "src/logic/global.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_exit, SIGNAL(clicked()), this, SLOT(ClickButton()));
    g_mixDeviceList.registerObserver(this);

    //mixDeviceRefreshThread = new MixDeviceRefreshThread(this);
    //mixDeviceRefreshThread->start();



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickButton()
{
  mxdataThread.start();
}

void MainWindow::update(MixDevice &newValue)
{
    printf("update is called");
    ui->button_exit->setText("aaaa");
}
