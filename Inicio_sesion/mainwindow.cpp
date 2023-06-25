/**
 * @file mainwindow.cpp
 * @author Josue Salmeron Cordoba
 * @brief En este archivo se hace el llamado de varios slots. El primero es para el registro del administrador,
 *  donde se escribe el usuario con su contraseña. Una vez que se ingresa como administrador, se abre una ventana
 * exclusiva para este. El segundo slot es para salir de la aplicación, pero antes de realizar esa acción se le pre-
 * gunta al usuario una vez más si desea salir. El tercer slot (on_pushButton_NewAccount_clicked()) es para crear un 
 * nuevo usuario que se guardará en un .txt de manera local. Cuando se cierra esta ventana se regresa a la principal,
 * la idea en desarrallo es que ahora todos los usuarios convencionales que se hayan registrado puedan ingresar y observar
 * el estado de los departamentos.
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vista_user.h"
#include "windowuser.h"
#include "infoaparta.h"
#include "./ui_infoaparta.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Nuevo metodo login del admi.
void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_name->text();
    QString Password = ui->lineEdit_Password->text();

    if (UserName== "YahirSC007" && Password == "_AnGel007."){
        QMessageBox::information(this, "YahirSC007", "Login Succes.");
        this->hide();
        WelcomeWindow *welcomepage = new WelcomeWindow();
        welcomepage->show();
    }
    else{
        QMessageBox::warning(this,"Estimado usuario","Digite la información correcta");
    }


}

// Nuevo metodo salir.
void MainWindow::on_pushButton_Exit_clicked()
{
    QMessageBox::StandardButton aux;
    aux = QMessageBox::question(this,"Estimado usuario", "Desea salir?", QMessageBox::Yes | QMessageBox::No);
    if(aux==QMessageBox::Yes){
        QApplication::quit();
    }
}

// Nuevo metodo cuenta nueva.
void MainWindow::on_pushButton_NewAccount_clicked()
{
    Vista_User *new_user = new Vista_User();

    new_user->show();
    close();
}

