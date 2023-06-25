/********************************************************************************
** Form generated from reading UI file 'vista_user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISTA_USER_H
#define UI_VISTA_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vista_User
{
public:
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_Registro;
    QLineEdit *lineEmail;
    QPushButton *Salir_2;
    QLineEdit *linePass;
    QLineEdit *linePass_2;

    void setupUi(QWidget *Vista_User)
    {
        if (Vista_User->objectName().isEmpty())
            Vista_User->setObjectName(QString::fromUtf8("Vista_User"));
        Vista_User->resize(617, 446);
        label = new QLabel(Vista_User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(Vista_User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 257, 171, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        dateEdit = new QDateEdit(Vista_User);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(50, 297, 171, 41));
        dateEdit->setCalendarPopup(true);
        pushButton_Registro = new QPushButton(Vista_User);
        pushButton_Registro->setObjectName(QString::fromUtf8("pushButton_Registro"));
        pushButton_Registro->setGeometry(QRect(170, 377, 131, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_Registro->setFont(font2);
        pushButton_Registro->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(51, 255, 102);\n"
"color:black;\n"
"border:circular\n"
"}"));
        lineEmail = new QLineEdit(Vista_User);
        lineEmail->setObjectName(QString::fromUtf8("lineEmail"));
        lineEmail->setGeometry(QRect(50, 80, 351, 31));
        Salir_2 = new QPushButton(Vista_User);
        Salir_2->setObjectName(QString::fromUtf8("Salir_2"));
        Salir_2->setGeometry(QRect(530, 380, 71, 41));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        Salir_2->setFont(font3);
        linePass = new QLineEdit(Vista_User);
        linePass->setObjectName(QString::fromUtf8("linePass"));
        linePass->setGeometry(QRect(50, 130, 351, 31));
        linePass->setEchoMode(QLineEdit::Password);
        linePass_2 = new QLineEdit(Vista_User);
        linePass_2->setObjectName(QString::fromUtf8("linePass_2"));
        linePass_2->setGeometry(QRect(50, 180, 351, 31));
        linePass_2->setEchoMode(QLineEdit::Password);

        retranslateUi(Vista_User);

        QMetaObject::connectSlotsByName(Vista_User);
    } // setupUi

    void retranslateUi(QWidget *Vista_User)
    {
        Vista_User->setWindowTitle(QCoreApplication::translate("Vista_User", "Form", nullptr));
        label->setText(QCoreApplication::translate("Vista_User", "Registrate", nullptr));
        label_2->setText(QCoreApplication::translate("Vista_User", "Fecha de nacimiento", nullptr));
        pushButton_Registro->setText(QCoreApplication::translate("Vista_User", "Registrarse", nullptr));
        lineEmail->setPlaceholderText(QCoreApplication::translate("Vista_User", "Correo", nullptr));
        Salir_2->setText(QCoreApplication::translate("Vista_User", "Salir", nullptr));
        linePass->setPlaceholderText(QCoreApplication::translate("Vista_User", "Contrase\303\261a", nullptr));
        linePass_2->setPlaceholderText(QCoreApplication::translate("Vista_User", "Repite Contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vista_User: public Ui_Vista_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISTA_USER_H
