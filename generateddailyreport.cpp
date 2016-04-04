#include "generateddailyreport.h"
#include "ui_generateddailyreport.h"

generatedDailyReport::generatedDailyReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generatedDailyReport)
{
    ui->setupUi(this);
}

generatedDailyReport::~generatedDailyReport()
{
    delete ui;
}

void generatedDailyReport::on_pushButton_clicked()
{
    close();
}
