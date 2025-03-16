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
#include <QtWidgets/QFormLayout>
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
    QLabel *lblPlayerName;
    QLineEdit *playerName;
    QLabel *lblDesiredStat;
    QPushButton *infoGet;
    QLineEdit *txtResult;
    QComboBox *drpStats;
    QTableWidget *tblInputStats;
    QLabel *lblTotalStats;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *lblNumPlayers;
    QLineEdit *rowsOfTbl;
    QPushButton *createTable;
    QPushButton *runCalcs;
    QLabel *lblDate;
    QLineEdit *dateOfPlay;
    QWidget *widget;
    QFormLayout *formLayout;
    QPushButton *saveGame;
    QPushButton *deleteTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(944, 493);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(660, 60, 261, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblPlayerName = new QLabel(layoutWidget);
        lblPlayerName->setObjectName("lblPlayerName");

        gridLayout->addWidget(lblPlayerName, 0, 0, 1, 1);

        playerName = new QLineEdit(layoutWidget);
        playerName->setObjectName("playerName");

        gridLayout->addWidget(playerName, 0, 1, 1, 1);

        lblDesiredStat = new QLabel(layoutWidget);
        lblDesiredStat->setObjectName("lblDesiredStat");

        gridLayout->addWidget(lblDesiredStat, 1, 0, 1, 1);

        infoGet = new QPushButton(layoutWidget);
        infoGet->setObjectName("infoGet");

        gridLayout->addWidget(infoGet, 2, 0, 1, 2);

        txtResult = new QLineEdit(layoutWidget);
        txtResult->setObjectName("txtResult");
        txtResult->setReadOnly(true);

        gridLayout->addWidget(txtResult, 3, 0, 1, 2);

        drpStats = new QComboBox(layoutWidget);
        drpStats->addItem(QString());
        drpStats->addItem(QString());
        drpStats->addItem(QString());
        drpStats->addItem(QString());
        drpStats->addItem(QString());
        drpStats->setObjectName("drpStats");

        gridLayout->addWidget(drpStats, 1, 1, 1, 1);

        tblInputStats = new QTableWidget(centralwidget);
        tblInputStats->setObjectName("tblInputStats");
        tblInputStats->setGeometry(QRect(10, 60, 631, 341));
        tblInputStats->setColumnCount(0);
        lblTotalStats = new QLabel(centralwidget);
        lblTotalStats->setObjectName("lblTotalStats");
        lblTotalStats->setGeometry(QRect(688, 30, 121, 20));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 282, 48));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lblNumPlayers = new QLabel(layoutWidget1);
        lblNumPlayers->setObjectName("lblNumPlayers");
        lblNumPlayers->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(lblNumPlayers, 0, 0, 1, 1);

        rowsOfTbl = new QLineEdit(layoutWidget1);
        rowsOfTbl->setObjectName("rowsOfTbl");

        gridLayout_2->addWidget(rowsOfTbl, 1, 0, 1, 1);

        createTable = new QPushButton(layoutWidget1);
        createTable->setObjectName("createTable");

        gridLayout_2->addWidget(createTable, 1, 1, 1, 1);

        runCalcs = new QPushButton(layoutWidget1);
        runCalcs->setObjectName("runCalcs");

        gridLayout_2->addWidget(runCalcs, 1, 2, 1, 1);

        lblDate = new QLabel(centralwidget);
        lblDate->setObjectName("lblDate");
        lblDate->setGeometry(QRect(530, 8, 108, 16));
        lblDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateOfPlay = new QLineEdit(centralwidget);
        dateOfPlay->setObjectName("dateOfPlay");
        dateOfPlay->setGeometry(QRect(530, 30, 108, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 410, 168, 26));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        saveGame = new QPushButton(widget);
        saveGame->setObjectName("saveGame");

        formLayout->setWidget(0, QFormLayout::LabelRole, saveGame);

        deleteTable = new QPushButton(widget);
        deleteTable->setObjectName("deleteTable");

        formLayout->setWidget(0, QFormLayout::FieldRole, deleteTable);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 944, 21));
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
        lblPlayerName->setText(QCoreApplication::translate("MainWindow", "Player Name:", nullptr));
        lblDesiredStat->setText(QCoreApplication::translate("MainWindow", "Desired Stat:", nullptr));
        infoGet->setText(QCoreApplication::translate("MainWindow", "Get Info", nullptr));
        drpStats->setItemText(0, QCoreApplication::translate("MainWindow", "Buy-In", nullptr));
        drpStats->setItemText(1, QCoreApplication::translate("MainWindow", "Gross Winnings", nullptr));
        drpStats->setItemText(2, QCoreApplication::translate("MainWindow", "Tip", nullptr));
        drpStats->setItemText(3, QCoreApplication::translate("MainWindow", "Post-tip", nullptr));
        drpStats->setItemText(4, QCoreApplication::translate("MainWindow", "Net", nullptr));

        lblTotalStats->setText(QCoreApplication::translate("MainWindow", "Get total stats:", nullptr));
        lblNumPlayers->setText(QCoreApplication::translate("MainWindow", "Number of Players:", nullptr));
        createTable->setText(QCoreApplication::translate("MainWindow", "Create Table", nullptr));
        runCalcs->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        lblDate->setText(QCoreApplication::translate("MainWindow", "Date (MMDDYY):", nullptr));
        saveGame->setText(QCoreApplication::translate("MainWindow", "Save Game", nullptr));
        deleteTable->setText(QCoreApplication::translate("MainWindow", "Delete Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
