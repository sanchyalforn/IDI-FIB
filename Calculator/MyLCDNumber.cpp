#include "MyLCDNumber.h"
#include "ui_MyLCDNumber.h"

MyLCDNumber::MyLCDNumber(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyLCDNumber)
{
    ui->setupUi(this);
}

MyLCDNumber::~MyLCDNumber()
{
    delete ui;
}


void MyLCDNumber::suma() {
    int res = op1 + op2;
    if (abs)
        display(abs(res));
    else
        display(res);
}

void MyLCDNumber::resta() {
    if (!abs && op2 > op1) emit error("error");
    int res = op1 - op2;
    display(res);
}

void MyLCDNumber::mult() {
    int res = op1 * op2;
    display(res);
}

void MyLCDNumber::div() {
    if (op2 == 0) emit error("error");
    int res = op1 / op2;
    display(res);
}

void MyLCDNumber::reset(){
    display(0);
}

void MyLCDNumber::setAbs() {
    abs = !abs;
}

void MyLCDNumber::setOp1(int n) {
    op1 = n;
}

void MyLCDNumber::setOp2(int n) {
    op2 = n;
}
