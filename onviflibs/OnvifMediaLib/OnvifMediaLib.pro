#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist
#DESTDIR = ../../libexe

TARGET = OnvifMediaLib
TEMPLATE = lib
#TEMPLATE = app
CONFIG += console

DEFINES += MYDLL_LIBRARY
DEFINES += WITH_DOM
DEFINES += WITH_OPENSSL

LIBS += -L"C:\openssl-1.0.2u\lib" -llibeay32
LIBS += -L"C:\openssl-1.0.2u\lib" -lssleay32


# include openssl
INCLUDEPATH += C:/openssl-1.0.2u/include \
               ../common \
               ../common/gsoap \
               ../common/gsoap/plugin \


SOURCES += \
    ../common/authority.cpp \
    ../common/gsoap/stdsoap2.cpp \
    ../common/gsoap/plugin/wsseapi.cpp \
    ../common/gsoap/plugin/mecevp.c \
    ../common/gsoap/plugin/smdevp.c \
    ../common/gsoap/plugin/wsaapi.cpp \
    ../common/gsoap/plugin/threads.c \
    ../common/gsoap/duration.cpp \
    ../common/gsoap/dom.cpp \
    onvif/mediaserviceimplement.cpp \
    onvif/media.cpp \
    soap/onvifmediaC.cpp \
    soap/onvifmediaMediaBindingService.cpp \
    soap/onvifmediaMediaBindingProxy.cpp \

#    onvif/main.cpp \

    soap/onvifmediaC.cpp \

    onvif/authority.cpp

HEADERS  += \
    ../common/gsoap/plugin/mecevp.h \
    ../common/gsoap/plugin/smdevp.h \
    ../common/gsoap/plugin/threads.h \
    ../common/gsoap/plugin/wsseapi.h \
    ../common/gsoap/plugin/wsaapi.h \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/media.h \
    onvif/mediaservice.h \
    onvif/mediaserviceextabst.h \
    soap/onvifmediaH.h \
    soap/onvifmediaStub.h \
    soap/onvifmediaMediaBindingService.h \
    soap/onvifmediaMediaBindingProxy.h \
    exportdef/mydll_global.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
