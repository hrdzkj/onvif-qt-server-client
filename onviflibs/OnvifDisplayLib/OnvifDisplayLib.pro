#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifDisplayLib
TEMPLATE = lib

DEFINES += MYDLL_LIBRARY

INCLUDEPATH += C:/openssl-1.0.2u/include \
               ../common \
               ../common/gsoap \
               ../common/gsoap/plugin \

SOURCES += \
    ../common/gsoap/stdsoap2.cpp \
    ../common/gsoap/duration.cpp \
    onvif/display.cpp \
    onvif/displayserviceimplement.cpp \
    soap/onvifdisplayC.cpp \
    soap/onvifdisplayDisplayBindingService.cpp \
    soap/onvifdisplayDisplayBindingProxy.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/display.h \
    onvif/displayservice.h \
    onvif/displayserviceextabst.h \
    soap/onvifdisplayH.h \
    soap/onvifdisplayStub.h \
    soap/onvifdisplayDisplayBindingService.h \
    soap/onvifdisplayDisplayBindingProxy.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
