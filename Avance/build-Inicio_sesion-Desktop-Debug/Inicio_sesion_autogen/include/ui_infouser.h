/********************************************************************************
** Form generated from reading UI file 'infouser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOUSER_H
#define UI_INFOUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoUser
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_InfoUser;
    QPushButton *pushButton_2;

    void setupUi(QWidget *InfoUser)
    {
        if (InfoUser->objectName().isEmpty())
            InfoUser->setObjectName(QString::fromUtf8("InfoUser"));
        InfoUser->resize(751, 404);
        label = new QLabel(InfoUser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 30, 221, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);
        pushButton = new QPushButton(InfoUser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 100, 311, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(16);
        pushButton->setFont(font1);
        textBrowser_InfoUser = new QTextBrowser(InfoUser);
        textBrowser_InfoUser->setObjectName(QString::fromUtf8("textBrowser_InfoUser"));
        textBrowser_InfoUser->setGeometry(QRect(160, 150, 371, 211));
        pushButton_2 = new QPushButton(InfoUser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 330, 71, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lobster Two"));
        font2.setPointSize(18);
        pushButton_2->setFont(font2);

        retranslateUi(InfoUser);

        QMetaObject::connectSlotsByName(InfoUser);
    } // setupUi

    void retranslateUi(QWidget *InfoUser)
    {
        InfoUser->setWindowTitle(QCoreApplication::translate("InfoUser", "Form", nullptr));
        label->setText(QCoreApplication::translate("InfoUser", "Informaci\303\263n Usuarios", nullptr));
        pushButton->setText(QCoreApplication::translate("InfoUser", "Desplegar informaci\303\263n Usuarios", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InfoUser", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoUser: public Ui_InfoUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOUSER_H
