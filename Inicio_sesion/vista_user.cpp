#include "vista_user.h"
#include "ui_vista_user.h"
#include <QRegularExpressionValidator>
Vista_User::Vista_User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vista_User)
{
    ui->setupUi(this);
// Aqui están las regex del usuario, nombre, apellido, email.
    m_regExpValidator = new QRegularExpressionValidator(QRegularExpression("[a-z A-Z]+"), this);
    m_regExpValidator_2 = new QRegularExpressionValidator(QRegularExpression("[a-zA-Z0-9._-]+@[a-zA-Z0-9]+.[a-zA-Z.]{3,8}"), this);
    ui->lineName->setValidator(m_regExpValidator);
    ui->lineApellido->setValidator(m_regExpValidator);
    ui->lineEmail->setValidator(m_regExpValidator_2);
}

Vista_User::~Vista_User()
{
    delete ui;
}
