#ifndef SEARCHINVENTORY_H
#define SEARCHINVENTORY_H

#include <QDialog>

namespace Ui {
class searchInventory;
}

class searchInventory : public QDialog
{
    Q_OBJECT

public:
    explicit searchInventory(QWidget *parent = 0);
    ~searchInventory();

private:
    Ui::searchInventory *ui;
};

#endif // SEARCHINVENTORY_H
