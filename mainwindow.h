#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

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

    private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
