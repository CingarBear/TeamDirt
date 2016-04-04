#include "updatemem.h"
#include "ui_updatemem.h"

updateMem::updateMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateMem)
{
    ui->setupUi(this);
}

updateMem::~updateMem()
{
    delete ui;
}

void updateMem::on_regualarCustButton_clicked()
{

}
