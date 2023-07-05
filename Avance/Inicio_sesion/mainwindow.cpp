/**
 * @file mainwindow.cpp
 * @author Josué Salmerón Córdoba
 * @brief Este archivo almacena las funciones de todos los botones que se muestran en la primera pantalla de la aplicación. 
 * Cada uno de estos botones realiza una funcion diferente para interactuar con el usuario. La idea es poder ingresar a las
 * demás ventanas para realizar cierta acción. Por su parte, el dueño/administrador tiene funciones diferentes a las que posee
 * un usuario normal, entonces dependiendo si se trata del administrador, la aplicación te llevará a la venta del administrador,
 * y si es un usuario, implica que la aplicación lo llevará a la ventana creada para el usuario.
 * @version 0.1
 * @date 2023-07-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vista_user.h"
#include "windowuser.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

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
/**
 * @brief Esta función se encarga de crear los datos del administrador, nombre de usuario y contraseña. El programa
 * es capaz de reconocer la cadena de texto correspondiente al administrador. Al hacer este reconocimiento, entonces
 * la aplicación muestra el mainwindow que le pertenece al administrador. Luego, si no existe ningún usuario, el programa
 * muestra un mensaje: "el archivo no existe". Pero si ya existen uno o varios usuarios, entonces la app crea un archivo .txt
 * que guardará los datos del usuario. De esa manera, si no se trata del administrador, la app entenderá que es un usuario normal
 * y le mostrará todo lo que se almacena en en la ventana: WindowUser.
 */
void MainWindow::on_pushButton_Login_clicked()
{
        QString UserName = ui->lineEdit_User_name->text();
        QString Password = ui->lineEdit_Password->text();
        if (UserName == "YahirSC007" && Password == "1234") {
            QMessageBox::information(this, "YahirSC007", "Bienvenido Yahir.");
            this->hide();
            WelcomeWindow *welcomepage = new WelcomeWindow();
            welcomepage->show();
        }
        else {
            QFile file("datos_usuario.txt");
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios."); //Si el archivo no existe entonces, muestra un error.
                return;
            }
            QTextStream in(&file);
            bool userFound = false;
            while (!in.atEnd()) {
                QString line = in.readLine();
                if (line.startsWith("Nombre de usuario:")) {
                    QString storedUserName = line.section(':', 1).trimmed();
                    QString storedPassword = in.readLine().section(':', 1).trimmed();

                    if (UserName == storedUserName && Password == storedPassword) {
                        userFound = true;
                        break;
                    }
                }
            }
            file.close();

            if (userFound) {
                QMessageBox::information(this, "Inicio de sesión", "Bienvenido estimado usuario.");
                this->hide();
                WindowUser *welcomeuser = new WindowUser();
                welcomeuser->show();
            } else {
                QMessageBox::warning(this, "Inicio de sesión", "Nombre de usuario o contraseña incorrectos.");
            }
        }

}

/**
 * @brief La función de este botón es para preguntarle al usuario si de verdad desea salir de la aplicación, por lo que
 * se ha diseñado tipo botón de pregunta para que sea más intuitivo.
 * 
 */
void MainWindow::on_pushButton_Exit_clicked()
{
    QMessageBox::StandardButton aux;
    aux = QMessageBox::question(this,"Estimado usuario", "Desea salir?", QMessageBox::Yes | QMessageBox::No);
    if(aux==QMessageBox::Yes){
        QApplication::quit();
    }
}

/**
 * @brief Este botón hace una instancia de la clase: Vista_User, esto orientado para los usuarios convencionales, por lo que la
 * app lo va reconocer y mostrará la ventana correspondiente. Así, es necesario realizar esta instancia de esta clase y poder acceder sin
 * ningún problema al contenido de esa ventana, de lo contrario, mostrará un error.
 * 
 */
void MainWindow::on_pushButton_NewAccount_clicked()
{
    Vista_User *new_user = new Vista_User();

    new_user->show();
    close();
}

