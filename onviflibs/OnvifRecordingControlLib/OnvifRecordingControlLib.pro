#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifRecordingControlLib
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
    onvif/recordingcontrol.cpp \
    onvif/recordingcontrolserviceimplement.cpp \
    soap/onvifrecordingcontrolC.cpp \
    soap/onvifrecordingcontrolRecordingBindingProxy.cpp \
    soap/onvifrecordingcontrolRecordingBindingService.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/recordingcontrol.h \
    onvif/recordingcontrolservice.h \
    onvif/recordingcontrolserviceextabst.h \
    soap/onvifrecordingcontrolH.h \
    soap/onvifrecordingcontrolStub.h \
    soap/onvifrecordingcontrolRecordingBindingProxy.h \
    soap/onvifrecordingcontrolRecordingBindingService.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
