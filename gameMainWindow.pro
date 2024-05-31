#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T17:51:53
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia\
            core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gameMainWindow
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
    about_dialog.cpp \
    database.cpp \
    mainmenu.cpp \
    randomgenerate.cpp \
           settings.cpp \
           title.cpp \
           view.cpp \
    backgrounditem.cpp \
    bomb.cpp \
    brickplatform.cpp \
    castle.cpp \
    coin.cpp \
    coincounter.cpp \
    conveyor.cpp \
    flag.cpp \
    giantgoomba.cpp \
    goomba.cpp \
    myscene.cpp \
    notebox.cpp \
    piranha.cpp \
    player.cpp \
    questbox.cpp \
    redturtle.cpp \
    score.cpp \
    spiny.cpp \
    stairblock.cpp \
    timer.cpp \
    turtle.cpp \
    wallplatform.cpp \
    warptube.cpp \
    ara_sound_manager.cpp \
    smallmario.cpp \
    mushroom.cpp \
    gameoverwindow.cpp \
    levelcompletewindow.cpp

HEADERS  += \
    database.h \
    mainmenu.h \
    objecttype.h \
    randomgenerate.h \
            settings.h \
            title.h \
            view.h \
    backgrounditem.h \
    bomb.h \
    brickplatform.h \
    castle.h \
    coin.h \
    coincounter.h \
    conveyor.h \
    flag.h \
    giantgoomba.h \
    goomba.h \
    myscene.h \
    notebox.h \
    piranha.h \
    player.h \
    questbox.h \
    redturtle.h \
    score.h \
    spiny.h \
    stairblock.h \
    timer.h \
    turtle.h \
    wallplatform.h \
    warptube.h \
    about_dialog.h \
    ara_sound_manager.h \
    smallmario.h \
    mushroom.h \
    gameoverwindow.h \
    levelcompletewindow.h

FORMS    += \
    about_dialog.ui \
    ara_sound_manager.ui \
    gameoverwindow.ui \
    levelcompletewindow.ui

RESOURCES += \
    mario.qrc \
    audio.qrc

#Libraries Headers Path
#INCLUDEPATH += $$PWD/LibHeaders
#DEPENDPATH += $$PWD/LibHeaders

#macx: LIBS += -L$$PWD/'MacLib/' -lAra_Sound_Manager
#macx: PRE_TARGETDEPS += $$PWD/'MacLib/libAra_Sound_Manager.a'

#win32: LIBS += -L$$PWD/'WinLib/' -lAra_Sound_Manager
#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/'WinLib/Ara_Sound_Manager.lib'
#else:win32-g++: PRE_TARGETDEPS += $$PWD/'WinLib/libAra_Sound_Manager.a'
