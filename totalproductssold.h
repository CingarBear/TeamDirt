#ifndef TOTALPRODUCTSSOLD_H
#define TOTALPRODUCTSSOLD_H

#include <QDialog>

namespace Ui {
class totalProductsSold;
}

class totalProductsSold : public QDialog
{
    Q_OBJECT

public:
    explicit totalProductsSold(QWidget *parent = 0);
    ~totalProductsSold();

private slots:
    void on_pushButton_clicked();

private:
    Ui::totalProductsSold *ui;
};

#endif // TOTALPRODUCTSSOLD_H
