#ifndef MYLCDNUMBER_H
#define MYLCDNUMBER_H

#include <QMainWindow>

namespace Ui {
class MyLCDNumber;
}

class MyLCDNumber : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyLCDNumber(QWidget *parent = 0);
    ~MyLCDNumber();



private:
    Ui::MyLCDNumber *ui;
};

#endif // MYLCDNUMBER_H
