TEMPLATE     = app

QT           += widgets
CONFIG       += qt

TARGET        = executable

DEPENDPATH   += .
INCLUDEPATH  += .

FORMS        += MyForm.ui

HEADERS       = MyQLCDNumber.h \
                MyForm.h

SOURCES      += main.cpp \
                MyForm.cpp \
                MyQLCDNumber.cpp \
                
