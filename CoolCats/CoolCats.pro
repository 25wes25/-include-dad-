#-------------------------------------------------
#
# Project created by QtCreator 2017-04-20T15:55:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CoolCats
TEMPLATE = app


SOURCES += main.cpp\
    loginscreen.cpp \
    users.cpp \
    maininterface.cpp \
    canvas.cpp \
    Circle.cpp \
    Ellipse.cpp \
    Rectangle.cpp \
    shape.cpp \
    Square.cpp \
    polyline.cpp \
    line.cpp \
    maintenancenotes.cpp

HEADERS  += \
    loginscreen.h \
    users.h \
    maininterface.h \
    canvas.h \
    Circle.h \
    Ellipse.h \
    Line.h \
    PolyGon.h \
    PolyLine.h \
    Rectangle.h \
    shape.h \
    Square.h \
    Vector.h \
    maintenancenotes.h

FORMS    += \
    loginscreen.ui \
    maininterface.ui \
    maintenancenotes.ui

DISTFILES +=

RESOURCES += \
    resources.qrc