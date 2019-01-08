#define GLM_FORCE_RADIANS
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QKeyEvent>
#include <QMouseEvent>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#include "model.h"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core 
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();

  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ( );
    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ( );
    // resizeGL - És cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);
    // keyPressEvent - Es cridat quan es prem una tecla
    virtual void keyPressEvent (QKeyEvent *event);
    // mouse{Press/Release/Move}Event - Són cridades quan es realitza l'event 
    // corresponent de ratolí
    virtual void mousePressEvent (QMouseEvent *event);
    virtual void mouseReleaseEvent (QMouseEvent *event);
    virtual void mouseMoveEvent (QMouseEvent *event);

  private:
    void createBuffersPatricio ();
    void createBuffersCow();
    void createBuffersTerraIParet ();
    void carregaShaders ();
    void iniEscena ();
    void iniCamera ();
    void projectTransform ();
    void viewTransform ();
    void modelTransformTerra ();
    void modelTransformCamara ();
    void modelTransformPatricio ();
    void modelTransformPatricio2 ();
    void calculaCapsaModel ();
    void calculaCapsaCow ();

    // VAO i VBO names
    GLuint VAO_Patr, VAO_Cow;
    GLuint VAO_Terra;
    // Program
    QOpenGLShaderProgram *program;
    // uniform locations
    GLuint transLoc, projLoc, viewLoc;
    // attribute locations
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;
    GLuint colFocus, posFocus, llumAmbient, test;

    glm::vec3 puntMinim = glm::vec3(-2.0,-1.0,-2.0);
    glm::vec3 puntMax = glm::vec3(2.0,3.0,2.0);
    glm::vec3 centreEscena = (puntMax + puntMinim)/2.0f;

    float radiEscCalc = glm::distance(centreEscena, puntMax);

    // model
    Model patr, Cow;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centrePatr, centreCow;
    float escala, escalaCow;
    // radi de l'escena
    float radiEsc, ra;
    float FOV, angleinit;
    float angleRotacio = 0.0;

    typedef  enum {NONE, ROTATE} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick, ry, testint = 0;
    float angleY, angleX;
    bool perspectiva;
};

