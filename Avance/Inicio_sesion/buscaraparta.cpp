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
    ui->lineEdit->setValidator(m_regExpVal_5);
}

BuscarAparta::~BuscarAparta()
{
    delete ui;
}



void BuscarAparta::on_pushButton_clicked()
{
    QString etiqueta = ui->lineEdit->text(); 
    QFile file("datos_apartamenos.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; 

        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:") && line.contains(etiqueta))
            {
                apartamentoInfo += line + "\n";

                while (!in.atEnd())
                {
                    line = in.readLine();
                    if (line.startsWith("ID_Aparta:"))
                    {
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
            ui->textBrowser->setText(apartamentoInfo);
        }
        else
        {
            ui->textBrowser->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else
    {

        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}


void BuscarAparta::on_pushButton_2_clicked()
{
    QString etiqueta = ui->lineEdit->text();


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
             
                apartamentoEncontrado = true;
                omitirLinea = true;
                continue;
            }

            if (line.startsWith("ID_Aparta:"))
            {
             
                omitirLinea = false;
            }

            if (!omitirLinea)
            {
             
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


        inputFile.remove();


        tempFile.rename("datos_apartamenos.txt");

        QMessageBox::information(this, "Eliminación Exitosa", "El registro del apartamento se eliminó correctamente.");
    }
    else
    {

        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para realizar la eliminación.");
    }
}


void BuscarAparta::on_pushButton_3_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();
}
