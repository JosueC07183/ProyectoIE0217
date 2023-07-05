/**
 * @file buscaraparta.cpp
 * @author Josué Salmerón Córdoba
 * @brief Esta función es una de las complejas de toda la aplicación, porque debe leer el archivo de texto correcto y desplegar la información
 * respectiva de cada apartamento, pero con la condición de que debe ser consistente, es decir, la app muestra la información respetando los límites
 * de cada bloque de información. En ese sentido, por medio de una etiqueta se logra esto, y luego con un ciclo while se muestra toda la información
 * restante. Ahora, si en el espacio donde se escribe el número de apartamento no hay nada, entonces, no se mostrará nada más que un mensaje de error
 * por parte de la aplicación. Luego, una vez que se encuentra el apartamento, habrá un botón encargado de eliminar esa información, donde se crea otro
 * archivo .txt para guardar el nuevo .txt y volver a re-escribir en el archivo original con la información actualizada.
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
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


/**
 * @brief Aqui se hace búsqueda del apartamento respectivo, de donde se muestra la información respectiva según el número de apartamento.
 * 
 */
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

        if (!apartamentoInfo.isEmpty() && !etiqueta.isEmpty())
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

/**
 * @brief Esta función elimina la información y se vuelve actualizar el nuevo archivo con los
 * apartamentos restantes.
 */
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

/**
 * @brief Esta función me retorna a la vista del admistrador para realizar las acciones correspondientes a esa ventana.
 * 
 */
void BuscarAparta::on_pushButton_3_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();
}
