#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifReplayControlLib
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
    onvif/replaycontrol.cpp \
    onvif/replaycontrolserviceimplement.cpp \
    soap/onvifreplaycontrolC.cpp \
    soap/onvifreplaycontrolReplayBindingProxy.cpp \
    soap/onvifreplaycontrolReplayBindingService.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/replaycontrol.h \
    onvif/replaycontrolservice.h \
    onvif/replaycontrolserviceextabst.h \
    soap/onvifreplaycontrolH.h \
    soap/onvifreplaycontrolStub.h \
    soap/onvifreplaycontrolReplayBindingProxy.h \
    soap/onvifreplaycontrolReplayBindingService.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
