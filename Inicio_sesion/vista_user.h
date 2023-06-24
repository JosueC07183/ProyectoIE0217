#ifndef VISTA_USER_H
#define VISTA_USER_H

#include <QWidget>

class QRegularExpressionValidator;

namespace Ui {
class Vista_User;
}

class Vista_User : public QWidget
{
    Q_OBJECT

public:
    explicit Vista_User(QWidget *parent = nullptr);
    ~Vista_User();

private:
    Ui::Vista_User *ui;
    QRegularExpressionValidator *m_regExpValidator;
    QRegularExpressionValidator *m_regExpValidator_2;
};

#endif // VISTA_USER_H
