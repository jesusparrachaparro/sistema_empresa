#-------------------------------------------------
#
# Project created by QtCreator 2019-04-15T18:00:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = interfaz
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    interfazpersonal.cpp \
    interfazconsultar.cpp \
    interfazanadir.cpp \
    interfazeliminar.cpp \
    becario.cpp \
    directivo.cpp \
    empleado.cpp \
    estudiante.cpp \
    ingeniero.cpp \
    operario.cpp \
    persona.cpp \
    carcasa.cpp \
    ecu.cpp \
    pcb.cpp \
    interfazordenes.cpp \
    anadirdirectivo.cpp \
    anadiroperario.cpp \
    anadiringeniero.cpp \
    anadirbecario.cpp \
    consultar.cpp \
    eliminar.cpp \
    escribir.cpp \
    leer.cpp \
    ordenes.cpp

HEADERS  += mainwindow.h \
    interfazpersonal.h \
    interfazconsultar.h \
    interfazanadir.h \
    interfazeliminar.h \
    becario.h \
    directivo.h \
    empleado.h \
    estudiante.h \
    ingeniero.h \
    operario.h \
    persona.h \
    consultar.h \
    carcasa.h \
    ecu.h \
    pcb.h \
    interfazordenes.h \
    anadirdirectivo.h \
    anadiroperario.h \
    anadiringeniero.h \
    anadirbecario.h \
    eliminar.h \
    escribir.h \
    leer.h \
    ordenes.h

FORMS    += mainwindow.ui \
    interfazpersonal.ui \
    interfazconsultar.ui \
    interfazanadir.ui \
    interfazeliminar.ui \
    interfazordenes.ui

RESOURCES += \
    imagenes.qrc
