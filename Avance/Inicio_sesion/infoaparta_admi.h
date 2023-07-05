/**
 * @file infoaparta_admi.h
 * @author Josué Salmerón Córdoba
 * @brief En este header se muestran los prototipos de los botones que permiten construir los apartamentos. Y el otro para regresar sin 
 * problema alguno a la ventana del administrador. Lo otro que se hizo fue declarar una clase para poder crear las expresiones regulares en
 * para poder hacer uso de ellas cada vez que se escribe la información en los lineEdit de esta ventana. También se crea una función para no
 * reescribir la información de un apartamento ya construido.
 * @version 0.1
 * @date 2023-07-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INFOAPARTA_ADMI_H
#define INFOAPARTA_ADMI_H

#include <QWidget>
class QRegularExpressionValidator;
namespace Ui {
class InfoAparta_Admi;
}

class InfoAparta_Admi : public QWidget
{
    Q_OBJECT

public:
    explicit InfoAparta_Admi(QWidget *parent = nullptr);
    ~InfoAparta_Admi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InfoAparta_Admi *ui;
    QList<QString> m_registeredIDs;
    QRegularExpressionValidator *m_regExpVal;
    QRegularExpressionValidator *m_regExpVal_2;
    QRegularExpressionValidator *m_regExpVal_3;
    QRegularExpressionValidator *m_regExpVal_4;
    QRegularExpressionValidator *m_regExpVal_5;
    bool isIdApartaExist(const QString& idAparta); // Declaración de la función
};

#endif // INFOAPARTA_ADMI_H

