#include "totalpurchases.h"
#include "ui_totalpurchases.h"

totalPurchases::totalPurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::totalPurchases)
{
    ui->setupUi(this);
}

totalPurchases::~totalPurchases()
{
    delete ui;
}

void totalPurchases::on_salesReportBackButton_clicked()
{
    close();
}
