/**
 * @file buscaraparta.h
 * @author Josué Salmerón Córdoba
 * @brief Esta función tiene 3 prototipos de las funciones de los botones, buscar, eliminar y salir. Estas son las funciones que realizan
 * estos botones.
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef BUSCARAPARTA_H
#define BUSCARAPARTA_H

#include <QWidget>
class QRegularExpressionValidator;
namespace Ui {
class BuscarAparta;
}

class BuscarAparta : public QWidget
{
    Q_OBJECT

public:
    explicit BuscarAparta(QWidget *parent = nullptr);
    ~BuscarAparta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::BuscarAparta *ui;
    QRegularExpressionValidator *m_regExpVal_5;
};

#endif // BUSCARAPARTA_H
