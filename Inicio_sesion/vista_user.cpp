/**
 * @file vista_user.cpp
 * @author En este archivo se las variables para crear los registros de los usuarios
 * convencionales, que con ayuda del header vista_user.h se logra implementar algunas
 * regex y omitar otros espacios para evitar complicaciones, la fecha de nacimiento por-
 * ejemplo, ya que Qt tiene un widget especial para esto. Creadas las regex, por medio de 
 * QString y los botones, lineEmail, linePass, linePass_2 y dateEdit, cuando se abre la
 * ventana para escribir los datos del usuario normal, y luego se le pedirá una contraseña
 * las cuales deben ser iguales, sino, no se podrá crear el registro. Luego, se hace un append
 * y esto permitirá crear la cantidad de usuarios que se desee en un .txt, ahora, los datos de 
 * los usuarios no se perderán, se van acumular en una lista. Después, la idea en desarrollo es 
 * usar esta misma lista para que sea reconocida desde el mainWindow, por este motivo es que se
 * usa un ReadOnly, pero esta idea aún sigue en desarrollo. Después cuando se le da en el boton 
 * de salir, se cierra la ventana actual y se muestra el mainwindow.
 * 
 * @brief 
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "vista_user.h"
#include "ui_vista_user.h"
#include <QRegularExpressionValidator>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <mainwindow.h>
Vista_User::Vista_User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vista_User)
{
    ui->setupUi(this);
// Aqui están las regex para email y pasword
    m_regExpValidator = new QRegularExpressionValidator(QRegularExpression("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$"), this);
    m_regExpValidator_2 = new QRegularExpressionValidator(QRegularExpression("[a-zA-Z0-9._-]+@[a-zA-Z0-9]+.[a-zA-Z.]{3,8}"), this);
    ui->lineEmail->setValidator(m_regExpValidator_2);
    ui->linePass->setValidator(m_regExpValidator);
    ui->linePass_2->setValidator(m_regExpValidator);
}

Vista_User::~Vista_User()
{
    delete ui;
}

// guardar los registros de los clientes en un txt.
void Vista_User::on_pushButton_Registro_clicked()
{
    QString UserEmail = ui->lineEmail->text();
    QString UserPass = ui->linePass->text();
    QString UserPass_2 = ui->linePass_2->text();
    QString DateBorn = ui->dateEdit->text();

    if (UserPass != UserPass_2)
       {
           QMessageBox::critical(this, "Error", "Las contraseñas deben ser iguales.");
           return; // Salir de la función sin guardar los datos
       }
    QFile file("datos_usuario.txt");

       // Se agregan los usuarios
       if (file.open(QIODevice::Append | QIODevice::Text))
       {
           // Crear un objeto QTextStream para escribir en el archivo
           QTextStream stream(&file);

           // Escribir los datos en el archivo
           stream << "Nombre de usuario: " << UserEmail << "\n";
           stream << "Contrasena: " << UserPass << "\n";
           stream << "Fecha nacimiento: " << DateBorn << "\n";

           // Cerrar el archivo
           file.close();

           // Mostrar un mensaje de éxito
           QMessageBox::information(this, "Registro Exitoso", "Los datos se han guardado correctamente en el archivo.");
           // Aca vacio se limpian los espacios una vez que se hace el registro
           // -del usuario
           ui->lineEmail->clear();
           ui->linePass->clear();
           ui->linePass_2->clear();
       }
       else
       {
           // Mostrar un mensaje de error si no se pudo abrir el archivo
           QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar los datos.");
       }

}
QList<QStringList> Vista_User::getUserList() const
{
    QList<QStringList> userList;

    QFile file("datos_usuario.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        while (!stream.atEnd())
        {
            QString line = stream.readLine();
            QStringList userData = line.split(":");
            userList.append(userData);
        }

        file.close();
    }

    return userList;
}


void Vista_User::on_Salir_2_clicked()
{
    close();
// Esto sirve para regresar a la ventana principal.
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();


}

