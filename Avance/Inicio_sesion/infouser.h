/**
 * @file infouser.h
 * @author Josué Salmerón Córdoba
 * @brief Esta función muestra la información de los clientes, si aún no hay clientes, pues la app no mostrará nada. Si existen clientes,
 * entonces se muestra la información de éstos y esto permite saber si ya alguno compró algún apartamento.
 * @version 0.1
 * @date 2023-07-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef INFOUSER_H
#define INFOUSER_H

#include <QWidget>

namespace Ui {
class InfoUser;
}
/**
 * @brief Esta clase es para que el dueño pueda conocer la información de 
 * sus clientes, y sus ventas.
 * 
 */
class InfoUser : public QWidget
{
    Q_OBJECT

public:
    explicit InfoUser(QWidget *parent = nullptr);
    ~InfoUser();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InfoUser *ui;
};

#endif // INFOUSER_H
