/**
 * @file welcomewindow.h
 * @author Josué Salmerón Córdoba
 * @brief En este header note que se instancia 5 botones, por lo que solo estos tienen alguna función programada. Se hacen de manera
 * pública (aunque no es el caso) porque podrían ser usados por otras ventanas.
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class WelcomeWindow;
}
/**
 * @brief Esta es la clase que se instancia en el mainwindow para poder mostrar de manera inmediata el contenido para el administrador, sin
 * ella, la funciones que se le dan al administrador no tendría lugar, es decir, no podría construir apartamentos, consultar el estado de los
 * apartamentos, saber si tiene o no clientes, y el estado de sus ventas.
 *
 */
class WelcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    ~WelcomeWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
