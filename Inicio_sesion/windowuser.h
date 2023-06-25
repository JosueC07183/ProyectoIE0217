/**
 * @file windowuser.h
 * @author Josue Salmeron Cordoba
 * @brief EL desarrollo de este header aún esta en desarollo, pero la principal
 * idea es crear una mejor visualización para el usuario.
 * @version 0.1
 * @date 2023-06-25
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

private:
    Ui::WindowUser *ui;
};

#endif // WINDOWUSER_H
