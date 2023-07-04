/********************************************************************************
** Form generated from reading UI file 'buscaraparta.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARAPARTA_H
#define UI_BUSCARAPARTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuscarAparta
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *BuscarAparta)
    {
        if (BuscarAparta->objectName().isEmpty())
            BuscarAparta->setObjectName(QString::fromUtf8("BuscarAparta"));
        BuscarAparta->resize(431, 353);
        textBrowser = new QTextBrowser(BuscarAparta);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(90, 90, 256, 192));
        pushButton_2 = new QPushButton(BuscarAparta);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 310, 80, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 85, 127);\n"
"color:black;\n"
"border:circular\n"
"}"));
        pushButton_3 = new QPushButton(BuscarAparta);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 310, 80, 24));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 0, 0);\n"
"color:black;\n"
"border:circular\n"
"}"));
        layoutWidget = new QWidget(BuscarAparta);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 40, 331, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(0, 85, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(BuscarAparta);

        QMetaObject::connectSlotsByName(BuscarAparta);
    } // setupUi

    void retranslateUi(QWidget *BuscarAparta)
    {
        BuscarAparta->setWindowTitle(QCoreApplication::translate("BuscarAparta", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BuscarAparta", "Eliminar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BuscarAparta", "Salir", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("BuscarAparta", "Esciribe el apartamento", nullptr));
        pushButton->setText(QCoreApplication::translate("BuscarAparta", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuscarAparta: public Ui_BuscarAparta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARAPARTA_H
