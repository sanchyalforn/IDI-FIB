#include "MyLCDNumber.h"


//MyLCDNumber::MyLCDNumber(QWidget *parent) : MyLCDNumber(parent) {}

//MyLCDNumber::~MyLCDNumber(){}


void MyLCDNumber::suma() {

    int res = op1 + op2;
    display(res);
}

void MyLCDNumber::resta() {

    int res = 0;
    if (absolut)
        res = abs(res);

    else if (op2 > op1) display("error");

    res = op1 - op2;

    display(res);
}

void MyLCDNumber::mult() {
    int res = op1 * op2;
    display(res);
}

void MyLCDNumber::div() {
    if (op2 == 0) display("error");
    int res = op1 / op2;
    display(res);
}

void MyLCDNumber::reset(){
    display(0);
}

void MyLCDNumber::setAbs(bool b) {
    absolut = b;
}

void MyLCDNumber::setOp1(int n) {
    op1 = n;
}

void MyLCDNumber::setOp2(int n) {
    op2 = n;
}
