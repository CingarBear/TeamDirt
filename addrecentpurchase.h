#ifndef ADDRECENTPURCHASE_H
#define ADDRECENTPURCHASE_H

#include <QDialog>

namespace Ui {
class addRecentPurchase;
}

class addRecentPurchase : public QDialog
{
    Q_OBJECT

public:
    explicit addRecentPurchase(QWidget *parent = 0);
    ~addRecentPurchase();

private:
    Ui::addRecentPurchase *ui;
};

#endif // ADDRECENTPURCHASE_H
