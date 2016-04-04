#include "searchexp.h"
#include "ui_searchexp.h"

searchExp::searchExp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchExp)
{
    ui->setupUi(this);
}

searchExp::~searchExp()
{
    delete ui;
}
