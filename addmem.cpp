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
//    Member mem;
//    QString name;

//    name = ui->lineEdit->text();

//    mem.SetName(name);

//    qDebug() << name;
//    ui->lineEdit->clear();

}

void addMem::on_nameInput_returnPressed()
{

}

void addMem::on_numberInput_returnPressed()
{

}
