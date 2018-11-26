/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mylcdnumber.h"

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    MyLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(390, 300);
        verticalLayout_2 = new QVBoxLayout(Calculadora);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new MyLCDNumber(Calculadora);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(Calculadora);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        spinBox_2 = new QSpinBox(Calculadora);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout);

        checkBox = new QCheckBox(Calculadora);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(Calculadora);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Calculadora);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Calculadora);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Calculadora);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Calculadora);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Calculadora);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QWidget *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Calculator", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Calculadora", "Absolut", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Calculadora", "+", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Calculadora", "-", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Calculadora", "*", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Calculadora", "/", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Calculadora", "reset", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Calculadora", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
