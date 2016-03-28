#include "itemssold.h"
#include "ui_itemssold.h"

itemsSold::itemsSold(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::itemsSold)
{
    ui->setupUi(this);
}

itemsSold::~itemsSold()
{
    delete ui;
}
