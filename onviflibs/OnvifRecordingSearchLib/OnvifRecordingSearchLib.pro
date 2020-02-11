#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifRecordingSearchLib
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
    onvif/recordingsearch.cpp \
    onvif/recordingsearchserviceimplement.cpp \
    soap/onvifrecordingsearchC.cpp \
    soap/onvifrecordingsearchSearchBindingProxy.cpp \
    soap/onvifrecordingsearchSearchBindingService.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/recordingsearch.h \
    onvif/recordingsearchservice.h \
    onvif/recordingsearchserviceextabst.h \
    soap/onvifrecordingsearchH.h \
    soap/onvifrecordingsearchStub.h \
    soap/onvifrecordingsearchSearchBindingProxy.h \
    soap/onvifrecordingsearchSearchBindingService.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
