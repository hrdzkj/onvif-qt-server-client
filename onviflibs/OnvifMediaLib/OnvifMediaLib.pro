#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

#DESTDIR = ../../OnvifDist
DESTDIR = ../../../libexe

TARGET = OnvifMediaLib
#TEMPLATE = lib
TEMPLATE = app
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
    onvif/mediaserviceimplement.cpp \
    onvif/media.cpp \
    soap/stdsoap2.cpp \
    soap/onvifmediaC.cpp \
    soap/onvifmediaMediaBindingService.cpp \
    soap/onvifmediaMediaBindingProxy.cpp \
    soap/duration.cpp \
    onvif/main.cpp \
    soap/dom.cpp \
    soap/onvifmediaC.cpp \
    soap/plugin/wsseapi.cpp \
    soap/plugin/mecevp.c \
    soap/plugin/smdevp.c \
    soap/plugin/wsaapi.cpp \
    soap/plugin/threads.c

HEADERS  += \
    onvif/media.h \
    onvif/mediaservice.h \
    onvif/mediaserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifmediaH.h \
    soap/onvifmediaStub.h \
    soap/onvifmediaMediaBindingService.h \
    soap/onvifmediaMediaBindingProxy.h \
    soap/duration.h \
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
