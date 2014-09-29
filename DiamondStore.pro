TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    xaudiotrack.cpp \
    xmusiccd.cpp \
    xcdcolection.cpp \
    xproduct.cpp \
    xbook.cpp \
    xgamecd.cpp \
    xcomicbook.cpp

HEADERS += \
    xaudiotrack.h \
    xmusiccd.h \
    xcdcolection.h \
    xproduct.h \
    xbook.h \
    xgamecd.h \
    xcomicbook.h

