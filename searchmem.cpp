#include "searchmem.h"
#include "ui_searchmem.h"

searchMem::searchMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchMem)
{
    ui->setupUi(this);
}

searchMem::~searchMem()
{
    delete ui;
}
