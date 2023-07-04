#ifndef VISTA_USER_H
#define VISTA_USER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QString>

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
    QList<QStringList> getUserList() const;


private slots:
    //void on_pushButton_clicked();

    void on_pushButton_Registro_clicked();

    void on_Salir_2_clicked();

//    void on_lineEmail_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Vista_User *ui;
    QRegularExpressionValidator *m_regExpValidator;
    QRegularExpressionValidator *m_regExpValidator_2;
    QRegularExpressionValidator *m_regExpValidator_3;

};

#endif // VISTA_USER_H
