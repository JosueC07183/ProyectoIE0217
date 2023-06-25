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

/*void Vista_User::on_pushButton_clicked()
{
    close();
// Esto sirve para regresar a la ventana principal.
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();

}*/

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

