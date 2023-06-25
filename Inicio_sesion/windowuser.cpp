/**
 * @file windowuser.cpp
 * @author Josue Salmeron Cordoba
 * @brief Este archivo es el encargado de realizar las funciones a nivel de usuario.
 * La creación de los métodos/slots aún se encuentran en desarollo.
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "windowuser.h"
#include "ui_windowuser.h"

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
