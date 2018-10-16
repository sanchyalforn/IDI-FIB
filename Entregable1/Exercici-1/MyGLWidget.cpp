#include "MyGLWidget.h"

#include <iostream>

MyGLWidget::MyGLWidget (QWidget* parent) : QOpenGLWidget(parent), program(NULL) {
  setFocusPolicy(Qt::StrongFocus);  // per rebre events de teclat
}

MyGLWidget::~MyGLWidget () {
  if (program != NULL)
    delete program;
}

void MyGLWidget::initializeGL () {
  // Cal inicialitzar l'ús de les funcions d'OpenGL
  initializeOpenGLFunctions();
  
  glClearColor (0.5, 0.7, 1.0, 1.0); // defineix color de fons (d'esborrat)
  carregaShaders();
  createBuffersQuadrat();
}

void MyGLWidget::pintaQuadrat () { // AQUEST MÈTODE NO ES POT MODIFICAR !!
  // Activem l'Array a pintar 
  glBindVertexArray(VAO1);
  // Pintem el quadrat
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
}

void MyGLWidget::paintGL () {
    
    if (!b) {
        glViewport (0, 0, width(), height()); // Aquesta crida no caldria perquè Qt la fa de forma automàtica amb aquests paràmetres

        glClear (GL_COLOR_BUFFER_BIT);  // Esborrem el frame-buffer


        // Aquí caldrà pintar l'escena de la forma adient...
        modelTransformR1 ();
        pintaQuadrat ();

        modelTransformR2();
        pintaQuadrat();
    }
    else {
        
        glViewport (0, height()/2, width()/2, height()/2);
        modelTransformR1();
        pintaQuadrat();
        modelTransformR2();
        pintaQuadrat();
        
        r = true;
        
        glViewport (width()/2, 0, width()/2, height()/2);
        modelTransformR1();
        pintaQuadrat();
        modelTransformR2();
        pintaQuadrat();  
        
        r = false;
        
    }

    // Desactivem el VAO
    glBindVertexArray(0);

}

void MyGLWidget::modelTransformR1 ()  {
    TG = glm::mat4 (1.0);
    if (b) {
        if (r)
            TG = glm::rotate(TG,float(M_PI),glm::vec3(0,0,1));
    }
    TG = glm::translate(TG,glm::vec3(-0.5,0.1,0));
    TG = glm::scale(TG,glm::vec3(0.5,1/0.4,1));
    
    glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);
}

void MyGLWidget::modelTransformR2 ()  {
    TG = glm::mat4 (1.0);
    if(b) {
        if (r)
            TG = glm::rotate(TG,float(M_PI),glm::vec3(0,0,1));
    }
    
    TG = glm::translate(TG,glm::vec3(-0.3,-0.5,0));
    TG = glm::scale(TG,glm::vec3(0.6/0.4,0.5,1));
    
    glUniformMatrix4fv (transLoc, 1, GL_FALSE, &TG[0][0]);

}

void MyGLWidget::resizeGL (int w, int h) {
  // Aquí anirà el codi que cal fer quan es redimensiona la finestra
  // no es demana en aquest exercici!
}

void MyGLWidget::keyPressEvent(QKeyEvent* event)  {
  makeCurrent();
  switch (event->key()) {
      
    case Qt::Key_V: { // canvi entre un i dos viewports
      b = not b;
      break;
    }
    default: event->ignore(); break;
  }
  update();
}

void MyGLWidget::createBuffersQuadrat () { // AQUEST MÈTODE NO ES POT MODIFICAR !!!
    
  glm::vec3 Vertices[4];  // Quatre vèrtexs amb X, Y i Z
  Vertices[0] = glm::vec3(-0.2, -0.2, 0.0);
  Vertices[1] = glm::vec3(0.2, -0.2, 0.0);
  Vertices[2] = glm::vec3(-0.2, 0.2, 0.0);
  Vertices[3] = glm::vec3(0.2, 0.2, 0.0);
  
  glm::vec3 Colors[4];
  Colors[0] = glm::vec3(1.0, 1.0, 0.0);
  Colors[1] = glm::vec3(1.0, 0.0, 0.0);
  Colors[2] = glm::vec3(1.0, 1.0, 0.0);
  Colors[3] = glm::vec3(1.0, 0.0, 0.0);
  
  // Creació del Vertex Array Object (VAO) que usarem per pintar
  glGenVertexArrays(1, &VAO1);
  glBindVertexArray(VAO1);

  // Creació del buffer amb les dades dels vèrtexs
  GLuint VBOs[2];
  glGenBuffers(2, VBOs);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex (només el 0 en aquest cas)	
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glBindBuffer(GL_ARRAY_BUFFER, VBOs[1]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(Colors), Colors, GL_STATIC_DRAW);
  // Activem l'atribut que farem servir per vèrtex (només el 0 en aquest cas)	
  glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colorLoc);

  // Desactivem el VAO
  glBindVertexArray(0);
}

void MyGLWidget::carregaShaders() {
  // Creem els shaders per al fragment shader i el vertex shader
  QOpenGLShader fs (QOpenGLShader::Fragment, this);
  QOpenGLShader vs (QOpenGLShader::Vertex, this);
  // Carreguem el codi dels fitxers i els compilem
  fs.compileSourceFile("shaders/fragshad.frag");
  vs.compileSourceFile("shaders/vertshad.vert");
  // Creem el program
  program = new QOpenGLShaderProgram(this);
  // Li afegim els shaders corresponents
  program->addShader(&fs);
  program->addShader(&vs);
  // Linkem el program
  program->link();
  // Indiquem que aquest és el program que volem usar
  program->bind();

  // Obtenim identificador per a l'atribut “vertex” del vertex shader
  vertexLoc = glGetAttribLocation (program->programId(), "vertex");
  // Obtenim identificador per a l'atribut “color” del vertex shader
  colorLoc = glGetAttribLocation (program->programId(), "color");
  
  transLoc = glGetUniformLocation (program -> programId(), "TG");
  
}
