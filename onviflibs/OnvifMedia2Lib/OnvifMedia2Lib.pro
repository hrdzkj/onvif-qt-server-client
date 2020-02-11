#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

#DESTDIR = ../../OnvifDist
DESTDIR = ../../libexe

TARGET = OnvifMedia2Lib

#TEMPLATE = lib
TEMPLATE = app

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
#    onvif/mediaserviceimplement.cpp \
    soap/onvifmediaC.cpp \
#    soap/onvifmediaMedia2BindingService.cpp \
    soap/onvifmediaMedia2BindingProxy.cpp \
    onvif/main.cpp \
    soap/onvifmediaC.cpp \
    onvif/media2.cpp

HEADERS  += \
    ../common/gsoap/plugin/mecevp.h \
    ../common/gsoap/plugin/smdevp.h \
    ../common/gsoap/plugin/threads.h \
    ../common/gsoap/plugin/wsseapi.h \
    ../common/gsoap/plugin/wsaapi.h \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
#    onvif/mediaservice.h \
#    onvif/mediaserviceextabst.h \
    soap/onvifmediaH.h \
    soap/onvifmediaStub.h \
#    soap/onvifmediaMedia2BindingService.h \
    soap/onvifmediaMedia2BindingProxy.h \
    onvif/media2.h

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
