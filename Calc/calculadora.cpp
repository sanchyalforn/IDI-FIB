#include "calculadora.h"
#include "ui_calculadora.h"

calculadora::calculadora(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculadora) {
    ui->setupUi(this);
}

calculadora::~calculadora() {
    delete ui;
}
