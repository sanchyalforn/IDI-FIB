#include "MyQLCDNumber.h"

MyQLCDNumber::MyQLCDNumber(QWidget *parent=0): QLabel(parent){}


void MyQLCDNumber::suma() {
	int res = op1 + op2;
    if (abs)
        display(abs(res));
    else
        display(res);
}

void MyQLCDNumber::resta() {
    if (!abs && op2 > op1) emit error("error");
	int res = op1 - op2;
    display(res);
}

void MyQLCDNumber::mult() {
	int res = op1 * op2;
    display(res);
}

void MyQLCDNumber::div() {
    if (op2 == 0) emit error("error");
	int res = op1 / op2;
    display(res);
}

void MyQLCDNumber::reset(){
    display(0);
}

void MyQLCDNumber::setAbs() {
    abs = !abs;
}

void MyQLCDNumber::setOp1(int n) {
    op1 = n;
}

void MyQLCDNumber::setOp2(int n) {
    op2 = n;
}
