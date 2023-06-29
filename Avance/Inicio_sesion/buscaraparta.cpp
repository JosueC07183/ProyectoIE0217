#include "buscaraparta.h"
#include "ui_buscaraparta.h"
#include "mainwindow.h"
#include <QRegularExpressionValidator>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
BuscarAparta::BuscarAparta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuscarAparta)
{
    ui->setupUi(this);
    m_regExpVal_5 = new QRegularExpressionValidator(QRegularExpression("^A[1-6]$"), this);
    ui->lineEdit->setValidator(m_regExpVal_5); // Buscar del apartamento.
}

BuscarAparta::~BuscarAparta()
{
    delete ui;
}


// Aqui se busca el apartamento por etiqueta.
void BuscarAparta::on_pushButton_clicked()
{
    QString etiqueta = ui->lineEdit->text(); // Obtener la etiqueta del apartamento a buscar
    QFile file("datos_apartamenos.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado

        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:") && line.contains(etiqueta))
            {
                // Se encontró el apartamento con la etiqueta deseada, se guarda su información
                apartamentoInfo += line + "\n";

                while (!in.atEnd())
                {
                    line = in.readLine();
                    if (line.startsWith("ID_Aparta:"))
                    {
                        // Se encontró otra etiqueta de apartamento, se sale del bucle interno
                        break;
                    }
                    apartamentoInfo += line + "\n";
                }

                break;
            }
        }
        file.close();

        if (!apartamentoInfo.isEmpty())
        {
            ui->textBrowser->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else
    {
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}

// Esto es para eliminar el apartamento del txt.
void BuscarAparta::on_pushButton_2_clicked()
{
    QString etiqueta = ui->lineEdit->text(); // Obtener la etiqueta del apartamento a eliminar

    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe. No se puede realizar la eliminación.");
        return;
    }

    QFile inputFile("datos_apartamenos.txt");
    QFile tempFile("temp.txt");

    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text) && tempFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream in(&inputFile);
        QTextStream out(&tempFile);
        bool apartamentoEncontrado = false;
        bool omitirLinea = false;

        while (!in.atEnd())
        {
            QString line = in.readLine();

            if (line.startsWith("ID_Aparta:") && line.contains(etiqueta))
            {
                // Se encontró el apartamento con la etiqueta deseada, omitir su escritura en el archivo temporal
                apartamentoEncontrado = true;
                omitirLinea = true;
                continue;
            }

            if (line.startsWith("ID_Aparta:"))
            {
                // Si se encuentra una nueva etiqueta, dejar de omitir las líneas
                omitirLinea = false;
            }

            if (!omitirLinea)
            {
                // Escribir la línea en el archivo temporal si no se debe omitir
                out << line << "\n";
            }
        }

        inputFile.close();
        tempFile.close();

        if (!apartamentoEncontrado)
        {
            QMessageBox::warning(this, "Error", "No se encontró ningún apartamento con la etiqueta especificada.");
            return;
        }

        // Eliminar el archivo de origen
        inputFile.remove();

        // Renombrar el archivo temporal como el archivo de origen
        tempFile.rename("datos_apartamenos.txt");

        QMessageBox::information(this, "Eliminación Exitosa", "El registro del apartamento se eliminó correctamente.");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para realizar la eliminación.");
    }
}

// Esto es para volver al menu principal.
void BuscarAparta::on_pushButton_3_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();
}
