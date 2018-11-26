#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QWidget>

namespace Ui {
class Calculadora;
}

class Calculadora : public QWidget
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = nullptr);
    ~Calculadora();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
