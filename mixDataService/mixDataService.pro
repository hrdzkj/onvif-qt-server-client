#-------------------------------------------------
#
# Project created by QtCreator 2020-01-30T20:25:19
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mixDataService
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



DESTDIR = ../OnvifDist


LIBS += -L"C:\openssl-1.0.2u\lib" -llibeay32
LIBS += -L"C:\openssl-1.0.2u\lib" -lssleay32

CONFIG += c++11

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}


#引入onvif库begin:只要include"库名称/onvif"下的文件
DEPENDPATH += . $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifDeviceLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifEventLib/onvif\
            $$PWD/../onviflibs/OnvifAnalyticsLib/onvif\
            $$PWD/../onviflibs/OnvifReceiverLib/onvif\
            $$PWD/../onviflibs/OnvifVideoAnalyticsDeviceLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingControlLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingSearchLib/onvif\
            $$PWD/../onviflibs/OnvifReplayControlLib/onvif\
            $$PWD/../onviflibs/OnvifDisplayLib/onvif\
            $$PWD/../onviflibs/OnvifPTZLib/onvif\
            $$PWD/../onviflibs/OnvifMediaLib/onvif


INCLUDEPATH += $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifDeviceLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifEventLib/onvif\
            $$PWD/../onviflibs/OnvifAnalyticsLib/onvif\
            $$PWD/../onviflibs/OnvifReceiverLib/onvif\
            $$PWD/../onviflibs/OnvifVideoAnalyticsDeviceLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingControlLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingSearchLib/onvif\
            $$PWD/../onviflibs/OnvifReplayControlLib/onvif\
            $$PWD/../onviflibs/OnvifDisplayLib/onvif\
            $$PWD/../onviflibs/OnvifPTZLib/onvif\
            $$PWD/../onviflibs/OnvifMediaLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib\ #liuyi add


LIBS +=  -L$$PWD/../../OnvifDist -lOnvifDiscoveryLib\
            -L$$PWD/../OnvifDist -lOnvifDeviceLib\
            -L$$PWD/../OnvifDist -lOnvifEventLib\
            -L$$PWD/../OnvifDist -lOnvifAnalyticsLib\
            -L$$PWD/../OnvifDist -lOnvifReceiverLib\
            -L$$PWD/../OnvifDist -lOnvifVideoAnalyticsDeviceLib\
            -L$$PWD/../OnvifDist -lOnvifRecordingControlLib\
            -L$$PWD/../OnvifDist -lOnvifRecordingSearchLib\
            -L$$PWD/../OnvifDist -lOnvifReplayControlLib\
            -L$$PWD/../OnvifDist -lOnvifDisplayLib\
            -L$$PWD/../OnvifDist -lOnvifPTZLib\
            -L$$PWD/../OnvifDist -lOnvifMediaLib
#引入onvif库end

SOURCES += \
    src/ui/main/main.cpp \
    src/ui/main/mainwindow.cpp \
    src/db/dbOperator.cpp \
    src/db/dbOperator.cpp \
    src/ui/main/main.cpp \
    src/ui/main/mainwindow.cpp \
    src/entity/mixdevicelist.cpp \
    src/logic/common.cpp \
    src/logic/mixdevicerefreshthread.cpp \
    src/logic/global.cpp \
    src/util/httpClient.cpp \
    src/logic/mixDataController.cpp \
    src/logic/mixController.cpp \


HEADERS += \
    src/ui/main/mainwindow.h \
    src/db/dbOperator.h \
    src/db/dbOperator.h \
    src/ui/main/mainwindow.h \
    src/entity/entity.h \
    src/entity/mixDeviceList.h \
    src/logic/observer.h \
    src/logic/global.h \
    src/logic/common.h \
    src/logic/mixdevicerefreshthread.h \
    src/util/httpClient.h \
    src/logic/mixdataThread.h \
    src/logic/mixIPCController.h \
    src/logic/mixDataController.h \
    src/logic/mixController.h \



FORMS += \
    src/ui/main/mainwindow.ui



