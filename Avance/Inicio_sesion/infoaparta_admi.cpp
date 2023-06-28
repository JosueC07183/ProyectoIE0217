#include "infoaparta_admi.h"
#include "ui_infoaparta_admi.h"
#include <QRegularExpressionValidator>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include <mainwindow.h>

InfoAparta_Admi::InfoAparta_Admi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoAparta_Admi)
{
    ui->setupUi(this);
//Se aplican las regex a los campos necesarios.
    QString regexPattern = "^\\d+(\\.\\d+)?$";
    QRegExp regex(regexPattern);
    m_regExpVal = new QRegularExpressionValidator(QRegularExpression("^[0-9]+(\\.[0-9]+)?$"), this);
    m_regExpVal_2 = new QRegularExpressionValidator(QRegularExpression("^[A-Za-z ]+$"), this);
    m_regExpVal_3 = new QRegularExpressionValidator(QRegularExpression("^[0-9]+$"), this);
    m_regExpVal_4 = new QRegularExpressionValidator(QRegularExpression("^(?i:si|no)$"), this);
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

// Este método es para añadir los apartamentos al .txt
void InfoAparta_Admi::on_pushButton_clicked()
{

    QString numCuartos = ui->lineEdit_numCuartos->text();
    QString numPisos = ui->lineEdit_numPisos->text();
    QString descDetails = ui->lineEdit_Details->text();
    QString servCochera = ui->lineEdit_servCochera->text();
    QString servPublico = ui->lineEdit_ServPub->text();
    QString numPrecio = ui->lineEdit_Precio->text();
    QFile file("datos_apartamenos.txt");
    // Con esto se arregla la pulga de guardos registros con espacios vacíos.
    if (numCuartos.isEmpty() && numPisos.isEmpty() && descDetails.isEmpty() &&
            servCochera.isEmpty() && servPublico.isEmpty() && numPrecio.isEmpty()) {
            QMessageBox::warning(this, "Error", "hay campos vacios.");
            return;  // Salir del método sin guardar los registros
        }

    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        // Crear un objeto QTextStream para escribir en el archivo
        QTextStream stream(&file);

        // Escribir los datos en el archivo
        stream << "Cantidad de cuartos: " << numCuartos << "\n";
        stream << "Numero de Pisos: " << numPisos << "\n";
        stream << "Detalles: " << descDetails << "\n";
        stream << "Tiene cochera: " << servCochera << "\n";
        stream << "Incluye servicios: " << servPublico << "\n";
        stream << "Precio: " << numPrecio << "\n";

        // Cerrar el archivo
        file.close();

        // Mostrar un mensaje de éxito
        QMessageBox::information(this, "Registro Exitoso", "Los datos de los apartamentos se guardaron correctamente");
        // Aca vacio se limpian los espacios una vez que se hace el registro
        // -del usuario
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
//Este botón es para salir.
void InfoAparta_Admi::on_pushButton_2_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();

}

