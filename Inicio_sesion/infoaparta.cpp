
#include "infoaparta.h"
#include "ui_infoaparta.h"
//#include "mainwindow.cpp"
#include <QString>
InfoAparta::InfoAparta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoAparta)

{
    ui->setupUi(this);
}

InfoAparta::~InfoAparta()
{
    delete ui;
}
