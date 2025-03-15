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
    int cols = ui->colsOfTbl->text().toInt();
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setColumnCount(cols);
    ui->tableWidget->setHorizontalHeaderLabels({"Name", "Buy-In", "Gross Winnings", "Tip (Blank for 5%)", "Post Tip", "Net Winnings"});
}


void MainWindow::on_runCalcs_clicked() {
    float buyIn = ui->tableWidget->item(0, 1)->text().toFloat();
    float grossWin = ui->tableWidget->item(0, 2)->text().toFloat();
    float netWin = grossWin - buyIn;
    ui->tableWidget->setItem(0, 5, new QTableWidgetItem(netWin));
}
