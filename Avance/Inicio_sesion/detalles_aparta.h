#ifndef DETALLES_APARTA_H
#define DETALLES_APARTA_H

#include <QWidget>

namespace Ui {
class Detalles_Aparta;
}

class Detalles_Aparta : public QWidget
{
    Q_OBJECT

public:
    explicit Detalles_Aparta(QWidget *parent = nullptr);
    ~Detalles_Aparta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_A1_clicked();

    void on_pushButton_A2_clicked();

    void on_pushButton_A3_clicked();

    void on_pushButton_A4_clicked();

    void on_pushButton_A5_clicked();

    void on_pushButton_A6_clicked();

private:
    Ui::Detalles_Aparta *ui;

};

#endif // DETALLES_APARTA_H
