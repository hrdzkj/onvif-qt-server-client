#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifAnalyticsLib
TEMPLATE = lib


DEFINES += MYDLL_LIBRARY

# include openssl
INCLUDEPATH += C:/openssl-1.0.2u/include \
               ../common \
               ../common/gsoap \
               ../common/gsoap/plugin \

SOURCES += \
    ../common/gsoap/duration.cpp \
    ../common/gsoap/stdsoap2.cpp \
    onvif/analytics.cpp \
    onvif/analyticsserviceimplement.cpp \
    soap/onvifanalyticsC.cpp \
    soap/onvifanalyticsRuleEngineBindingProxy.cpp \
    soap/onvifanalyticsRuleEngineBindingService.cpp



HEADERS  += \
    ../common/gsoap/stdsoap2.h \
    ../common/gsoap/stlvector.h \
    ../common/gsoap/duration.h \
    onvif/analytics.h \
    onvif/analyticsservice.h \
    onvif/analyticsserviceextabst.h\
    soap/onvifanalyticsH.h \
    soap/onvifanalyticsRuleEngineBindingProxy.h \
    soap/onvifanalyticsRuleEngineBindingService.h \
    soap/onvifanalyticsStub.h \




win32{
    LIBS += -lws2_32
    QMAKE_CXXFLAGS += /bigobj
}

DEFINES += "WITH_NONAMESPACES"
