#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_btnAdd_clicked() {
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecondNum->text().toInt();
    result = firstNum + secondNum;
    ui->txtResult->setText(QString::number(result));
}

void MainWindow::on_btnSub_clicked(){
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecondNum->text().toInt();
    result = firstNum - secondNum;
    ui->txtResult->setText(QString::number(result));
}

void MainWindow::on_btnMult_clicked() {
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecondNum->text().toInt();
    result = firstNum * secondNum;
    ui->txtResult->setText(QString::number(result));
}

void MainWindow::on_btnDiv_clicked() {
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecondNum->text().toInt();
    result = firstNum / secondNum;
    ui->txtResult->setText(QString::number(result));
}
