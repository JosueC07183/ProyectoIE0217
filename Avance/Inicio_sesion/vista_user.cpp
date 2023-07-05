/**
 * @file vista_user.cpp
 * @author Josué Salmerón Córdoba
 * @brief Esta función tiene programado cada botón, espacio de texto para ingresar los datos de cada usuario. Los espacios de texto tienen
 * implementados expresiones regulares para controlar la información digitada. La únicas instancias realizadas son para regresar a la ventana
 * principal de la app por medio del botón salir. Lo otros includes son propios de las librerías de Qt para realizar acciones específicas. Una
 * vez que se escriben los datos del usuario con el botón: registrarse se crea y se guarda la información del usuario del usuario en un archivo de
 * texto
 * @version 0.1
 * @date 2023-07-04
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
    m_regExpValidator = new QRegularExpressionValidator(QRegularExpression("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$"), this);
    m_regExpValidator_2 = new QRegularExpressionValidator(QRegularExpression("[a-zA-Z0-9._-]+@[a-zA-Z0-9]+.[a-zA-Z.]{3,8}"), this);
    m_regExpValidator_3 = new QRegularExpressionValidator(QRegularExpression("^[a-zA-Z ]+$"), this);
    ui->lineEmail->setValidator(m_regExpValidator_2);
    ui->linePass->setValidator(m_regExpValidator);
    ui->linePass_2->setValidator(m_regExpValidator);
    ui->lineWork->setValidator(m_regExpValidator_3);
}

Vista_User::~Vista_User()
{
    delete ui;
}



/**
 * @brief Esta función se encarga de ir por cada lineEdit con el fin de ir completando el perfil del usuario, correo, contraseña,
 * fecha de nacimiento y ocupación. Ahora durante el registro si las contraseñas están incorrectas entonces mostrará un mensaje de
 * error que impide completar la información del usuario. Si toda la información está correcta, entonces se guarda en el .txt y cuando
 * se presiona el botón registrar, entonces todos los espacios de lineEdit se borran, lo que ayuda a crear otro usuario con más facilidad.
 *
 */
void Vista_User::on_pushButton_Registro_clicked()
{
    QString UserEmail = ui->lineEmail->text();
    QString UserPass = ui->linePass->text();
    QString UserPass_2 = ui->linePass_2->text();
    QString DateBorn = ui->dateEdit->text();
    QString Trabajo = ui->lineWork->text();

    if (UserPass != UserPass_2)
       {
           QMessageBox::critical(this, "Error", "Las contraseñas deben ser iguales.");
           return;
       }
    QFile file("datos_usuario.txt");
     if (UserEmail.isEmpty() && UserPass.isEmpty() && UserPass_2.isEmpty() && Trabajo.isEmpty()) {
                QMessageBox::warning(this, "Error", "hay campos vacios.");
                return;
            }
       if (file.open(QIODevice::Append | QIODevice::Text))
       {
           QTextStream stream(&file);
           stream << "Nombre de usuario: " << UserEmail << "\n";
           stream << "Contrasena: " << UserPass << "\n";
           stream << "Fecha nacimiento: " << DateBorn << "\n";
           stream << "Ocupacion: "<<Trabajo <<"\n";
           file.close();

           // Mostrar un mensaje de éxito
           QMessageBox::information(this, "Registro Exitoso", "Los datos se han guardado correctamente en el archivo.");
           ui->lineEmail->clear();
           ui->linePass->clear();
           ui->linePass_2->clear();
           ui->lineWork->clear();
           ui->dateEdit->clear();
       }
       else
       {
           QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar los datos.");
       }

}
/**
 * @brief Esta función se encarga de acomodar la información de cada usuario, de tal manera que se ordene tal como se digitó
 * anteriormente, de lo contrario habrán inconsistencias cuando se trate de ver está información.
 *
 * @return QList<QStringList>
 */
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

/**
 * @brief Finalmente, se accede a la clase mainwindow cuando se presione el botón de salir, esto para que el nuevo usuario puede acceder
 * a la información de los apartamentos y la posibilidad de comprar uno.
 *
 */
void Vista_User::on_Salir_2_clicked()
{
    close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();


}
