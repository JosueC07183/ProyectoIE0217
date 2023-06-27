/********************************************************************************
** Form generated from reading UI file 'infoaparta.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOAPARTA_H
#define UI_INFOAPARTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoAparta
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *InfoAparta)
    {
        if (InfoAparta->objectName().isEmpty())
            InfoAparta->setObjectName(QString::fromUtf8("InfoAparta"));
        InfoAparta->resize(649, 391);
        lineEdit = new QLineEdit(InfoAparta);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 30, 341, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(20);
        font.setUnderline(true);
        lineEdit->setFont(font);
        pushButton = new QPushButton(InfoAparta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 120, 171, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(252, 161, 24);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_2 = new QPushButton(InfoAparta);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 120, 171, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(196, 255, 71);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_3 = new QPushButton(InfoAparta);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 120, 171, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(6, 255, 31);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_4 = new QPushButton(InfoAparta);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 200, 171, 51));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(234, 104, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_5 = new QPushButton(InfoAparta);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 200, 171, 51));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(244, 32, 32);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_6 = new QPushButton(InfoAparta);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(450, 200, 171, 51));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(17, 139, 252);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_7 = new QPushButton(InfoAparta);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 310, 171, 51));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 99, 99);\n"
"color:black;\n"
"border:circular\n"
"}"));

        retranslateUi(InfoAparta);

        QMetaObject::connectSlotsByName(InfoAparta);
    } // setupUi

    void retranslateUi(QWidget *InfoAparta)
    {
        InfoAparta->setWindowTitle(QCoreApplication::translate("InfoAparta", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("InfoAparta", "Informaci\303\263n de los Apartamentos", nullptr));
        pushButton->setText(QCoreApplication::translate("InfoAparta", "Apartamento A1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InfoAparta", "Apartamento A2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InfoAparta", "Apartamento A3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("InfoAparta", "Apartamento A4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("InfoAparta", "Apartamento A5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("InfoAparta", "Apartamento A7", nullptr));
        pushButton_7->setText(QCoreApplication::translate("InfoAparta", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoAparta: public Ui_InfoAparta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOAPARTA_H
