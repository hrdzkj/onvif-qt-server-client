#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

#DESTDIR = ../../OnvifDist
DESTDIR = ../../libexe

TARGET = OnvifMedia2Lib
TEMPLATE = lib
TEMPLATE = app
#CONFIG += console

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
#    onvif/mediaserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifmediaC.cpp \
#    soap/onvifmediaMedia2BindingService.cpp \
    soap/onvifmediaMedia2BindingProxy.cpp \
    soap/duration.cpp \
    onvif/main.cpp \
    soap/dom.cpp \
    soap/onvifmediaC.cpp \
    soap/plugin/wsseapi.cpp \
    soap/plugin/mecevp.c \
    soap/plugin/smdevp.c \
    soap/plugin/wsaapi.cpp \
    soap/plugin/threads.c \
    onvif/authority.cpp \
    onvif/media2.cpp

HEADERS  += \
#    onvif/mediaservice.h \
#    onvif/mediaserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifmediaH.h \
    soap/onvifmediaStub.h \
#    soap/onvifmediaMedia2BindingService.h \
    soap/onvifmediaMedia2BindingProxy.h \
    soap/duration.h \
    exportdef/mydll_global.h \
    soap/plugin/mecevp.h \
    soap/plugin/smdevp.h \
    soap/plugin/threads.h \
    soap/plugin/wsseapi.h \
    soap/plugin/wsaapi.h \
    onvif/authority.h \
    onvif/media2.h

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
