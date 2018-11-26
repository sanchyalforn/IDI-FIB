/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLCDNumber *res;
    QHBoxLayout *horizontalLayout;
    QSpinBox *op1;
    QSpinBox *op2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sum;
    QPushButton *sub;
    QPushButton *mult;
    QPushButton *div;
    QPushButton *reset;
    QPushButton *exit;

    void setupUi(QWidget *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QStringLiteral("Calculadora"));
        Calculadora->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Calculadora);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        res = new QLCDNumber(Calculadora);
        res->setObjectName(QStringLiteral("res"));

        verticalLayout->addWidget(res);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        op1 = new QSpinBox(Calculadora);
        op1->setObjectName(QStringLiteral("op1"));

        horizontalLayout->addWidget(op1);

        op2 = new QSpinBox(Calculadora);
        op2->setObjectName(QStringLiteral("op2"));

        horizontalLayout->addWidget(op2);


        verticalLayout->addLayout(horizontalLayout);

        checkBox = new QCheckBox(Calculadora);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sum = new QPushButton(Calculadora);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(sum);

        sub = new QPushButton(Calculadora);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(sub);

        mult = new QPushButton(Calculadora);
        mult->setObjectName(QStringLiteral("mult"));
        mult->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(mult);

        div = new QPushButton(Calculadora);
        div->setObjectName(QStringLiteral("div"));
        div->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(div);

        reset = new QPushButton(Calculadora);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(reset);

        exit = new QPushButton(Calculadora);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Calculadora);
        QObject::connect(exit, SIGNAL(clicked()), Calculadora, SLOT(close()));
        QObject::connect(reset, SIGNAL(clicked()), op1, SLOT(clear()));
        QObject::connect(reset, SIGNAL(clicked()), op2, SLOT(clear()));

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QWidget *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Calculadora", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Calculadora", "Absolut", Q_NULLPTR));
        sum->setText(QApplication::translate("Calculadora", "+", Q_NULLPTR));
        sub->setText(QApplication::translate("Calculadora", "-", Q_NULLPTR));
        mult->setText(QApplication::translate("Calculadora", "*", Q_NULLPTR));
        div->setText(QApplication::translate("Calculadora", "/", Q_NULLPTR));
        reset->setText(QApplication::translate("Calculadora", "reset", Q_NULLPTR));
        exit->setText(QApplication::translate("Calculadora", "exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
