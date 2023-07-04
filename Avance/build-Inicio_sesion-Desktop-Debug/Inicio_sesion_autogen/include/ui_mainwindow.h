/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User_name;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_NewAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 771, 421));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 180, 151, 41));
        label_2->setFont(font);
        lineEdit_User_name = new QLineEdit(groupBox);
        lineEdit_User_name->setObjectName(QString::fromUtf8("lineEdit_User_name"));
        lineEdit_User_name->setGeometry(QRect(300, 130, 371, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_User_name->setFont(font1);
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(300, 190, 371, 41));
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(380, 270, 141, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lobster Two"));
        font2.setPointSize(23);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_Login->setFont(font2);
        pushButton_Login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 255, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_Exit = new QPushButton(groupBox);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(630, 30, 131, 61));
        pushButton_Exit->setFont(font2);
        pushButton_Exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_NewAccount = new QPushButton(groupBox);
        pushButton_NewAccount->setObjectName(QString::fromUtf8("pushButton_NewAccount"));
        pushButton_NewAccount->setGeometry(QRect(300, 350, 321, 41));
        pushButton_NewAccount->setFont(font2);
        pushButton_NewAccount->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 0, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        pushButton_NewAccount->setText(QCoreApplication::translate("MainWindow", "Crear cuenta nueva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
