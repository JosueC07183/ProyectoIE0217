#include "windowuser.h"
#include "ui_windowuser.h"

WindowUser::WindowUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUser)
{
    ui->setupUi(this);
}

WindowUser::~WindowUser()
{
    delete ui;
}
