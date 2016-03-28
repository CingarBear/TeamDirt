#include "rebatereport.h"
#include "ui_rebatereport.h"

rebateReport::rebateReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rebateReport)
{
    ui->setupUi(this);
}

rebateReport::~rebateReport()
{
    delete ui;
}

void rebateReport::on_pushButton_clicked()
{
    close();
}
