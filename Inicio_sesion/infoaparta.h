#ifndef INFOAPARTA_H
#define INFOAPARTA_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class InfoAparta;

}

class InfoAparta : public QWidget
{
    Q_OBJECT

public:
    explicit InfoAparta(QWidget *parent = nullptr);
    ~InfoAparta();

private:
    Ui::InfoAparta *ui;


};
#endif // INFOAPARTA_H
