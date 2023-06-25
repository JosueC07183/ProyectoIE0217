/**
 * @file mainwindow.h
 * @author Este header tiene las referencias de los botones que se van a usar en la interfaz,
 * que ya fueron llamados desde mainwindow.cpp
 * @brief 
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <welcomewindow.h>
#include <vista_user.h>
#include <infoaparta.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Exit_clicked();

    void on_pushButton_NewAccount_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
