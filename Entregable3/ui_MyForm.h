/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "MyQLCDnumber.h"

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    MyQLCDNumber *Res;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sum;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sub;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mul;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *div;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *Op1;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *Op2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *Absolut;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *Reset;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *Acumular;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *Exit;
    QSpacerItem *horizontalSpacer_13;

    void setupUi(QWidget *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QStringLiteral("Calculadora"));
        Calculadora->resize(323, 314);
        Calculadora->setMinimumSize(QSize(40, 40));
        Calculadora->setMaximumSize(QSize(323, 314));
        Res = new MyQLCDNumber(Calculadora);
        Res->setObjectName(QStringLiteral("Res"));
        Res->setGeometry(QRect(40, 40, 251, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(241);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Res->sizePolicy().hasHeightForWidth());
        Res->setSizePolicy(sizePolicy);
        Res->setFrameShadow(QFrame::Plain);
        Res->setSegmentStyle(QLCDNumber::Flat);
        layoutWidget = new QWidget(Calculadora);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 170, 251, 76));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sum = new QPushButton(layoutWidget);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(sum);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        sub = new QPushButton(layoutWidget);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(sub);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        mul = new QPushButton(layoutWidget);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(mul);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        div = new QPushButton(layoutWidget);
        div->setObjectName(QStringLiteral("div"));
        div->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(div);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(Calculadora);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 100, 251, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        Op1 = new QSpinBox(layoutWidget1);
        Op1->setObjectName(QStringLiteral("Op1"));
        Op1->setMaximumSize(QSize(111, 51));

        horizontalLayout_2->addWidget(Op1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        Op2 = new QSpinBox(layoutWidget1);
        Op2->setObjectName(QStringLiteral("Op2"));
        Op2->setMaximumSize(QSize(111, 51));

        horizontalLayout_2->addWidget(Op2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        layoutWidget2 = new QWidget(Calculadora);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 260, 248, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        Absolut = new QCheckBox(layoutWidget2);
        Absolut->setObjectName(QStringLiteral("Absolut"));

        horizontalLayout_3->addWidget(Absolut);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        Reset = new QPushButton(layoutWidget2);
        Reset->setObjectName(QStringLiteral("Reset"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(40);
        sizePolicy1.setVerticalStretch(40);
        sizePolicy1.setHeightForWidth(Reset->sizePolicy().hasHeightForWidth());
        Reset->setSizePolicy(sizePolicy1);
        Reset->setMinimumSize(QSize(40, 40));
        Reset->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(Reset);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        Acumular = new QPushButton(layoutWidget2);
        Acumular->setObjectName(QStringLiteral("Acumular"));
        sizePolicy1.setHeightForWidth(Acumular->sizePolicy().hasHeightForWidth());
        Acumular->setSizePolicy(sizePolicy1);
        Acumular->setMinimumSize(QSize(40, 40));
        Acumular->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(Acumular);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        Exit = new QPushButton(layoutWidget2);
        Exit->setObjectName(QStringLiteral("Exit"));
        sizePolicy1.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy1);
        Exit->setMinimumSize(QSize(40, 40));
        Exit->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(Exit);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);

        layoutWidget->raise();
        Res->raise();
        layoutWidget->raise();
        layoutWidget->raise();

        retranslateUi(Calculadora);
        QObject::connect(Exit, SIGNAL(clicked()), Calculadora, SLOT(close()));
        QObject::connect(Reset, SIGNAL(clicked()), Op1, SLOT(clear()));
        QObject::connect(Reset, SIGNAL(clicked()), Op2, SLOT(clear()));
        QObject::connect(sum, SIGNAL(clicked()), Res, SLOT(suma()));
        QObject::connect(sub, SIGNAL(clicked()), Res, SLOT(resta()));
        QObject::connect(mul, SIGNAL(clicked()), Res, SLOT(mult()));
        QObject::connect(div, SIGNAL(clicked()), Res, SLOT(div()));
        QObject::connect(Absolut, SIGNAL(clicked()), Res, SLOT(abs()));
        QObject::connect(Acumular, SIGNAL(clicked()), Res, SLOT(acumula()));
        QObject::connect(Op1, SIGNAL(valueChanged(int)), Res, SLOT(setOp1()));
        QObject::connect(Op2, SIGNAL(valueChanged(int)), Res, SLOT(setOp2()));

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QWidget *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Calculadora", 0));
        sum->setText(QApplication::translate("Calculadora", "+", 0));
        sub->setText(QApplication::translate("Calculadora", "-", 0));
        mul->setText(QApplication::translate("Calculadora", "*", 0));
        div->setText(QApplication::translate("Calculadora", "/", 0));
        Absolut->setText(QApplication::translate("Calculadora", "abs", 0));
        Reset->setText(QApplication::translate("Calculadora", "Reset", 0));
        Acumular->setText(QApplication::translate("Calculadora", "AC", 0));
        Exit->setText(QApplication::translate("Calculadora", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
