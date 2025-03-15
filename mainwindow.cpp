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
