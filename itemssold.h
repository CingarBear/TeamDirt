#ifndef ITEMSSOLD_H
#define ITEMSSOLD_H

#include <QDialog>

namespace Ui {
class itemsSold;
}

class itemsSold : public QDialog
{
    Q_OBJECT

public:
    explicit itemsSold(QWidget *parent = 0);
    ~itemsSold();

private:
    Ui::itemsSold *ui;
};

#endif // ITEMSSOLD_H
