/**
 * @file infoaparta.h
 * @author Josue Salmeron Córdoba
 * @brief Este header contiene los elementos de la interfaz InfoAparta.
 * @version 0.1
 * @date 2023-06-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INFOAPARTA_H
#define INFOAPARTA_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class InfoAparta;

}

class InfoAparta : public QWidget
{
    Q_OBJECT

public:
    explicit InfoAparta(QWidget *parent = nullptr);
    ~InfoAparta();

private:
    Ui::InfoAparta *ui;


};
#endif // INFOAPARTA_H
