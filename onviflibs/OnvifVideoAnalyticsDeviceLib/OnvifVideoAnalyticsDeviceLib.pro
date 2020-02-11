#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifVideoAnalyticsDeviceLib
TEMPLATE = lib

DEFINES += MYDLL_LIBRARY

# include openssl
INCLUDEPATH += C:/openssl-1.0.2u/include \
               ../common \
               ../common/gsoap \
               ../common/gsoap/plugin \

SOURCES += \
    ../common/gsoap/stdsoap2.cpp \
    ../common/gsoap/duration.cpp \
    onvif/videoanalyticsdevice.cpp \
    onvif/videoanalyticsdeviceserviceimplement.cpp \
    soap/onvifvideoanalyticsdeviceC.cpp \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingProxy.cpp \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingService.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/videoanalyticsdevice.h \
    onvif/videoanalyticsdeviceservice.h \
    onvif/videoanalyticsdeviceserviceextabst.h \
    soap/onvifvideoanalyticsdeviceH.h \
    soap/onvifvideoanalyticsdeviceStub.h \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingProxy.h \
    soap/onvifvideoanalyticsdeviceAnalyticsDeviceBindingService.h \

win32 {
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
