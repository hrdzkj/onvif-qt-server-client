#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifImagingLib
TEMPLATE = lib

DEFINES += MYDLL_LIBRARY

INCLUDEPATH += C:/openssl-1.0.2u/include \
               ../common \
               ../common/gsoap \
               ../common/gsoap/plugin \

SOURCES += \
    ../common/gsoap/stdsoap2.cpp \
    ../common/gsoap/duration.cpp \
    onvif/imaging.cpp \
    onvif/imagingserviceimplement.cpp \
    soap/onvifimagingC.cpp \
    soap/onvifimagingImagingBindingService.cpp \
    soap/onvifimagingImagingBindingProxy.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/imaging.h \
    onvif/imagingservice.h \
    onvif/imagingserviceextabst.h \
    soap/onvifimagingH.h \
    soap/onvifimagingStub.h \
    soap/onvifimagingImagingBindingService.h \
    soap/onvifimagingImagingBindingProxy.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
