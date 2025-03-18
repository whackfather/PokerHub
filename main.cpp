// PokerHub
// Written by Roman Rodriguez

// Include statements
#include <QApplication>
#include <QIcon>
#include "mainwindow.h"
using namespace std;

// Main function
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(742, 535);
    w.setWindowTitle("PokerHub");
    w.show();
    return a.exec();
}
