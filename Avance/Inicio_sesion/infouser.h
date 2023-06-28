#ifndef INFOUSER_H
#define INFOUSER_H

#include <QWidget>

namespace Ui {
class InfoUser;
}

class InfoUser : public QWidget
{
    Q_OBJECT

public:
    explicit InfoUser(QWidget *parent = nullptr);
    ~InfoUser();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InfoUser *ui;
};

#endif // INFOUSER_H
