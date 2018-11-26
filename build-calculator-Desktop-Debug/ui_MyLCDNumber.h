/********************************************************************************
** Form generated from reading UI file 'MyLCDNumber.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLCDNUMBER_H
#define UI_MYLCDNUMBER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLCDNumber
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyLCDNumber)
    {
        if (MyLCDNumber->objectName().isEmpty())
            MyLCDNumber->setObjectName(QString::fromUtf8("MyLCDNumber"));
        MyLCDNumber->resize(400, 300);
        menuBar = new QMenuBar(MyLCDNumber);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MyLCDNumber->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyLCDNumber);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyLCDNumber->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyLCDNumber);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyLCDNumber->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyLCDNumber);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyLCDNumber->setStatusBar(statusBar);

        retranslateUi(MyLCDNumber);

        QMetaObject::connectSlotsByName(MyLCDNumber);
    } // setupUi

    void retranslateUi(QMainWindow *MyLCDNumber)
    {
        MyLCDNumber->setWindowTitle(QApplication::translate("MyLCDNumber", "MyLCDNumber", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyLCDNumber: public Ui_MyLCDNumber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLCDNUMBER_H
