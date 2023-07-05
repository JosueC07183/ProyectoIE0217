/**
 * @file windowuser.h
 * @author Josué Salmerón Córdoba
 * @brief Esta ventana tendrá solo dos botones que permitirán el desplazamiento de la ventana con la información de los apartamentos y
 * la oportunidad de comprarlos (esto se explicará en el archivo: detalles_aparta.cpp).
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef WINDOWUSER_H
#define WINDOWUSER_H

#include <QWidget>

namespace Ui {
class WindowUser;
}


class WindowUser : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUser(QWidget *parent = nullptr);
    ~WindowUser();

private slots:
    void on_pushButtonApartasON_clicked();

    void on_pushButtonExit_clicked();

private:
    Ui::WindowUser *ui;
};

#endif // WINDOWUSER_H
