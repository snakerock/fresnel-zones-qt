#-------------------------------------------------
#
# Project created by QtCreator 2014-10-14T22:36:12
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtFresnelZones
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    spiralgraph.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    spiralgraph.h

FORMS    += mainwindow.ui
