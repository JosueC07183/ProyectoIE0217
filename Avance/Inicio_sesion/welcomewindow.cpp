#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "mainwindow.h"
#include "infouser.h"
#include "infoaparta_admi.h"
#include "buscaraparta.h"
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
    close();
    InfoUser *mostrarInfoUser = new InfoUser;
    mostrarInfoUser->show();

}

// Este boton servirá para añadir apartamentos.
void WelcomeWindow::on_pushButton_clicked()
{
    InfoAparta_Admi *new_Aparta = new InfoAparta_Admi();
    new_Aparta->show();
    close();

}
// Aqui se implementara un buscador para eliminar los apartas por etiqueta.
void WelcomeWindow::on_pushButton_5_clicked()
{
    BuscarAparta *quit_Aparta = new BuscarAparta();
    quit_Aparta->show();
    close();

}

