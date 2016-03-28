#ifndef DELETEINVENTORY_H
#define DELETEINVENTORY_H

#include <QDialog>

namespace Ui {
class deleteInventory;
}

class deleteInventory : public QDialog
{
    Q_OBJECT

public:
    explicit deleteInventory(QWidget *parent = 0);
    ~deleteInventory();

private:
    Ui::deleteInventory *ui;
};

#endif // DELETEINVENTORY_H
