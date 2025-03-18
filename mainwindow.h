// PokerHub main window header file
// Written by Roman Rodriguez

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Include statements
#include "qlistwidget.h"
#include <QMainWindow>

// Namespace definition
QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

// MainWindow class definition
class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_createTable_clicked();

        void on_runCalcs_clicked();

        void on_deleteTable_clicked();

        void on_saveGame_clicked();

        void on_btnNightInfo_clicked();

        void on_tabWidget_tabBarClicked(int index);

        void on_listNightsPlayed_itemClicked(QListWidgetItem *item);

        void on_btnUseCrntDate_clicked();

    private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
