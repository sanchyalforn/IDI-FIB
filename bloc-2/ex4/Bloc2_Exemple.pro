TEMPLATE    = app
QT         += opengl 

INCLUDEPATH +=  /usr/include/glm \ 
            /dades/victor.sanchez.gassull/linux/IDI/bloc-2/ex4/Model

FORMS += MyForm.ui

HEADERS += MyForm.h MyGLWidget.h

SOURCES += main.cpp MyForm.cpp \
        MyGLWidget.cpp \ 
        /dades/victor.sanchez.gassull/linux/IDI/bloc-2/ex4/Model/model.cpp
