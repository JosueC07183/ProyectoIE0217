/**
 * @file infouser.cpp
 * @author Josué Salmerón Córdoba
 * @brief Esta función le pertenece a la vista del administrador, aquí él podrá observar la lista de sus clientes. Además, podrá saber
 * cual apartamento compraron.
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "infouser.h"
#include "ui_infouser.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "welcomewindow.h"
#include <QListWidgetItem>
InfoUser::InfoUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoUser)
{
    ui->setupUi(this);
}

InfoUser::~InfoUser()
{
    delete ui;
}
/**
 * @brief Aquí accede al archivo de texto e imprime su contenido conforme éste se va actualizando.
 * 
 */
void InfoUser::on_pushButton_clicked()
{
    QFile archivo("datos_usuario.txt");
    if(!archivo.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", archivo.errorString());
    QTextStream in(&archivo);

    ui->textBrowser_InfoUser->setText(in.readAll());

}

/**
 * @brief Esta función se encarga de cerrar la ventana actual y volver a la ventana WelcomeWindow, donde tendrá la oportunidad
 * de realizar otra acción.
 * 
 */
void InfoUser::on_pushButton_2_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();
}

