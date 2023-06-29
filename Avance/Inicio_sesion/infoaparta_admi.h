#ifndef INFOAPARTA_ADMI_H
#define INFOAPARTA_ADMI_H

#include <QWidget>
class QRegularExpressionValidator;
namespace Ui {
class InfoAparta_Admi;
}

class InfoAparta_Admi : public QWidget
{
    Q_OBJECT

public:
    explicit InfoAparta_Admi(QWidget *parent = nullptr);
    ~InfoAparta_Admi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InfoAparta_Admi *ui;
    QList<QString> m_registeredIDs;
    QRegularExpressionValidator *m_regExpVal;
    QRegularExpressionValidator *m_regExpVal_2;
    QRegularExpressionValidator *m_regExpVal_3;
    QRegularExpressionValidator *m_regExpVal_4;
    QRegularExpressionValidator *m_regExpVal_5;
    bool isIdApartaExist(const QString& idAparta); // Declaración de la función
};

#endif // INFOAPARTA_ADMI_H

