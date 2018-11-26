#ifndef MYLCDNUMBER_H
#define MYLCDNUMBER_H

#include <QLCDNumber>

class MyLCDNumber : public QLCDNumber {
    Q_OBJECT

public:
    MyLCDNumber(QWidget *parent);
    // ~MyLCDNumber();

    int op1;
    int op2;
    bool absolut;


public slots:
    void suma();
    void resta();
    void div();
    void mult();
    void reset();
    void acumul();
    void setAbs(bool b);
    void setOp1(int n);
    void setOp2(int n);


private:
};

#endif // MYLCDNUMBER_H
