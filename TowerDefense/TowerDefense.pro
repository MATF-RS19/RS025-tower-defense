#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T15:54:55
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TowerDefense
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    tower.cpp \
    game.cpp \
    enemy.cpp \
    bullet.cpp \
    arrowtowericon.cpp \
    watchtowericon.cpp \
    enemies.cpp \
    resources.cpp \
    groundenemy.cpp \
    flyingenemy.cpp \
    icetowericon.cpp \
    witchtowericon.cpp \
    magetowericon.cpp \
    towers.cpp \
    startwindow.cpp \
    gameover.cpp \
    aboutwindow.cpp

HEADERS += \
    tower.h \
    game.h \
    enemy.h \
    bullet.h \
    arrowtowericon.h \
    watchtowericon.h \
    enemies.h \
    resources.h \
    groundenemy.h \
    flyingenemy.h \
    icetowericon.h \
    witchtowericon.h \
    magetowericon.h \
    towers.h \
    startwindow.h \
    gameover.h \
    aboutwindow.h

FORMS += \
    startwindow.ui \
    gameover.ui \
    aboutwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    bestScores.txt
