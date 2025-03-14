/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtFirstNum;
    QLabel *label_2;
    QLineEdit *txtSecondNum;
    QGridLayout *gridLayout_2;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnMult;
    QPushButton *btnDiv;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *txtResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(450, 267);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 40, 342, 90));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtFirstNum = new QLineEdit(layoutWidget);
        txtFirstNum->setObjectName("txtFirstNum");

        gridLayout->addWidget(txtFirstNum, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtSecondNum = new QLineEdit(layoutWidget);
        txtSecondNum->setObjectName("txtSecondNum");

        gridLayout->addWidget(txtSecondNum, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName("btnAdd");

        gridLayout_2->addWidget(btnAdd, 0, 0, 1, 1);

        btnSub = new QPushButton(layoutWidget);
        btnSub->setObjectName("btnSub");

        gridLayout_2->addWidget(btnSub, 0, 1, 1, 1);

        btnMult = new QPushButton(layoutWidget);
        btnMult->setObjectName("btnMult");

        gridLayout_2->addWidget(btnMult, 0, 2, 1, 1);

        btnDiv = new QPushButton(layoutWidget);
        btnDiv->setObjectName("btnDiv");

        gridLayout_2->addWidget(btnDiv, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 160, 151, 26));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        txtResult = new QLineEdit(layoutWidget1);
        txtResult->setObjectName("txtResult");
        txtResult->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtResult);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
