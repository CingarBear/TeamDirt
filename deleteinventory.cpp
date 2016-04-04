#include "deleteinventory.h"
#include "ui_deleteinventory.h"

deleteInventory::deleteInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteInventory)
{
    ui->setupUi(this);
}

deleteInventory::~deleteInventory()
{
    delete ui;
}
