/**
 * @file infoaparta.cpp
 * @author Josue Salmeron Cordona
 * @brief En este archivo se llaman los slots de la interfaz que verá el usuario una vez que se registre.
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "infoaparta.h"
#include "ui_infoaparta.h"
//#include "mainwindow.cpp"
#include <QString>
InfoAparta::InfoAparta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoAparta)

{
    ui->setupUi(this);
}

InfoAparta::~InfoAparta()
{
    delete ui;
}
