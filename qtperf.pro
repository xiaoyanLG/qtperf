#-------------------------------------------------
#
# Project created by QtCreator 2011-08-17T11:33:31
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4) {
TARGET = qtperf_qt5
} else {
TARGET = qtperf_qt4
}
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    testwidget.cpp

HEADERS  += mainwindow.h \
    testwidget.h

FORMS    += mainwindow.ui \
    testwidget.ui

OTHER_FILES +=

RESOURCES += \
    resources.qrc
