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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabNewGame;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *saveGame;
    QPushButton *deleteTable;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *rowsOfTbl;
    QPushButton *createTable;
    QLabel *lblNumPlayers;
    QPushButton *runCalcs;
    QTableWidget *tblInputStats;
    QLabel *lblDate;
    QDateEdit *dateNewGame;
    QPushButton *btnUseCrntDate;
    QWidget *tabTotalStats;
    QTableWidget *tblLifetime;
    QWidget *tabGetNightInfo;
    QTableWidget *tblNightInfo;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *lblDateOfPlay;
    QPushButton *btnNightInfo;
    QDateEdit *getDate;
    QListWidget *listNightsPlayed;
    QLabel *lblNightsPlayed;
    QWidget *tab;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(756, 534);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1041, 561));
        tabNewGame = new QWidget();
        tabNewGame->setObjectName("tabNewGame");
        tabNewGame->setEnabled(true);
        layoutWidget = new QWidget(tabNewGame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 413, 168, 26));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        saveGame = new QPushButton(layoutWidget);
        saveGame->setObjectName("saveGame");

        formLayout->setWidget(0, QFormLayout::LabelRole, saveGame);

        deleteTable = new QPushButton(layoutWidget);
        deleteTable->setObjectName("deleteTable");

        formLayout->setWidget(0, QFormLayout::FieldRole, deleteTable);

        layoutWidget1 = new QWidget(tabNewGame);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 12, 282, 48));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rowsOfTbl = new QLineEdit(layoutWidget1);
        rowsOfTbl->setObjectName("rowsOfTbl");

        gridLayout_2->addWidget(rowsOfTbl, 1, 0, 1, 1);

        createTable = new QPushButton(layoutWidget1);
        createTable->setObjectName("createTable");

        gridLayout_2->addWidget(createTable, 1, 1, 1, 1);

        lblNumPlayers = new QLabel(layoutWidget1);
        lblNumPlayers->setObjectName("lblNumPlayers");
        lblNumPlayers->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(lblNumPlayers, 0, 0, 1, 1);

        runCalcs = new QPushButton(layoutWidget1);
        runCalcs->setObjectName("runCalcs");

        gridLayout_2->addWidget(runCalcs, 1, 2, 1, 1);

        tblInputStats = new QTableWidget(tabNewGame);
        tblInputStats->setObjectName("tblInputStats");
        tblInputStats->setGeometry(QRect(10, 63, 635, 341));
        tblInputStats->setColumnCount(0);
        lblDate = new QLabel(tabNewGame);
        lblDate->setObjectName("lblDate");
        lblDate->setGeometry(QRect(535, 0, 110, 47));
        lblDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateNewGame = new QDateEdit(tabNewGame);
        dateNewGame->setObjectName("dateNewGame");
        dateNewGame->setGeometry(QRect(535, 35, 110, 25));
        btnUseCrntDate = new QPushButton(tabNewGame);
        btnUseCrntDate->setObjectName("btnUseCrntDate");
        btnUseCrntDate->setGeometry(QRect(430, 35, 101, 24));
        tabWidget->addTab(tabNewGame, QString());
        tabTotalStats = new QWidget();
        tabTotalStats->setObjectName("tabTotalStats");
        tblLifetime = new QTableWidget(tabTotalStats);
        tblLifetime->setObjectName("tblLifetime");
        tblLifetime->setGeometry(QRect(10, 10, 625, 471));
        tabWidget->addTab(tabTotalStats, QString());
        tabGetNightInfo = new QWidget();
        tabGetNightInfo->setObjectName("tabGetNightInfo");
        tblNightInfo = new QTableWidget(tabGetNightInfo);
        tblNightInfo->setObjectName("tblNightInfo");
        tblNightInfo->setGeometry(QRect(10, 70, 625, 381));
        layoutWidget2 = new QWidget(tabGetNightInfo);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 20, 227, 49));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblDateOfPlay = new QLabel(layoutWidget2);
        lblDateOfPlay->setObjectName("lblDateOfPlay");
        lblDateOfPlay->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(lblDateOfPlay, 0, 0, 1, 1);

        btnNightInfo = new QPushButton(layoutWidget2);
        btnNightInfo->setObjectName("btnNightInfo");

        gridLayout_3->addWidget(btnNightInfo, 1, 1, 1, 1);

        getDate = new QDateEdit(layoutWidget2);
        getDate->setObjectName("getDate");
        getDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(getDate, 1, 0, 1, 1);

        listNightsPlayed = new QListWidget(tabGetNightInfo);
        listNightsPlayed->setObjectName("listNightsPlayed");
        listNightsPlayed->setGeometry(QRect(650, 70, 81, 381));
        lblNightsPlayed = new QLabel(tabGetNightInfo);
        lblNightsPlayed->setObjectName("lblNightsPlayed");
        lblNightsPlayed->setGeometry(QRect(650, 50, 81, 16));
        lblNightsPlayed->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(tabGetNightInfo, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saveGame->setText(QCoreApplication::translate("MainWindow", "Save Game", nullptr));
        deleteTable->setText(QCoreApplication::translate("MainWindow", "Delete Table", nullptr));
        createTable->setText(QCoreApplication::translate("MainWindow", "Create Table", nullptr));
        lblNumPlayers->setText(QCoreApplication::translate("MainWindow", "Number of Players:", nullptr));
        runCalcs->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        lblDate->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        btnUseCrntDate->setText(QCoreApplication::translate("MainWindow", "Use Current Date", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNewGame), QCoreApplication::translate("MainWindow", "New Game", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTotalStats), QCoreApplication::translate("MainWindow", "Total Stats", nullptr));
        lblDateOfPlay->setText(QCoreApplication::translate("MainWindow", "Date of Play: ", nullptr));
        btnNightInfo->setText(QCoreApplication::translate("MainWindow", "Get Night Info", nullptr));
        lblNightsPlayed->setText(QCoreApplication::translate("MainWindow", "Nights Played", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGetNightInfo), QCoreApplication::translate("MainWindow", "Get Night Info", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Player Profiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
