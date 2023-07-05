/**
 * @file windowuser.cpp
 * @author Josué Salmerón Córdoba
 * @brief Esta función es la encarga de mostrar la interfaz para los usuarios normales, donde dispondran dos botones, uno para salir de esa
 * ventana, es decir, cerrarla y la otra función es para mostrar una ventana con 6 pestañas en total con que contendrá la información de los
 * apartamentos de Yahir (el dueño/administrador) del poblado.
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "windowuser.h"
#include "ui_windowuser.h"
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

/**
 * @brief Primero se tiene que acceder a la clase Detalles_Aparta para poder acceder a la información de los apartamentos disponibles,
 * este botón solo mostrará la información de los apartamentos, así, puede que no esteń construidos o puede que ya fueron vendidos, entonces
 * si esto pasa el usuario podrá seguir buscando más apartamentos en las otras pestañas por medio del boton: "ver info".
 *
 */
void WindowUser::on_pushButtonApartasON_clicked()
{
    Detalles_Aparta *list_Aparta = new Detalles_Aparta();
    list_Aparta->show();
    close();

}

/**
 * @brief Este botón se encarga de cerrar la ventana actual y mostrar la ventana principal.
 *
 */
void WindowUser::on_pushButtonExit_clicked()
{
    MainWindow *win_Log = new MainWindow();
    win_Log->show();
    close();

}
