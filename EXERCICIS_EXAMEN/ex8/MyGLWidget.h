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
    void createBuffersCow ();
    void createBuffersTerraIParet ();

    void carregaShaders ();

    void iniEscena ();
    void iniCamera ();

    void projectTransform ();

    void viewTransform ();

    void modelTransformCamera ();
    void modelTransformTerra ();
    void modelTransformPatricio ();
    void modelTransformCow ();
    
    void calculaCapsaModel ();
    void calculaCapsaCow ();

    // VAO i VBO names
    GLuint VAO_Patr;
    GLuint VAO_Terra;
    GLuint VAO_Cow;
    // Program
    QOpenGLShaderProgram *program;
    // uniform locations
    GLuint transLoc, projLoc, viewLoc;
    // attribute locations
    GLuint vertexLoc, normalLoc, matambLoc, matdiffLoc, matspecLoc, matshinLoc;

    GLuint colFocus, posFocus, llumAmbient;

    GLuint paint;

    // model
    Model patr;
    Model Cow;
    // paràmetres calculats a partir de la capsa contenidora del model
    glm::vec3 centrePatr;
    glm::vec3 centreCow;
    float escala;
    float escalaCow;
    float graus = 0;
    // radi de l'escena
    float radiEsc, ra;
    float FOV, angleinit;

    glm::vec3 OBS,VRP,up;

    typedef  enum {NONE, ROTATE} InteractiveAction;
    InteractiveAction DoingInteractive;
    int xClick, yClick;
    float angleY;
    bool perspectiva;
};
