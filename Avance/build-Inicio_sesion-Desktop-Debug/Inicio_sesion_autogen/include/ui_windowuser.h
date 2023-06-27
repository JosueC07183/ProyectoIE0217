/********************************************************************************
** Form generated from reading UI file 'windowuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSER_H
#define UI_WINDOWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUser
{
public:
    QLabel *label_Title;
    QPushButton *pushButtonApartasON;
    QPushButton *pushButtonApartasBuild;
    QPushButton *pushButtonExit;

    void setupUi(QWidget *WindowUser)
    {
        if (WindowUser->objectName().isEmpty())
            WindowUser->setObjectName(QString::fromUtf8("WindowUser"));
        WindowUser->resize(620, 425);
        label_Title = new QLabel(WindowUser);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(140, 40, 371, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(25);
        label_Title->setFont(font);
        label_Title->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgb(26, 200, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonApartasON = new QPushButton(WindowUser);
        pushButtonApartasON->setObjectName(QString::fromUtf8("pushButtonApartasON"));
        pushButtonApartasON->setGeometry(QRect(140, 180, 251, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(18);
        pushButtonApartasON->setFont(font1);
        pushButtonApartasON->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(51, 255, 102);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonApartasBuild = new QPushButton(WindowUser);
        pushButtonApartasBuild->setObjectName(QString::fromUtf8("pushButtonApartasBuild"));
        pushButtonApartasBuild->setGeometry(QRect(140, 250, 271, 41));
        pushButtonApartasBuild->setFont(font1);
        pushButtonApartasBuild->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 191);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButtonExit = new QPushButton(WindowUser);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(230, 340, 111, 51));
        pushButtonExit->setFont(font1);
        pushButtonExit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));

        retranslateUi(WindowUser);

        QMetaObject::connectSlotsByName(WindowUser);
    } // setupUi

    void retranslateUi(QWidget *WindowUser)
    {
        WindowUser->setWindowTitle(QCoreApplication::translate("WindowUser", "Form", nullptr));
        label_Title->setText(QCoreApplication::translate("WindowUser", "        Bosques de Cristo Rey", nullptr));
        pushButtonApartasON->setText(QCoreApplication::translate("WindowUser", "Apartamentos disponibles", nullptr));
        pushButtonApartasBuild->setText(QCoreApplication::translate("WindowUser", "Apartamentos en construcci\303\263n", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("WindowUser", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowUser: public Ui_WindowUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSER_H
