#include <vector>
#include "main.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_infoGet_clicked() {
    vector<vector<string>> info = readData("data.csv");
    string playerName = ui->playerName->text().toStdString();
    columns desiredStat = static_cast<columns>(ui->comboBox->currentIndex() + 1);
    float total = getTotal(desiredStat, playerName, info);
    ui->txtResult->setText(QString::number(total, 'f', 2));
}

void MainWindow::on_createTable_clicked() {
    int rows = ui->rowsOfTbl->text().toInt();
    int cols = 6;
    ui->tableWidget->setRowCount(rows + 1);
    ui->tableWidget->setColumnCount(cols);
    ui->tableWidget->setHorizontalHeaderLabels({"Name", "Buy-In", "Gross Winnings", "Tip (Blank for 5%)", "Post Tip", "Net Winnings"});
    ui->tableWidget->setColumnWidth(3, 110 );
    ui->tableWidget->setItem(rows, 0, new QTableWidgetItem(QString("TOTAL")));
}

void MainWindow::on_runCalcs_clicked() {
    float buyIn = 0.0, grossWin = 0.0, tip = 0.0, postTip = 0.0, netWin = 0.0;
    float totalBuyIn = 0.0, totalGross = 0.0, totalTip = 0.0, totalPost = 0.0, totalNet = 0.0;
    int rows = ui->rowsOfTbl->text().toInt();

    for (int i = 0; i < rows; i++) {
        buyIn = ui->tableWidget->item(i, 1)->text().toFloat(); totalBuyIn += buyIn;
        grossWin = ui->tableWidget->item(i, 2)->text().toFloat(); totalGross += grossWin;
        if (ui->tableWidget->item(i, 3) == nullptr || ui->tableWidget->item(i, 3)->text().isEmpty()) {
            tip = roundDown(0.05 * grossWin, 2);
        } else {
            tip = ui->tableWidget->item(i, 3)->text().toFloat();
        }
        totalTip += tip;
        postTip = grossWin - tip; totalPost += postTip;
        netWin = postTip - buyIn; totalNet += netWin;
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(tip, 'f', 2)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(postTip, 'f', 2)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(netWin, 'f', 2)));
    }

    ui->tableWidget->setItem(rows, 1, new QTableWidgetItem(QString::number(totalBuyIn, 'f', 2)));
    ui->tableWidget->setItem(rows, 2, new QTableWidgetItem(QString::number(totalGross, 'f', 2)));
    ui->tableWidget->setItem(rows, 3, new QTableWidgetItem(QString::number(totalTip, 'f', 2)));
    ui->tableWidget->setItem(rows, 4, new QTableWidgetItem(QString::number(totalPost, 'f', 2)));
    ui->tableWidget->setItem(rows, 5, new QTableWidgetItem(QString::number(totalNet, 'f', 2)));
}
