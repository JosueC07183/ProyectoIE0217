/**
 * @file welcomewindow.cpp
 * @author Josue Salmeron Cordoba
 * @brief Esta funcion se encarga de mostrar la primer ventana que se 
 * muestra los espacios por completar para el registro de los usuarios.
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "welcomewindow.h"
#include "ui_welcomewindow.h"

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
}

