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
               ../../common \
               ../../common/gsoap \
               ../../common/gsoap/plugin \



SOURCES += \
    ../../common/authority.cpp \
    ../../common/gsoap/stdsoap2.cpp \
    ../../common/gsoap/duration.cpp \
    ../../common/gsoap/plugin/wsseapi.cpp \
    ../../common/gsoap/plugin/mecevp.c \
    ../../common/gsoap/plugin/smdevp.c \
    ../../common/gsoap/plugin/wsaapi.cpp \
    ../../common/gsoap/plugin/threads.c \
    ../../common/gsoap/dom.cpp \
    soap/onvifdeviceC.cpp \
    soap/onvifdeviceDeviceBindingProxy.cpp \
    soap/onvifdeviceDeviceBindingService.cpp \
    onvif/device.cpp \
    onvif/deviceserviceimplement.cpp \
#    onvif/main.cpp \
    soap/onvifdeviceC.cpp \




HEADERS  += \
    ../../common/gsoap/plugin/mecevp.h \
    ../../common/gsoap/plugin/smdevp.h \
    ../../common/gsoap/plugin/threads.h \
    ../../common/gsoap/plugin/wsseapi.h \
    ../../common/gsoap/plugin/wsaapi.h \
    ../../common/gsoap/stdsoap2.h \
    ../../common/gsoap/stlvector.h \
    ../../common/gsoap/duration.h\
    ../../common/exportdef/mydll_global.h \
    soap/onvifdeviceH.h \
    soap/onvifdeviceStub.h \
    soap/onvifdeviceDeviceBindingProxy.h \
    soap/onvifdeviceDeviceBindingService.h \
    onvif/deviceserviceextabst.h \
    onvif/device.h \
    onvif/deviceservice.h \



win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
