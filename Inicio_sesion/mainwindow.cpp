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

