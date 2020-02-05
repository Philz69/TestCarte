TEMPLATE     = vcapp
TARGET       = philfrank
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MonInterface.h centralwidget.h CommmunicationFPGA.h manip.h vecteur.h  leds.h switches.h VisiTest.h
SOURCES     += main.cpp MonInterface.cpp TestFPGA.cpp TestVecteur.cpp
INCLUDEPATH += ./
LIBS	      += ./VisiTest.lib ./CommmunicationFPGA.lib
QT += widgets
