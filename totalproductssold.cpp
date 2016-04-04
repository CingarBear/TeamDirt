#include "totalproductssold.h"
#include "ui_totalproductssold.h"

totalProductsSold::totalProductsSold(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::totalProductsSold)
{
    ui->setupUi(this);
}

totalProductsSold::~totalProductsSold()
{
    delete ui;
}

void totalProductsSold::on_pushButton_clicked()
{
    close();
}
