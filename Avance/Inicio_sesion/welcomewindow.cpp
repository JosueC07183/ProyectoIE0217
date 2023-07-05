/**
 * @file welcomewindow.cpp
 * @author Josué Salmerón Córdoba
 * @brief La función de esta ventana es mostrar los botones que le pertenecen a la vista del administrador, únicamente él podrá
 * acceder a cada función que éstos realizan. Se hacen varias instancias de otros headers porque serán necesarios para poder acceder
 * al contenido de estos. Primero, la instancia a mainwindow, se trata de una acción muy básica: hay un botón que dice: Salir, a la hora
 * de presionarlo lo que hace es regresar a la ventana principal. La instancia de infouser es para ver la información de los usuarios un textbrowser.
 * La instancia de infoaparta_admi es para poder agregar apartamentos. Y la última es para buscar apartamentos y tener una idea si ya fue o no vendido.
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "mainwindow.h"
#include "infouser.h"
#include "infoaparta_admi.h"
#include "buscaraparta.h"
WelcomeWindow::WelcomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
/**
 * @brief Lo que hace este método es que a la hora de presionar el botón salir, la app regresará a la ventana principal.
 *
 */
void WelcomeWindow::on_pushButton_2_clicked()
{
    close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();

}

/**
 * @brief Esta función es muy importante porque primero hace una instancia por medio de un puntero a lo que hay en InfoUser, y
 * así poder observar la información almacenada en el archivo .txt con el contenido de los clientes.
 *
 */

void WelcomeWindow::on_pushButton_3_clicked()
{
    close();
    InfoUser *mostrarInfoUser = new InfoUser;
    mostrarInfoUser->show();

}

/**
 * @brief Primero se accede a la clase InfoAparta_Admi para poder acceder a esta ventana y así poder construir un nuevo apartamento, ahora,
 * si ya el apartamento está construido, la aplicación no dejará al administrar la construcción de uno nuevo si ya existe. La única manera que
 * le permita hacer esto es que no se haya construido o que ya haya sido comprado por algún cliente.
 *
 */
void WelcomeWindow::on_pushButton_clicked()
{
    InfoAparta_Admi *new_Aparta = new InfoAparta_Admi();
    new_Aparta->show();
    close();

}
/**
 * @brief Con este botón se quiere consultar la información de cada apartamento, pero antes se debe acceder a la clase: BuscarAparta para tener
 * la referencia de la información que apunta a lo que se anda buscando. Hecho esto, entonces se accede al archivo .txt creado para almacenar estos
 * datos y mostrar de manera separada la información de cada apartamento. Ahora, si el botón no tiene ninguna etiqueta para buscar el apartamento
 * simplemente no mostrará un mensaje con que no ha encontrado el archivo o la etiqueta para desplegar la información del apartamento. Si ya está vendido
 * mostrará el mismo mensaje. Entonces para saber esto es mejor consultarlo en la función del botón anterior.
 *
 */
void WelcomeWindow::on_pushButton_5_clicked()
{
    BuscarAparta *quit_Aparta = new BuscarAparta();
    quit_Aparta->show();
    close();

}
