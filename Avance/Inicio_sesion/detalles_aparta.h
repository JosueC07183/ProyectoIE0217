/**
 * @file detalles_aparta.h
 * @author Josué Salmerón Córdoba
 * @brief Aquí se encuentran todos los prototipos necesarios para darle función a cada botón, con esto se pueden realizar las compras
 * satisfactoriamente, donde se registran en la información de cada usuario.
 * @version 0.1
 * @date 2023-07-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef DETALLES_APARTA_H
#define DETALLES_APARTA_H

#include <QWidget>

namespace Ui {
class Detalles_Aparta;
}
/**
 * @brief Esta clase le permite al usuario normal ver la información de los 
 * apartamentos disponibles y poder comprarlos.
 * 
 */
class Detalles_Aparta : public QWidget
{
    Q_OBJECT

public:
    explicit Detalles_Aparta(QWidget *parent = nullptr);
    ~Detalles_Aparta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_A1_clicked();

    void on_pushButton_A2_clicked();

    void on_pushButton_A3_clicked();

    void on_pushButton_A4_clicked();

    void on_pushButton_A5_clicked();

    void on_pushButton_A6_clicked();

    void on_pushButton_BuyA6_clicked();

    void on_pushButton_Buy_A4_clicked();

    void on_pushButton_Buy_A5_clicked();

    void on_pushButton_Buy_A3_clicked();

    void on_pushButton_Buy_A2_clicked();

    void on_pushButton_Buy_A1_clicked();

private:
    Ui::Detalles_Aparta *ui;
    QString nombreUsuarioActual;

};

#endif // DETALLES_APARTA_H
