#include "addmem.h"
#include "ui_addmem.h"

#include "header.h"



addMem::addMem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMem)
{

    ui->setupUi(this);

}

addMem::~addMem()
{
    delete ui;
}



void addMem::on_nameInput_returnPressed(memberNode *Ptr)
{


}

void addMem::on_nameInput_returnPressed()
{

}
