#include "infouser.h"
#include "ui_infouser.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "welcomewindow.h"
#include <QListWidgetItem>
InfoUser::InfoUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoUser)
{
    ui->setupUi(this);
}

InfoUser::~InfoUser()
{
    delete ui;
}

void InfoUser::on_pushButton_clicked()
{
    QFile archivo("/home/josue/build-Inicio_sesion-Desktop-Debug/datos_usuario.txt");
    if(!archivo.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", archivo.errorString());
    QTextStream in(&archivo);

    ui->textBrowser_InfoUser->setText(in.readAll());

}


void InfoUser::on_pushButton_2_clicked()
{
    WelcomeWindow *welcomewin = new WelcomeWindow;
    welcomewin->show();
    close();
}

