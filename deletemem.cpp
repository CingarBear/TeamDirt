#include "deletemem.h"
#include "ui_deletemem.h"

deleteMem::deleteMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteMem)
{
    ui->setupUi(this);
}

deleteMem::~deleteMem()
{
    delete ui;
}
