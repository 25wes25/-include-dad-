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
    line.cpp \
    polyline.cpp \
    maintenancenotes.cpp \
    testimonials.cpp \
    contact.cpp \
    Polygon.cpp \
    help.cpp \
    newnew.cpp \
    textmanip.cpp \
    text.cpp

HEADERS  += \
    loginscreen.h \
    users.h \
    maininterface.h \
    canvas.h \
    Circle.h \
    Ellipse.h \
    PolyGon.h \
    Rectangle.h \
    shape.h \
    Square.h \
    Vector.h \
    PolyLine.h \
    line.h \
    maintenancenotes.h \
    testimonials.h \
    contact.h \
    help.h \
    newnew.h \
    textmanip.h \
    text.h

FORMS    += \
    loginscreen.ui \
    maininterface.ui \
    maintenancenotes.ui \
    testimonials.ui \
    contact.ui \
    help.ui \
    newnew.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
