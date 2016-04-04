#include "dailysalesreport.h"
#include "ui_dailysalesreport.h"

dailySalesReport::dailySalesReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dailySalesReport)
{
    ui->setupUi(this);
}

dailySalesReport::~dailySalesReport()
{
    delete ui;
}



void dailySalesReport::opengenerateddailyreport()
{
    generateddailyreportPtr = new generatedDailyReport();
    generateddailyreportPtr->show();
}

void dailySalesReport::on_pushButton_clicked()
{
    opengenerateddailyreport();
    close();
}
