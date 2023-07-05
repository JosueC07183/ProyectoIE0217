/**
 * @file infoaparta_admi.cpp
 * @author Josué Salmerón Córdoba
 * @brief Este archivo contiene todos los lineEdit necesarios para construir un apartamento, cada uno de ellos tiene un regex para tener 
 * consistencia en la información digitada. Cuando se escribe todo correctamente, se puede presionar el botón: añadir, pero si hay espacios
 *  vacíos, este botón no va funcionar, por lo que no podrá crear el archivo .txt destinado a guardar todos estos registros. Luego, si hay 
 *  un apartamento ya construido, es decir, no se ha vendido, entonces no se podrá construir uno con el mismo número o etiqueta, por lo que 
 *  al app mostrará un msj de error. Finalmente, se instancia la clase de WelcomeWindow para poder regresar a la primer vista del administrador.
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "infoaparta_admi.h"
#include "ui_infoaparta_admi.h"
#include <QRegularExpressionValidator>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <mainwindow.h>
#include <welcomewindow.h>

InfoAparta_Admi::InfoAparta_Admi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoAparta_Admi)
{
    ui->setupUi(this);
    m_regExpVal = new QRegularExpressionValidator(QRegularExpression("^[0-9]+(\\.[0-9]+)?$"), this);
    m_regExpVal_2 = new QRegularExpressionValidator(QRegularExpression("^[A-Za-z ]+$"), this);
    m_regExpVal_3 = new QRegularExpressionValidator(QRegularExpression("^[0-9]+$"), this);
    m_regExpVal_4 = new QRegularExpressionValidator(QRegularExpression("^(?i:si|no)$"), this);
    m_regExpVal_5 = new QRegularExpressionValidator(QRegularExpression("^A[1-6]$"), this);
    ui->lineEdit_Label->setValidator(m_regExpVal_5);
    ui->lineEdit_numCuartos->setValidator(m_regExpVal_3);
    ui->lineEdit_numPisos->setValidator(m_regExpVal_3);
    ui->lineEdit_Precio->setValidator(m_regExpVal);
    ui->lineEdit_Details->setValidator(m_regExpVal_2);
    ui->lineEdit_servCochera->setValidator(m_regExpVal_4);
    ui->lineEdit_ServPub->setValidator(m_regExpVal_4);


}

InfoAparta_Admi::~InfoAparta_Admi()
{
    delete ui;
}

/**
 * @brief Cuando se ha escrito la información correctamente en los LineEdit, entonces se puede crear el archivo .txt para guardar
 * la información de los apartamentos a construir. Si hay espacios vacíos no se podrá guardar la información. Finalmente, cuando se hace el
 * registro se borran todos los lineEdit para construir uno nuevo, respetando las pautas para hacerlo.
 * 
 */
void InfoAparta_Admi::on_pushButton_clicked()
{
    QString idAparta = ui->lineEdit_Label->text();
    QString numCuartos = ui->lineEdit_numCuartos->text();
    QString numPisos = ui->lineEdit_numPisos->text();
    QString descDetails = ui->lineEdit_Details->text();
    QString servCochera = ui->lineEdit_servCochera->text();
    QString servPublico = ui->lineEdit_ServPub->text();
    QString numPrecio = ui->lineEdit_Precio->text();
    QFile file("datos_apartamenos.txt");
    if (isIdApartaExist(idAparta)) {
            QMessageBox::warning(this, "Error", "El ID del apartamento ya existe.");
            return;  // Salir del método sin guardar los registros
        }
    if (numCuartos.isEmpty() || numPisos.isEmpty() || descDetails.isEmpty() ||
               servCochera.isEmpty() || servPublico.isEmpty() || numPrecio.isEmpty() || idAparta.isEmpty() ) {
           QMessageBox::warning(this, "Error", "Hay campos vacíos.");
           return;
      }
    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);

        // Escribir los datos en el archivo
        stream << "ID_Aparta:"<< idAparta << "\n";
        stream << "Cantidad de cuartos: " << numCuartos << "\n";
        stream << "Numero de Pisos: " << numPisos << "\n";
        stream << "Detalles: " << descDetails << "\n";
        stream << "Tiene cochera: " << servCochera << "\n";
        stream << "Incluye servicios: " << servPublico << "\n";
        stream << "Precio: " << numPrecio << "\n";

        // Cerrar el archivo
        file.close();

        // Mostrar un mensaje de éxito
        QMessageBox::information(this, "Registro Exitoso", "Los datos del apartamento se guardaron correctamente");
        ui->lineEdit_Label->clear();
        ui->lineEdit_numCuartos->clear();
        ui->lineEdit_numPisos->clear();
        ui->lineEdit_Details->clear();
        ui->lineEdit_servCochera->clear();
        ui->lineEdit_ServPub->clear();
        ui->lineEdit_Precio->clear();
    }
    else
    {
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar los datos.");
    }

}
/**
 * @brief Esta función es muy importante porque no permite sobre-escribir la información de un apartamento a menos que ya haya sido comprado
 * o aún no se haya construido.
 * 
 * @param idAparta: etiqueta del apartamento.
 * @return true: si esto se cumple, entonces, no deja crear el apartamento.
 * @return false: si no existe, entonces se puede construir el apartamento.
 */
bool InfoAparta_Admi::isIdApartaExist(const QString& idAparta)
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:") && line.contains(idAparta))
            {
                file.close();
                return true;
            }
        }
        file.close();
    }
    return false;
}
/**
 * @brief Esta función permite regresar a la ventana del administrador, donde puede realizar otras funciones.
 * 
 */
void InfoAparta_Admi::on_pushButton_2_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();

}

