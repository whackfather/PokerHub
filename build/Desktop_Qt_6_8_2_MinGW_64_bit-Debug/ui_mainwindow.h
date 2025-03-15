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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *playerName;
    QLabel *label_2;
    QPushButton *infoGet;
    QLineEdit *txtResult;
    QComboBox *comboBox;
    QPushButton *createTable;
    QLineEdit *rowsOfTbl;
    QTableWidget *tableWidget;
    QPushButton *runCalcs;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1115, 592);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(53, 40, 261, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        playerName = new QLineEdit(layoutWidget);
        playerName->setObjectName("playerName");

        gridLayout->addWidget(playerName, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        infoGet = new QPushButton(layoutWidget);
        infoGet->setObjectName("infoGet");

        gridLayout->addWidget(infoGet, 2, 0, 1, 2);

        txtResult = new QLineEdit(layoutWidget);
        txtResult->setObjectName("txtResult");
        txtResult->setReadOnly(true);

        gridLayout->addWidget(txtResult, 3, 0, 1, 2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        createTable = new QPushButton(centralwidget);
        createTable->setObjectName("createTable");
        createTable->setGeometry(QRect(400, 50, 80, 24));
        rowsOfTbl = new QLineEdit(centralwidget);
        rowsOfTbl->setObjectName("rowsOfTbl");
        rowsOfTbl->setGeometry(QRect(500, 50, 113, 24));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 190, 631, 341));
        tableWidget->setColumnCount(0);
        runCalcs = new QPushButton(centralwidget);
        runCalcs->setObjectName("runCalcs");
        runCalcs->setGeometry(QRect(550, 140, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1115, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Player Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Desired Stat:", nullptr));
        infoGet->setText(QCoreApplication::translate("MainWindow", "Get Info", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Buy-In", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Gross Winnings", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Tip", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Post-tip", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Net", nullptr));

        createTable->setText(QCoreApplication::translate("MainWindow", "Create Table", nullptr));
        runCalcs->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
