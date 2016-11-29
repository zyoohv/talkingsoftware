#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T17:07:19
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Lilink
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    usrinfo.cpp \
    changemyinfo.cpp \
    database.cpp \
    maninfo.cpp

HEADERS  += mainwindow.h \
    login.h \
    maninfo.h \
    usrinfo.h \
    changemyinfo.h \
    database.h

FORMS    += mainwindow.ui \
    login.ui \
    usrinfo.ui \
    changemyinfo.ui

RESOURCES += \
    resource.qrc
