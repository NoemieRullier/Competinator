#-------------------------------------------------
#
# Project created by QtCreator 2013-01-29T12:53:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Competinator
TEMPLATE = app


SOURCES += main.cpp\
        UI/mainwindow.cpp \
    model/usamember.cpp \
    model/usastatus.cpp

HEADERS += UI/mainwindow.h \
    model/usamember.h \
    model/usastatus.h

FORMS += UI/mainwindow.ui

RESOURCES += \
    Resources.qrc

ICON = pictures/Competinator.icns
