#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "mainwindow.h"
#include "infouser.h"
WelcomeWindow::WelcomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_2_clicked()
{
    close();
// Esto sirve para regresar a la ventana principal.
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();

}

// Este método será el encargado de mostrar la información de los apartamentos y usuarios.

void WelcomeWindow::on_pushButton_3_clicked()
{
    InfoUser *mostrarInfoUser = new InfoUser;
    mostrarInfoUser->show();

}

