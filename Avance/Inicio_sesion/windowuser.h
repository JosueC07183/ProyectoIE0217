#ifndef WINDOWUSER_H
#define WINDOWUSER_H

#include <QWidget>

namespace Ui {
class WindowUser;
}


class WindowUser : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUser(QWidget *parent = nullptr);
    ~WindowUser();

private:
    Ui::WindowUser *ui;
};

#endif // WINDOWUSER_H
