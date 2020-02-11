#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifReceiverLib
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
    onvif/receiverserviceimplement.cpp \
    onvif/receiver.cpp \
    soap/onvifreceiverC.cpp \
    soap/onvifreceiverReceiverBindingProxy.cpp \
    soap/onvifreceiverReceiverBindingService.cpp \

HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/receiverservice.h \
    onvif/receiverserviceextabst.h \
    onvif/receiver.h \
    soap/onvifreceiverH.h \
    soap/onvifreceiverStub.h \
    soap/onvifreceiverReceiverBindingProxy.h \
    soap/onvifreceiverReceiverBindingService.h \

win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
