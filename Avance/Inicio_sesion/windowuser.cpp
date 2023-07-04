#include "windowuser.h"
#include "ui_windowuser.h"
//#include "infoaparta.h"
#include "mainwindow.h"
#include "detalles_aparta.h"
WindowUser::WindowUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUser)
{
    ui->setupUi(this);
}

WindowUser::~WindowUser()
{
    delete ui;
}

//Esto permite desplegar otra ventana para ver los apartamentos.
void WindowUser::on_pushButtonApartasON_clicked()
{
    Detalles_Aparta *list_Aparta = new Detalles_Aparta();
    list_Aparta->show();
    close();

}

// Esto permite regresar a la ventana principal de usuario.
void WindowUser::on_pushButtonExit_clicked()
{
    MainWindow *win_Log = new MainWindow();
    win_Log->show();
    close();

}

