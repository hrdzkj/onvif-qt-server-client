#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist

TARGET = OnvifDeviceLib

#TEMPLATE = lib
TEMPLATE = app
CONFIG += console

DEFINES += MYDLL_LIBRARY


# QMAKE_CXXFLAGS += -DWITH-DOM -DWITH-OPENSSL
# QMAKE_CFLAGS += -DWITH-DOM -DWITH-OPENSSL

# include openssl
INCLUDEPATH += C:\openssl-1.0.2u\include \
               soap \
               soap\plugin



SOURCES += \
    soap/onvifdeviceC.cpp \
    soap/onvifdeviceDeviceBindingProxy.cpp \
    soap/onvifdeviceDeviceBindingService.cpp \
    soap/stdsoap2.cpp \
    soap/duration.cpp \
    onvif/device.cpp \
    onvif/deviceserviceimplement.cpp \
    onvif/main.cpp \
    soap/dom.cpp \
    soap/plugin/wsseapi.cpp \
    soap/plugin/wsseapi.cpp \
    soap/plugin/wsaapi.cpp \
    soap/plugin/threads.cpp \
    soap/plugin/smdevp.cpp \
    soap/plugin/mecevp.cpp

HEADERS  += \
    soap/onvifdeviceH.h \
    soap/onvifdeviceStub.h \
    soap/onvifdeviceDeviceBindingProxy.h \
    soap/onvifdeviceDeviceBindingService.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/duration.h\
    onvif/deviceserviceextabst.h \
    onvif/device.h \
    onvif/deviceservice.h \
    exportdef/mydll_global.h \
    soap/plugin/mecevp.h \
    soap/plugin/smdevp.h \
    soap/plugin/threads.h \
    soap/plugin/wsseapi.h \
    soap/plugin/wsaapi.h

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
