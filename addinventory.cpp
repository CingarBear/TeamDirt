#include "addinventory.h"
#include "ui_addinventory.h"

addInventory::addInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addInventory)
{
    ui->setupUi(this);
}

addInventory::~addInventory()
{
    delete ui;
}
