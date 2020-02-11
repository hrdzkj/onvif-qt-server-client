#-------------------------------------------------
#
# Project created by QtCreator 2015-07-02T15:29:23
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist


TARGET = OnvifDiscoveryLib
TEMPLATE = lib

DEFINES += MYDLL_LIBRARY

INCLUDEPATH += ../../common \
               ../../common/gsoap \
               ../../common/gsoap/plugin \
               soap \

SOURCES +=\
    ../../common/gsoap/stdsoap2.cpp \
    ../../common/gsoap/plugin/threads.c \
    ../../common/gsoap/plugin/wsaapi.cpp \
    soap/wsddapi.cpp \
    soap/onvifdiscoC.cpp \
    soap/onvifdiscoClient.cpp \
    getopt/getopt.c \
    onvif/discoverythread.cpp \
    onvif/discoveryobj.cpp


HEADERS  += \
    ../../common/gsoap/stdsoap2.h \
    ../../common/gsoap/stlvector.h \
    ../../common/exportdef/mydll_global.h \
    ../../common/gsoap/plugin/wsaapi.h \
    ../../common/gsoap/plugin/threads.h \
    soap/wsddapi.h \
    soap/onvifdiscoH.h \
    soap/onvifdiscoStub.h \
    getopt/getopt.h \
    onvif/descdevice.h \
    onvif/discoverythread.h \
    onvif/discoveryobj.h \

win32 {
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

CONFIG += console
