#include "MyLCDNumber.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyLCDNumber w;
    w.show();

    return a.exec();
}
