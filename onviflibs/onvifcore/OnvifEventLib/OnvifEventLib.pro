#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../../OnvifDist

TARGET = OnvifEventLib
TEMPLATE = lib

DEFINES += MYDLL_LIBRARY


INCLUDEPATH += ../../common \
               ../../common/gsoap \
               ../../common/gsoap/plugin \
               ../../common/exportdef \

SOURCES += \
    onvif/event.cpp \
    onvif/eventserviceimplement.cpp \
    soap/onvifeventC.cpp \
    soap/onvifeventPullPointSubscriptionBindingProxy.cpp \
    soap/onvifeventPullPointSubscriptionBindingService.cpp \
    ../../common/gsoap/stdsoap2.cpp \
    ../../common/gsoap/duration.cpp

HEADERS  += \
    onvif/event.h \
    onvif/eventservice.h \
    onvif/eventserviceextabst.h \
    soap/onvifeventH.h \
    soap/onvifeventStub.h \
    soap/onvifeventPullPointSubscriptionBindingProxy.h \
    soap/onvifeventPullPointSubscriptionBindingService.h \
    ../../common/gsoap/stdsoap2.h \
    ../../common/gsoap/stlvector.h \
    ../../common/gsoap/duration.h \
    ../../common/exportdef/mydll_global.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
