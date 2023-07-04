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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoUser
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_InfoUser;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QWidget *page2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QSplitter *splitter_2;

    void setupUi(QWidget *InfoUser)
    {
        if (InfoUser->objectName().isEmpty())
            InfoUser->setObjectName(QString::fromUtf8("InfoUser"));
        InfoUser->resize(830, 466);
        layoutWidget = new QWidget(InfoUser);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(InfoUser);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 0, 771, 411));
        splitter->setOrientation(Qt::Horizontal);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        label = new QLabel(page1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 221, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster Two"));
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label->setFont(font);
        pushButton = new QPushButton(page1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 100, 311, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster Two"));
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 85, 255);\n"
"color:black;\n"
"border:circular\n"
"}"));
        textBrowser_InfoUser = new QTextBrowser(page1);
        textBrowser_InfoUser->setObjectName(QString::fromUtf8("textBrowser_InfoUser"));
        textBrowser_InfoUser->setGeometry(QRect(70, 140, 371, 241));
        pushButton_2 = new QPushButton(page1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 340, 71, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lobster Two"));
        font2.setPointSize(18);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:rgb(255, 26, 26);\n"
"color:black;\n"
"border:circular\n"
"}"));
        label_3 = new QLabel(page1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 58, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lobster Two"));
        label_3->setFont(font3);
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        label_2 = new QLabel(page2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 60, 291, 41));
        label_2->setFont(font2);
        pushButton_3 = new QPushButton(page2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 110, 80, 24));
        label_4 = new QLabel(page2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 10, 58, 16));
        label_4->setFont(font3);
        stackedWidget->addWidget(page2);
        splitter->addWidget(stackedWidget);
        splitter_2 = new QSplitter(InfoUser);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(0, 0, 0, 0));
        splitter_2->setOrientation(Qt::Horizontal);

        retranslateUi(InfoUser);

        QMetaObject::connectSlotsByName(InfoUser);
    } // setupUi

    void retranslateUi(QWidget *InfoUser)
    {
        InfoUser->setWindowTitle(QCoreApplication::translate("InfoUser", "Form", nullptr));
        label->setText(QCoreApplication::translate("InfoUser", "Informaci\303\263n Usuarios", nullptr));
        pushButton->setText(QCoreApplication::translate("InfoUser", "Desplegar informaci\303\263n Usuarios", nullptr));
        pushButton_2->setText(QCoreApplication::translate("InfoUser", "Salir", nullptr));
        label_3->setText(QCoreApplication::translate("InfoUser", "Page 1", nullptr));
        label_2->setText(QCoreApplication::translate("InfoUser", "Informaci\303\263n de los Apartamentos", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InfoUser", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("InfoUser", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoUser: public Ui_InfoUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOUSER_H
