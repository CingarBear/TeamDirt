#ifndef ADDINVENTORY_H
#define ADDINVENTORY_H

#include <QDialog>

namespace Ui {
class addInventory;
}

class addInventory : public QDialog
{
    Q_OBJECT

public:
    explicit addInventory(QWidget *parent = 0);
    ~addInventory();

private:
    Ui::addInventory *ui;
};

#endif // ADDINVENTORY_H
