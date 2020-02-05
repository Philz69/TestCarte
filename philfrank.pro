TEMPLATE     = vcapp
TARGET       = philfrank
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MonInterface.h centralwidget.h CommunicationFPGA.h manip.h vecteur.h  leds.h switches.h VisiTest.h tests.h
SOURCES     += TestFPGA.cpp TestVecteur.cpp MonInterface.cpp main.cpp   
INCLUDEPATH += ./
LIBS	      += ./VisiTest.lib ./CommunicationFPGA.lib
QT += widgets
