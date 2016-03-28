#include "searchinventory.h"
#include "ui_searchinventory.h"

searchInventory::searchInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchInventory)
{
    ui->setupUi(this);
}

searchInventory::~searchInventory()
{
    delete ui;
}
