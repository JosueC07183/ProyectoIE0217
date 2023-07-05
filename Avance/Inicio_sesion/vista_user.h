/**
 * @file vista_user.h
 * @author Josue Salmerón Córdoba
 * @brief Este header solo tiene dos botones con funcionalidades, la primera es realizar el registro de cada usuario en un .txt y la otra
 * es salir para regresar a la ventana principal de la app.
 * @version 0.1
 * @date 2023-07-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef VISTA_USER_H
#define VISTA_USER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QString>

class QRegularExpressionValidator;

namespace Ui {
class Vista_User;
}
/**
 * @brief Esta clase le permite al usuario normal crearse una cuenta para
 * acceder al contenido de la app.
 * 
 */
class Vista_User : public QWidget
{
    Q_OBJECT

public:
    explicit Vista_User(QWidget *parent = nullptr);
    ~Vista_User();
    QList<QStringList> getUserList() const;


private slots:

    void on_pushButton_Registro_clicked();

    void on_Salir_2_clicked();

private:
    Ui::Vista_User *ui;
    QRegularExpressionValidator *m_regExpValidator;
    QRegularExpressionValidator *m_regExpValidator_2;
    QRegularExpressionValidator *m_regExpValidator_3;

};

#endif // VISTA_USER_H
