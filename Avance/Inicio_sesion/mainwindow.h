/**
 * @file mainwindow.h
 * @author Josué Salmerón Córdoba
 * @brief Este el header donde están todas los prototipos de cada botón. Si esto, el programa no va entender a que objeto se está haciendo
 * referencia, por lo que al crear uno cierto widget, y al presionar lo de ir al slot, el header de una vez reconoce que se le aplicará una
 * acción a ese objeto, de ahí la importancia de tenerlos aquí.
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <welcomewindow.h>
#include <vista_user.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/**
 * @brief Clase principal que muestra la primer ventana de la aplicación.
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
/**
 * @brief Se muestran los slots de manera pública, todos los slots mostrados aquí, necesariamente deben realizar una acción
 * en la ventana actual.
 *
 */
public slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Exit_clicked();

    void on_pushButton_NewAccount_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
