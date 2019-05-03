#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <interfazpersonal.h>
#include <interfazordenes.h>

namespace Ui {

class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_personal_clicked();


    void on_inventario_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
