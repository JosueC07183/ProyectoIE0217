#include "detalles_aparta.h"
#include "ui_detalles_aparta.h"
#include "infoaparta_admi.h"
#include "windowuser.h"
#include "vista_user.h"
#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Detalles_Aparta::Detalles_Aparta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Detalles_Aparta)
{
    ui->setupUi(this);
}

Detalles_Aparta::~Detalles_Aparta()
{
    delete ui;
}

// La idea de este metodo será ver la info del aparta A1
void Detalles_Aparta::on_pushButton_A1_clicked()
{

    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A1")){
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
            ui->textBrowser_A1->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A1->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}

// La idea de este metodo será ver la info del aparta A2
void Detalles_Aparta::on_pushButton_A2_clicked()
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A2")){
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
            ui->textBrowser_A2->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A2->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }

}

// La idea de este metodo será ver la info del aparta A3
void Detalles_Aparta::on_pushButton_A3_clicked()
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A3")){
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
            ui->textBrowser_A3->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A3->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }

}
// La idea de este metodo será ver la info del aparta A4
void Detalles_Aparta::on_pushButton_A4_clicked()
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A4")){
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
            ui->textBrowser_A4->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A4->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}
void Detalles_Aparta::on_pushButton_Buy_A4_clicked()
{
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

            if (line.startsWith("ID_Aparta:A4"))
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

        // Abrir el archivo de usuarios en modo append para agregar el registro de compra
        QFile usuariosFile("datos_usuario.txt");
        if (usuariosFile.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream usuariosOut(&usuariosFile);
            usuariosOut << "Compre A4" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Eliminación Exitosa", "El registro del apartamento se eliminó correctamente.");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para realizar la eliminación.");
    }
}

// La idea de este metodo será ver la info del aparta A5
void Detalles_Aparta::on_pushButton_A5_clicked()
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A5")){
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
            ui->textBrowser_A5->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A5->setText("No se encontró ningún apartamento con la etiqueta especificada.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}

// La idea de este metodo será ver la info del aparta A6 unicamente.
void Detalles_Aparta::on_pushButton_A6_clicked()
{
    QFile file("datos_apartamenos.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString apartamentoInfo; // Variable para almacenar la información del apartamento encontrado
        while (!in.atEnd())
        {
            QString line = in.readLine();
            if (line.startsWith("ID_Aparta:A6")){
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
            ui->textBrowser_A6->setText(apartamentoInfo); // Mostrar la información del apartamento en el textBrowser
        }
        else
        {
            ui->textBrowser_A6->setText("Apartamento vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }

}

// Aquí se compra el apartamento y se borra la info del txt.
void Detalles_Aparta::on_pushButton_BuyA6_clicked()
{
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

            if (line.startsWith("ID_Aparta:A6"))
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

        // Abrir el archivo de usuarios en modo append para agregar el registro de compra
        QFile usuariosFile("datos_usuario.txt");
        if (usuariosFile.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream usuariosOut(&usuariosFile);
            usuariosOut << "Compre A6" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Eliminación Exitosa", "El registro del apartamento se eliminó correctamente.");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para realizar la eliminación.");
    }
}




//Cerrar ventana y regresar a vista usuario.
void Detalles_Aparta::on_pushButton_clicked()
{
    WindowUser *window_User = new WindowUser();
    window_User->show();
    close();

}


