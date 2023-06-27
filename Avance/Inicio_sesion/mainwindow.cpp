#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "vista_user.h"
#include "windowuser.h"
#include "infoaparta.h"
#include "./ui_infoaparta.h"
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

// Nuevo metodo login del admi.
void MainWindow::on_pushButton_Login_clicked()
{
        QString UserName = ui->lineEdit_User_name->text();
        QString Password = ui->lineEdit_Password->text();
// Se verifica los credenciales del administrador.
        if (UserName == "YahirSC007" && Password == "_AnGel007.") {
            QMessageBox::information(this, "YahirSC007", "Bienvenido Yahir.");
            this->hide();
// Si se digitan correctamente los datos, se muestra la ventana correspondiente al administrador
            WelcomeWindow *welcomepage = new WelcomeWindow();
            welcomepage->show();
        }
// Luego, se lee el archivo donde se almacenan los registros de los usuarios convencionales.
        else {
            QFile file("datos_usuario.txt");
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios."); //Si el archivo no existe entonces, muestra un error.
                return;
            }
// El siguiente loop es para comprobar los registros guardados en el txt, como cada registro inicia-
// con Nombre de usuario, entonces esto permite establecer un condicional para comprobar tanto el-
// nombre del usuario con su respectiva contraseña.
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
// Después se cierra el archivo txt y se muestra un mensaje de bienvenida, luego la ventana
// correspondiente a los usuarios convencionales. Ahora, si el registro de algún usuario no-
// entonces el programa mostrará un error.
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

