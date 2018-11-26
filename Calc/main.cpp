#include "calculadora.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calculadora w;
    w.show();

    return a.exec();
}
