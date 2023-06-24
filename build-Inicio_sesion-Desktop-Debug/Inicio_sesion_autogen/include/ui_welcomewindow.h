/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_Title;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(809, 435);
        WelcomeWindow->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:rgb(26, 200, 255);\n"
"color:white\n"
"}"));
        centralwidget = new QWidget(WelcomeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Title = new QLabel(centralwidget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(210, 20, 371, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(25);
        label_Title->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 181, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(30, 255, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(450, 170, 201, 91));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 290, 221, 91));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(26, 90, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 350, 91, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lobster Two"));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));
        WelcomeWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(WelcomeWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WelcomeWindow->setStatusBar(statusbar);

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "MainWindow", nullptr));
        label_Title->setText(QCoreApplication::translate("WelcomeWindow", "        Bosques de Cristo Rey", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "A\303\261adir apartamento", nullptr));
        pushButton_5->setText(QCoreApplication::translate("WelcomeWindow", "Eliminar apartamento", nullptr));
        pushButton_3->setText(QCoreApplication::translate("WelcomeWindow", "Ver informaci\303\263n actual", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WelcomeWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
