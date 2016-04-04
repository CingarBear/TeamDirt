#ifndef TOTALPURCHASES_H
#define TOTALPURCHASES_H

#include <QDialog>

namespace Ui {
class totalPurchases;
}

class totalPurchases : public QDialog
{
    Q_OBJECT

public:
    explicit totalPurchases(QWidget *parent = 0);
    ~totalPurchases();

private slots:
    void on_salesReportBackButton_clicked();

private:
    Ui::totalPurchases *ui;
};

#endif // TOTALPURCHASES_H
