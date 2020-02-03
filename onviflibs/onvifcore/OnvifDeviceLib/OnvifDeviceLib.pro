#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist
#DESTDIR = ../../../libexe

TARGET = OnvifDeviceLib

TEMPLATE = lib
#TEMPLATE = app
CONFIG += console

DEFINES += MYDLL_LIBRARY
DEFINES += WITH_DOM
DEFINES += WITH_OPENSSL

LIBS += -L"C:\openssl-1.0.2u\lib" -llibeay32
LIBS += -L"C:\openssl-1.0.2u\lib" -lssleay32

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
#    onvif/main.cpp \
    soap/dom.cpp \
    soap/onvifdeviceC.cpp \
    soap/plugin/wsseapi.cpp \
    soap/plugin/mecevp.c \
    soap/plugin/smdevp.c \
    soap/plugin/wsaapi.cpp \
    soap/plugin/threads.c \
    onvif/authority.cpp


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
    soap/plugin/wsaapi.h \
    onvif/authority.h

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
