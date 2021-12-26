QT       += core gui
QT       += core
QT       += network
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

mingw32-make
TARGET = QT_PSQL
TEMPLATE = app
CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    addnewitem.cpp \
    addnewitem2.cpp \
    addnewitem3.cpp \
    mainwindow.cpp\
    managermain.cpp \
    secondwindow.cpp \
    serverthread.cpp


HEADERS += \
    connection.h \
    mainwindow.h \
    addnewitem.h \
    addnewitem2.h \
    addnewitem3.h \
    mainwindow.h\
    managermain.h \
    secondwindow.h \
    serverthread.h

FORMS += \
    mainwindow.ui \
    addnewitem.ui \
    addnewitem2.ui \
    addnewitem3.ui \
    mainwindow.ui\
    managermain.ui \
    secondwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=
