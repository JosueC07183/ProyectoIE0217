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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoAparta
{
public:
    QPushButton *pushButtonA1;
    QPushButton *pushButtonA2;
    QPushButton *pushButton_A3;
    QPushButton *pushButtonA4;
    QPushButton *pushButtonA5;
    QPushButton *pushButtonA6;
    QPushButton *pushButton_7;
    QLabel *label;

    void setupUi(QWidget *InfoAparta)
    {
        if (InfoAparta->objectName().isEmpty())
            InfoAparta->setObjectName(QString::fromUtf8("InfoAparta"));
        InfoAparta->resize(649, 391);
        pushButtonA1 = new QPushButton(InfoAparta);
        pushButtonA1->setObjectName(QString::fromUtf8("pushButtonA1"));
        pushButtonA1->setGeometry(QRect(40, 120, 171, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(18);
        pushButtonA1->setFont(font);
        pushButtonA1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(252, 161, 24);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonA2 = new QPushButton(InfoAparta);
        pushButtonA2->setObjectName(QString::fromUtf8("pushButtonA2"));
        pushButtonA2->setGeometry(QRect(240, 120, 171, 51));
        pushButtonA2->setFont(font);
        pushButtonA2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(196, 255, 71);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_A3 = new QPushButton(InfoAparta);
        pushButton_A3->setObjectName(QString::fromUtf8("pushButton_A3"));
        pushButton_A3->setGeometry(QRect(450, 120, 171, 51));
        pushButton_A3->setFont(font);
        pushButton_A3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(6, 255, 31);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonA4 = new QPushButton(InfoAparta);
        pushButtonA4->setObjectName(QString::fromUtf8("pushButtonA4"));
        pushButtonA4->setGeometry(QRect(40, 200, 171, 51));
        pushButtonA4->setFont(font);
        pushButtonA4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(234, 104, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonA5 = new QPushButton(InfoAparta);
        pushButtonA5->setObjectName(QString::fromUtf8("pushButtonA5"));
        pushButtonA5->setGeometry(QRect(240, 200, 171, 51));
        pushButtonA5->setFont(font);
        pushButtonA5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(244, 32, 32);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonA6 = new QPushButton(InfoAparta);
        pushButtonA6->setObjectName(QString::fromUtf8("pushButtonA6"));
        pushButtonA6->setGeometry(QRect(450, 200, 171, 51));
        pushButtonA6->setFont(font);
        pushButtonA6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(17, 139, 252);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_7 = new QPushButton(InfoAparta);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 310, 171, 51));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 99, 99);\n"
"color:black;\n"
"border:circular\n"
"}"));
        label = new QLabel(InfoAparta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 50, 311, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(InfoAparta);

        QMetaObject::connectSlotsByName(InfoAparta);
    } // setupUi

    void retranslateUi(QWidget *InfoAparta)
    {
        InfoAparta->setWindowTitle(QCoreApplication::translate("InfoAparta", "Form", nullptr));
        pushButtonA1->setText(QCoreApplication::translate("InfoAparta", "Apartamento A1", nullptr));
        pushButtonA2->setText(QCoreApplication::translate("InfoAparta", "Apartamento A2", nullptr));
        pushButton_A3->setText(QCoreApplication::translate("InfoAparta", "Apartamento A3", nullptr));
        pushButtonA4->setText(QCoreApplication::translate("InfoAparta", "Apartamento A4", nullptr));
        pushButtonA5->setText(QCoreApplication::translate("InfoAparta", "Apartamento A5", nullptr));
        pushButtonA6->setText(QCoreApplication::translate("InfoAparta", "Apartamento A6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("InfoAparta", "Regresar", nullptr));
        label->setText(QCoreApplication::translate("InfoAparta", "Informaci\303\263n de los Apartamentos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoAparta: public Ui_InfoAparta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOAPARTA_H
