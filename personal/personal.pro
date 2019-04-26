TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    directivo.cpp \
    persona.cpp \
    empleado.cpp \
    estudiante.cpp \
    ingeniero.cpp \
    becario.cpp \
    operario.cpp

HEADERS += \
    persona.h \
    directivo.h \
    empleado.h \
    estudiante.h \
    ingeniero.h \
    becario.h \
    operario.h
