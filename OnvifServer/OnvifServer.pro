#--4n-----------------------------------------------
# Project created by QtCreator 2015-06-17T15:08:30
#
#-------------------------------------------------

QT       += core gui network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DESTDIR = ../libexe

TARGET = OnvifServer
TEMPLATE = app


DEFINES += "WITH_DOM"
DEFINES += WITH_OPENSSL
DEFINES += WITH_NONAMESPACES

LIBS += -L"C:\openssl-1.0.2u\lib" -llibeay32
LIBS += -L"C:\openssl-1.0.2u\lib" -lssleay32

INCLUDEPATH += C:\openssl-1.0.2u\include \
               $$PWD/onvif \
               $$PWD/onvif/gsoap \
               $$PWD/onvif/gsoap/plugin \
               $$PWD/onvif/media/soap \
               $$PWD/onvif/device \
               $$PWD/onvif/discovery/soap \

SOURCES += \
    wrapper/deviceservicewrapper.cpp \
    onvifserverthread.cpp \
    wrapper/mediaservicewrapper.cpp \
    extender/mediaserviceext.cpp \
    extender/deviceserviceext.cpp \
#    wrapper/eventservicewrapper.cpp \
#    wrapper/analyticsservicewrapper.cpp \
#    wrapper/ptzservicewrapper.cpp \
#    wrapper/imagingservicewrapper.cpp \
#    extender/ptzserviceext.cpp \
#    extender/eventserviceext.cpp \
#    extender/analyticsserviceext.cpp \
    main.cpp \
    onvif/gsoap/dom.cpp \
    onvif/gsoap/stdsoap2.cpp \
    onvif/gsoap/duration.cpp \
    onvif/gsoap/plugin/wsaapi.cpp \
    onvif/gsoap/plugin/wsseapi.cpp \
    onvif/gsoap/plugin/mecevp.c \
    onvif/gsoap/plugin/smdevp.c \
    onvif/gsoap/plugin/threads.c \
    onvif/media/soap/onvifmediaC.cpp \
    onvif/media/soap/onvifmediaMediaBindingService.cpp \
    onvif/media/mediaserviceimplement.cpp \

HEADERS += \
    wrapper/deviceservicewrapper.h \
    onvifserverthread.h \
    wrapper/mediaservicewrapper.h \
    extender/deviceserviceext.h \
    extender/mediaserviceext.h \
#    wrapper/eventservicewrapper.h \
#    wrapper/analyticsservicewrapper.h \
#    wrapper/ptzservicewrapper.h \
#    wrapper/imagingservicewrapper.h \
#    extender/ptzserviceext.h \
#    extender/eventserviceext.h \
#    extender/analyticsserviceext.h
    onvif/media/soap/onvifmedia.nsmap \
    onvif/media/soap/onvifmediaH.h \
    onvif/media/soap/onvifmediaMediaBindingService.h \
    onvif/media/soap/onvifmediaStub.h \
    onvif/gsoap/stdsoap2.h \
    onvif/media/mediaserviceextabst.h \
    onvif/gsoap/duration.h \
    onvif/gsoap/plugin/mecevp.h \
    onvif/gsoap/plugin/smdevp.h \
    onvif/gsoap/plugin/threads.h \
    onvif/gsoap/plugin/wsaapi.h \
    onvif/gsoap/plugin/wsddapi.h \
    onvif/gsoap/plugin/wsseapi.h



win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}







