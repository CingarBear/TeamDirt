#include "generatedailyreport.h"
#include "ui_generatedailyreport.h"

generateDailyReport::generateDailyReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generateDailyReport)
{
    ui->setupUi(this);
}

generateDailyReport::~generateDailyReport()
{
    delete ui;
}

void generateDailyReport::on_pushButton_clicked()
{
    close();
}
