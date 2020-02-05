TEMPLATE     = vcapp
TARGET       = TestVisiTest
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MonInterface.h
SOURCES     += TestVisiTest.cpp MonInterface.cpp
INCLUDEPATH += ../VisiTest
LIBS	      += ../VisiTest/VisiTest.lib
QT += widgets
