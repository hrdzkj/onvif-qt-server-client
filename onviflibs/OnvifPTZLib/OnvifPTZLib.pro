#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifPTZLib
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
    onvif/ptz.cpp \
    soap/onvifptzPTZBindingProxy.cpp \
    soap/onvifptzC.cpp \
    soap/onvifptzPTZBindingService.cpp \
    onvif/ptzserviceimplement.cpp

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/ptz.h \
    onvif/ptzservice.h \
    onvif/ptzserviceextabst.h \
    soap/onvifptzPTZBindingProxy.h \
    soap/onvifptzH.h \
    soap/onvifptzStub.h \
    soap/onvifptzPTZBindingService.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
