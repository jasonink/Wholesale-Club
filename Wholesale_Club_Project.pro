#-------------------------------------------------
#
# Project created by QtCreator 2017-03-25T00:40:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Wholesale_Club_Project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    memberlist.cpp \
    itemlist.cpp \
    date.cpp

HEADERS  += mainwindow.h \
    linkedlist.h \
    memberlist.h \
    itemlist.h \
    date.h

FORMS    += mainwindow.ui

DISTFILES += \
    warehouse_shoppers.txt
