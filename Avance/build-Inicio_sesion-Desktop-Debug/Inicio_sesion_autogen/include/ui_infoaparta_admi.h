/********************************************************************************
** Form generated from reading UI file 'infoaparta_admi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOAPARTA_ADMI_H
#define UI_INFOAPARTA_ADMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoAparta_Admi
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_Precio;
    QLineEdit *lineEdit_Details;
    QLineEdit *lineEdit_numCuartos;
    QLineEdit *lineEdit_numPisos;
    QLineEdit *lineEdit_ServPub;
    QLineEdit *lineEdit_servCochera;

    void setupUi(QWidget *InfoAparta_Admi)
    {
        if (InfoAparta_Admi->objectName().isEmpty())
            InfoAparta_Admi->setObjectName(QString::fromUtf8("InfoAparta_Admi"));
        InfoAparta_Admi->resize(663, 444);
        label = new QLabel(InfoAparta_Admi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 161, 41));
        pushButton = new QPushButton(InfoAparta_Admi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 380, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(26, 255, 10);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_2 = new QPushButton(InfoAparta_Admi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 380, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 11, 3);\n"
"color:black;\n"
"border:circular\n"
"}"));
        lineEdit_Precio = new QLineEdit(InfoAparta_Admi);
        lineEdit_Precio->setObjectName(QString::fromUtf8("lineEdit_Precio"));
        lineEdit_Precio->setGeometry(QRect(20, 220, 251, 41));
        lineEdit_Details = new QLineEdit(InfoAparta_Admi);
        lineEdit_Details->setObjectName(QString::fromUtf8("lineEdit_Details"));
        lineEdit_Details->setGeometry(QRect(340, 220, 251, 41));
        lineEdit_numCuartos = new QLineEdit(InfoAparta_Admi);
        lineEdit_numCuartos->setObjectName(QString::fromUtf8("lineEdit_numCuartos"));
        lineEdit_numCuartos->setGeometry(QRect(20, 100, 251, 41));
        lineEdit_numPisos = new QLineEdit(InfoAparta_Admi);
        lineEdit_numPisos->setObjectName(QString::fromUtf8("lineEdit_numPisos"));
        lineEdit_numPisos->setGeometry(QRect(20, 160, 251, 41));
        lineEdit_ServPub = new QLineEdit(InfoAparta_Admi);
        lineEdit_ServPub->setObjectName(QString::fromUtf8("lineEdit_ServPub"));
        lineEdit_ServPub->setGeometry(QRect(340, 100, 251, 41));
        lineEdit_servCochera = new QLineEdit(InfoAparta_Admi);
        lineEdit_servCochera->setObjectName(QString::fromUtf8("lineEdit_servCochera"));
        lineEdit_servCochera->setGeometry(QRect(340, 160, 251, 41));

        retranslateUi(InfoAparta_Admi);

        QMetaObject::connectSlotsByName(InfoAparta_Admi);
    } // setupUi

    void retranslateUi(QWidget *InfoAparta_Admi)
    {
        InfoAparta_Admi->setWindowTitle(QCoreApplication::translate("InfoAparta_Admi", "Form", nullptr));
        label->setText(QCoreApplication::translate("InfoAparta_Admi", "Informaci\303\263n Apartamentos", nullptr));
        pushButton->setText(QCoreApplication::translate("InfoAparta_Admi", "A\303\261adir", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InfoAparta_Admi", "Salir", nullptr));
        lineEdit_Precio->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Precio", nullptr));
        lineEdit_Details->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Otros detalles", nullptr));
        lineEdit_numCuartos->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Cantidad de cuartos", nullptr));
        lineEdit_numPisos->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Cantidad de Pisos", nullptr));
        lineEdit_ServPub->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Servicios P\303\272blicos", nullptr));
        lineEdit_servCochera->setPlaceholderText(QCoreApplication::translate("InfoAparta_Admi", "Cochera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoAparta_Admi: public Ui_InfoAparta_Admi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOAPARTA_ADMI_H
