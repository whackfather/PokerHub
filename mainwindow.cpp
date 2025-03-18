// PokerHub main window functions
// Written by Roman Rodriguez

// Include statements
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include "utils.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

// UI setup
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

// Close window
MainWindow::~MainWindow() {
    delete ui;
}

// Create new game table for specified number of players
void MainWindow::on_createTable_clicked() {
    int rows = ui->rowsOfTbl->text().toInt();
    int cols = 6;
    ui->tblInputStats->setRowCount(rows + 1);
    ui->tblInputStats->setColumnCount(cols);
    ui->tblInputStats->setHorizontalHeaderLabels({"Name",
                                                  "Buy-In",
                                                  "Gross Winnings",
                                                  "Tip (Blank for 5%)",
                                                  "Post Tip",
                                                  "Net Winnings"});
    ui->tblInputStats->setColumnWidth(3, 110);
    ui->tblInputStats->setItem(rows, 0, new QTableWidgetItem(QString("TOTAL")));
}

// Calculate values and fill out new game table
void MainWindow::on_runCalcs_clicked() {
    float buyIn = 0.0, grossWin = 0.0, tip = 0.0, postTip = 0.0, netWin = 0.0;
    float totalBuyIn = 0.0, totalGross = 0.0, totalTip = 0.0, totalPost = 0.0, totalNet = 0.0;
    int rows = ui->rowsOfTbl->text().toInt();

    for (int i = 0; i < rows; i++) {
        buyIn = ui->tblInputStats->item(i, 1)->text().toFloat(); totalBuyIn += buyIn;
        grossWin = ui->tblInputStats->item(i, 2)->text().toFloat(); totalGross += grossWin;
        if (ui->tblInputStats->item(i, 3) == nullptr || ui->tblInputStats->item(i, 3)->text().isEmpty()) {
            tip = roundDown(0.05 * grossWin, 2);
        } else {
            tip = ui->tblInputStats->item(i, 3)->text().toFloat();
        }
        totalTip += tip;
        postTip = grossWin - tip; totalPost += postTip;
        netWin = postTip - buyIn; totalNet += netWin;
        ui->tblInputStats->setItem(i, 3, new QTableWidgetItem(QString::number(tip, 'f', 2)));
        ui->tblInputStats->setItem(i, 4, new QTableWidgetItem(QString::number(postTip, 'f', 2)));
        ui->tblInputStats->setItem(i, 5, new QTableWidgetItem(QString::number(netWin, 'f', 2)));
    }

    ui->tblInputStats->setItem(rows, 1, new QTableWidgetItem(QString::number(totalBuyIn, 'f', 2)));
    ui->tblInputStats->setItem(rows, 2, new QTableWidgetItem(QString::number(totalGross, 'f', 2)));
    ui->tblInputStats->setItem(rows, 3, new QTableWidgetItem(QString::number(totalTip, 'f', 2)));
    ui->tblInputStats->setItem(rows, 4, new QTableWidgetItem(QString::number(totalPost, 'f', 2)));
    ui->tblInputStats->setItem(rows, 5, new QTableWidgetItem(QString::number(totalNet, 'f', 2)));
}

// Delete new game table
void MainWindow::on_deleteTable_clicked() {
    ui->tblInputStats->setRowCount(0);
    ui->tblInputStats->setColumnCount(0);
}

// Save new game table to database
void MainWindow::on_saveGame_clicked() {
    FILE *data;
    data = fopen("data.csv", "a");

    if (!data) {
        printf("Failed to open data.csv.");
        exit(EXIT_FAILURE);
    }

    string date = ui->dateNewGame->text().toStdString();
    int noOfPlayers = ui->rowsOfTbl->text().toInt();

    fprintf(data, "%s,%d,0,0,0,0\n", date.c_str(), noOfPlayers);

    string name;
    float buyIn, grossWin, tip, postTip, netWin;

    for (int i = 0; i <= noOfPlayers; i++) {
        name = ui->tblInputStats->item(i, 0)->text().toStdString();
        buyIn = ui->tblInputStats->item(i, 1)->text().toFloat();
        grossWin = ui->tblInputStats->item(i, 2)->text().toFloat();
        tip = ui->tblInputStats->item(i, 3)->text().toFloat();
        postTip = ui->tblInputStats->item(i, 4)->text().toFloat();
        netWin = ui->tblInputStats->item(i, 5)->text().toFloat();
        fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", name.c_str(), buyIn, grossWin, tip, postTip, netWin);
    }

    fprintf(data, "END,0,0,0,0,0\n");

    fclose(data);
}

// Create night info table for a specific night from database
void MainWindow::on_btnNightInfo_clicked() {
    vector<string> nightsList = getNightsList();
    string desiredDate = ui->getDate->text().toStdString();
    if (::find(nightsList.begin(), nightsList.end(), desiredDate) == nightsList.end()) {
        ui->tblNightInfo->setRowCount(0);
        ui->tblNightInfo->setColumnCount(0);
        ui->statusBar->showMessage(QString("Date not in database."), 3000);
        ui->statusBar->setStyleSheet("QStatusBar {color: red;}");
        return;
    }
    vector<vector<string>> csvData = readData("data.csv");
    vector<vector<string>> nightInfo = getNightInfo(desiredDate, csvData);
    int rows = nightInfo.size() - 1;
    int cols = nightInfo[0].size();
    ui->tblNightInfo->setRowCount(rows);
    ui->tblNightInfo->setColumnCount(cols);
    ui->tblNightInfo->setHorizontalHeaderLabels({"Name",
                                                  "Buy-In",
                                                  "Gross Winnings",
                                                  "Tip",
                                                  "Post Tip",
                                                  "Net Winnings"});

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < cols; j++) {
            ui->tblNightInfo->setItem(i - 1, j, new QTableWidgetItem(QString(nightInfo[i][j].c_str())));
        }
    }
}

// Update tab information when switching tabs
void MainWindow::on_tabWidget_tabBarClicked(int index) {
    // Update lifetime stats
    if (index == 1) {
        vector<string> playerList = getPlayerNameList();
        int rows = int(playerList.size());
        int cols = 6;

        ui->tblLifetime->setRowCount(rows + 1);
        ui->tblLifetime->setColumnCount(cols);
        ui->tblLifetime->setHorizontalHeaderLabels({"Name",
                                                    "Buy-In",
                                                    "Gross Winnings",
                                                    "Tip",
                                                    "Post Tip",
                                                    "Net Winnings"});

        for (int i = 0; i < rows; i++) {
            string playerName = playerList[i];
            ui->tblLifetime->setItem(i, 0, new QTableWidgetItem(QString(playerName.c_str())));
            for (int j = 1; j < 6; j++) {
                ui->tblLifetime->setItem(i, j, new QTableWidgetItem(QString::number(getTotal(columns(j), playerName), 'f', 2)));
            }
        }

        ui->tblLifetime->setItem(rows, 0, new QTableWidgetItem(QString("TOTAL")));
        for (int i = 1; i < 6; i++) {
            ui->tblLifetime->setItem(rows, i, new QTableWidgetItem(QString::number(getTotal(columns(i), "TOTAL"), 'f', 2)));
        }
    }

    // Update list of nights played
    else if (index == 2) {
        ui->listNightsPlayed->clear();
        vector<string> nightsPlayed = getNightsList();
        for (int i = 0; i < int(nightsPlayed.size()); i++) {
            ui->listNightsPlayed->addItem(QString(nightsPlayed[i].c_str()));
        }
    }
}

// Use clicked date in get night info date box
void MainWindow::on_listNightsPlayed_itemClicked(QListWidgetItem *item) {
    ui->getDate->setDate(QDate::fromString(item->text(), "M/d/yyyy"));
}

// Use current date in new game date box
void MainWindow::on_btnUseCrntDate_clicked() {
    ui->dateNewGame->setDate(QDate::currentDate());
}
