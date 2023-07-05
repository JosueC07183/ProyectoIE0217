#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
/**
 * @author Josue Salmeron Cordoba
 * @file main.cpp
 * @brief En este archivo main, su única función es mostrar la venta de inicio de sesión, de donde toma la interfaz de mainwindow
 *  para poder acceder a ella, de donde contiene los espacios para escribir el nombre de usuario, la contraseña, el botón de ingresar
 * y el botón de crear cuenta nueva, además, un botón de salir para cerrar la aplicación.
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
