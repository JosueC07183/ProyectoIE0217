/********************************************************************************
** Form generated from reading UI file 'detalles_aparta.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETALLES_APARTA_H
#define UI_DETALLES_APARTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Detalles_Aparta
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *pushButton_A1;
    QTextBrowser *textBrowser_A1;
    QPushButton *pushButton_Buy_A1;
    QWidget *tab_2;
    QPushButton *pushButton_A2;
    QTextBrowser *textBrowser_A2;
    QPushButton *pushButton_Buy_A2;
    QWidget *tab_3;
    QTextBrowser *textBrowser_A3;
    QPushButton *pushButton_A3;
    QPushButton *pushButton_Buy_A3;
    QWidget *tab_4;
    QTextBrowser *textBrowser_A4;
    QPushButton *pushButton_A4;
    QPushButton *pushButton_Buy_A4;
    QWidget *tab_5;
    QTextBrowser *textBrowser_A5;
    QPushButton *pushButton_A5;
    QPushButton *pushButton_Buy_A5;
    QWidget *tab_6;
    QTextBrowser *textBrowser_A6;
    QPushButton *pushButton_A6;
    QPushButton *pushButton_BuyA6;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Detalles_Aparta)
    {
        if (Detalles_Aparta->objectName().isEmpty())
            Detalles_Aparta->setObjectName(QString::fromUtf8("Detalles_Aparta"));
        Detalles_Aparta->resize(732, 351);
        tabWidget = new QTabWidget(Detalles_Aparta);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 50, 551, 291));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        pushButton_A1 = new QPushButton(tab_1);
        pushButton_A1->setObjectName(QString::fromUtf8("pushButton_A1"));
        pushButton_A1->setGeometry(QRect(219, 13, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(13);
        pushButton_A1->setFont(font1);
        pushButton_A1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        textBrowser_A1 = new QTextBrowser(tab_1);
        textBrowser_A1->setObjectName(QString::fromUtf8("textBrowser_A1"));
        textBrowser_A1->setGeometry(QRect(90, 50, 321, 191));
        pushButton_Buy_A1 = new QPushButton(tab_1);
        pushButton_Buy_A1->setObjectName(QString::fromUtf8("pushButton_Buy_A1"));
        pushButton_Buy_A1->setGeometry(QRect(440, 220, 80, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lobster Two"));
        font2.setPointSize(14);
        pushButton_Buy_A1->setFont(font2);
        pushButton_Buy_A1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_A2 = new QPushButton(tab_2);
        pushButton_A2->setObjectName(QString::fromUtf8("pushButton_A2"));
        pushButton_A2->setGeometry(QRect(200, 10, 80, 24));
        pushButton_A2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        textBrowser_A2 = new QTextBrowser(tab_2);
        textBrowser_A2->setObjectName(QString::fromUtf8("textBrowser_A2"));
        textBrowser_A2->setGeometry(QRect(70, 40, 331, 211));
        pushButton_Buy_A2 = new QPushButton(tab_2);
        pushButton_Buy_A2->setObjectName(QString::fromUtf8("pushButton_Buy_A2"));
        pushButton_Buy_A2->setGeometry(QRect(430, 220, 80, 24));
        pushButton_Buy_A2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textBrowser_A3 = new QTextBrowser(tab_3);
        textBrowser_A3->setObjectName(QString::fromUtf8("textBrowser_A3"));
        textBrowser_A3->setGeometry(QRect(70, 40, 331, 211));
        pushButton_A3 = new QPushButton(tab_3);
        pushButton_A3->setObjectName(QString::fromUtf8("pushButton_A3"));
        pushButton_A3->setGeometry(QRect(200, 10, 80, 24));
        pushButton_A3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_Buy_A3 = new QPushButton(tab_3);
        pushButton_Buy_A3->setObjectName(QString::fromUtf8("pushButton_Buy_A3"));
        pushButton_Buy_A3->setGeometry(QRect(430, 220, 80, 24));
        pushButton_Buy_A3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        textBrowser_A4 = new QTextBrowser(tab_4);
        textBrowser_A4->setObjectName(QString::fromUtf8("textBrowser_A4"));
        textBrowser_A4->setGeometry(QRect(70, 40, 331, 211));
        pushButton_A4 = new QPushButton(tab_4);
        pushButton_A4->setObjectName(QString::fromUtf8("pushButton_A4"));
        pushButton_A4->setGeometry(QRect(200, 10, 80, 24));
        pushButton_A4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_Buy_A4 = new QPushButton(tab_4);
        pushButton_Buy_A4->setObjectName(QString::fromUtf8("pushButton_Buy_A4"));
        pushButton_Buy_A4->setGeometry(QRect(440, 220, 80, 24));
        pushButton_Buy_A4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        textBrowser_A5 = new QTextBrowser(tab_5);
        textBrowser_A5->setObjectName(QString::fromUtf8("textBrowser_A5"));
        textBrowser_A5->setGeometry(QRect(70, 40, 331, 211));
        pushButton_A5 = new QPushButton(tab_5);
        pushButton_A5->setObjectName(QString::fromUtf8("pushButton_A5"));
        pushButton_A5->setGeometry(QRect(200, 10, 80, 24));
        pushButton_A5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_Buy_A5 = new QPushButton(tab_5);
        pushButton_Buy_A5->setObjectName(QString::fromUtf8("pushButton_Buy_A5"));
        pushButton_Buy_A5->setGeometry(QRect(440, 220, 80, 24));
        pushButton_Buy_A5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        textBrowser_A6 = new QTextBrowser(tab_6);
        textBrowser_A6->setObjectName(QString::fromUtf8("textBrowser_A6"));
        textBrowser_A6->setGeometry(QRect(110, 40, 331, 211));
        pushButton_A6 = new QPushButton(tab_6);
        pushButton_A6->setObjectName(QString::fromUtf8("pushButton_A6"));
        pushButton_A6->setEnabled(true);
        pushButton_A6->setGeometry(QRect(230, 10, 80, 24));
        pushButton_A6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_BuyA6 = new QPushButton(tab_6);
        pushButton_BuyA6->setObjectName(QString::fromUtf8("pushButton_BuyA6"));
        pushButton_BuyA6->setGeometry(QRect(450, 220, 80, 24));
        pushButton_BuyA6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 170, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        tabWidget->addTab(tab_6, QString());
        label = new QLabel(Detalles_Aparta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 201, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lobster Two"));
        font3.setPointSize(18);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Detalles_Aparta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 303, 81, 31));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 0, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));

        retranslateUi(Detalles_Aparta);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Detalles_Aparta);
    } // setupUi

    void retranslateUi(QWidget *Detalles_Aparta)
    {
        Detalles_Aparta->setWindowTitle(QCoreApplication::translate("Detalles_Aparta", "Form", nullptr));
        pushButton_A1->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_Buy_A1->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("Detalles_Aparta", "Aparta A1", nullptr));
        pushButton_A2->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_Buy_A2->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Detalles_Aparta", "Aparta A2", nullptr));
        pushButton_A3->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_Buy_A3->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Detalles_Aparta", "Aparta A3", nullptr));
        pushButton_A4->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_Buy_A4->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Detalles_Aparta", "Aparta A4", nullptr));
        pushButton_A5->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_Buy_A5->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Detalles_Aparta", "Aparta A5", nullptr));
        pushButton_A6->setText(QCoreApplication::translate("Detalles_Aparta", "Ver info", nullptr));
        pushButton_BuyA6->setText(QCoreApplication::translate("Detalles_Aparta", "Comprar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Detalles_Aparta", "Aparta A6", nullptr));
        label->setText(QCoreApplication::translate("Detalles_Aparta", "Lista de Apartamentos", nullptr));
        pushButton->setText(QCoreApplication::translate("Detalles_Aparta", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detalles_Aparta: public Ui_Detalles_Aparta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETALLES_APARTA_H
