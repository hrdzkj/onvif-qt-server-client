#-------------------------------------------------
#
# Project created by QtCreator 2015-07-02T15:29:23
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist


TARGET = OnvifDiscoveryLib
TEMPLATE = lib

SOURCES +=\
    soap/stdsoap2.cpp \
    soap/onvifdiscoC.cpp \
    soap/onvifdiscoClient.cpp \
    soap/threads.cpp \
    soap/wsaapi.cpp \
    soap/wsddapi.cpp \
    getopt/getopt.c \
    onvif/discoverythread.cpp \
    onvif/discoveryobj.cpp


HEADERS  += \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifdiscoH.h \
    soap/onvifdiscoStub.h \
    soap/threads.h \
    soap/wsaapi.h \
    soap/wsddapi.h \
    getopt/getopt.h \
    onvif/descdevice.h \
    onvif/discoverythread.h \
    onvif/discoveryobj.h


win32 {
    LIBS += -lws2_32
}

CONFIG += console
