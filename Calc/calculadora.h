#ifndef calculadora_H
#define calculadora_H

#include <QWidget>

namespace Ui {
class calculadora;
}

class calculadora : public QWidget
{
    Q_OBJECT

public:
    explicit calculadora(QWidget *parent = 0);
    ~calculadora();

private:
    Ui::calculadora *ui;
};

#endif // calculadora_H
