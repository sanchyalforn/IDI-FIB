#include <QLCDNumber>
#include <stdio.h>

class MyQLCDNumber: public QLCDNumber
{

	Q_OBJECT
public:
	MyLabel(QWidget *parent);
    int op1;
    int op2;
	bool abs = false;

public slots:
	
	void suma();
	void resta();
	void mult();
	void div();
    void setAbs();
	void reset();
    void acumula();

    void setOp1();
    void setOp2();
signals:
	
	void reseta(int);
};
