/**
 * @file detalles_aparta.cpp
 * @author Josué Salmerón Córdoba
 * @brief Esta función hace la instancia con infoaparta_admi, ya que al ingresar a la ventana con las pestañas de los apartamentos habrá dos
 * botones que primero permiten ver la información de los apartamentos, y el otro comprar el apartamento. La segunda función es la que se implementa
 * aquí para poder almacenar el registro de compra del usuario que presionó el botón de comprar, es decir, una vez que lo compra, al final de su información
 * se le agregará una pequeña línea: Compré A1, A2...A6, dependiendo en que pestaña se encuentre se le asignará esta pequeña línea, lo cual sirve
 * para que el administrador pueda saber quién compró dicho apartamento, y así, llevar un control de sus registros.
 * @version 0.1
 * @date 2023-07-05
 *
 * @copyright Copyright (c) 2023
 *
 */
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

/**
 * @brief Esta función muestra la información del apartamento A1.
 *
 */
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
            ui->textBrowser_A1->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}
/**
 * @brief Este metodo elimina la informacion del aparta A1, pues a la hora de comprarlo se borra el registro.
 *
 */

void Detalles_Aparta::on_pushButton_Buy_A1_clicked()
{
    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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

            if (line.startsWith("ID_Aparta:A1"))
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
            QMessageBox::warning(this, "Error", "El apartamento no está disponible.");
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
            usuariosOut << "Compre A1" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}
/**
 * @brief Esta función muestra la información del apartamento A2.
 *
 */
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
            ui->textBrowser_A2->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo.");
    }

}
/**
 * @brief Este metodo elimina la informacion del aparta A2, pues a la hora de comprarlo se borra el registro.

 *
 */
void Detalles_Aparta::on_pushButton_Buy_A2_clicked()
{
    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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

            if (line.startsWith("ID_Aparta:A2"))
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
            QMessageBox::warning(this, "Error", "No se encontró ningún apartamento.");
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
            usuariosOut << "Compre A2" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}
/**
 * @brief Esta función muestra la información del apartamento A3.
 *
 */
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
            ui->textBrowser_A3->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }

}
/**
 * @brief Este metodo elimina la informacion del aparta A3, pues a la hora de comprarlo se borra el registro.

 *
 */
void Detalles_Aparta::on_pushButton_Buy_A3_clicked()
{
    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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

            if (line.startsWith("ID_Aparta:A3"))
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
            QMessageBox::warning(this, "Error", "El apartamento no está disponible.");
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
            usuariosOut << "Compre A3" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}

/**
 * @brief Esta función muestra la información del apartamento A4.
 *
 */
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
            ui->textBrowser_A4->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}
/**
 * @brief Este metodo elimina la informacion del aparta A4, pues a la hora de comprarlo se borra el registro.

 *
 */
void Detalles_Aparta::on_pushButton_Buy_A4_clicked()
{
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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
            QMessageBox::warning(this, "Error", "El apartamento no está disponible.");
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

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}

/**
 * @brief Esta función muestra la información del apartamento A5.
 *
 */
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
            ui->textBrowser_A5->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }
}
/**
 * @brief Este metodo elimina la informacion del aparta A5, pues a la hora de comprarlo se borra el registro.

 *
 */
void Detalles_Aparta::on_pushButton_Buy_A5_clicked()
{
    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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

            if (line.startsWith("ID_Aparta:A5"))
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
            QMessageBox::warning(this, "Error", "El apartamento no está disponible.");
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
            usuariosOut << "Compre A5" << "\n";
            usuariosFile.close();
        }
        else
        {
            // Mostrar un mensaje de error si no se pudo abrir el archivo de usuarios
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo de usuarios para guardar el registro de la compra.");
            return;
        }

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}
/**
 * @brief Esta función muestra la información del apartamento A6.
 *
 */
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
            ui->textBrowser_A6->setText("Apartamento en construcción o ya fue vendido.");
        }
    }
    else{
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para buscar los datos.");
    }

}

/**
 * @brief Este metodo elimina la informacion del aparta A6, pues a la hora de comprarlo se borra el registro.
 *
 */
void Detalles_Aparta::on_pushButton_BuyA6_clicked()
{
    // Verificar la existencia del archivo
    if (!QFile::exists("datos_apartamenos.txt"))
    {
        QMessageBox::warning(this, "Error", "El archivo de datos no existe.");
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
            QMessageBox::warning(this, "Error", "El apartamento no está disponible.");
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

        QMessageBox::information(this, "Compra Exitosa", "El apartamento ahora te pertenece");
    }
    else
    {
        // Mostrar un mensaje de error si no se pudieron abrir los archivos
        QMessageBox::warning(this, "Error", "No se pudo realizar la compra.");
    }
}

/**
 * @brief Esta función accede a la clase WindowUser para poder regresar a la ventana del usuario normal una vez que se presiona el botón de
 * salir.
 *
 */
void Detalles_Aparta::on_pushButton_clicked()
{
    WindowUser *window_User = new WindowUser();
    window_User->show();
    close();

}
