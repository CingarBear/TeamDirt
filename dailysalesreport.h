#ifndef DAILYSALESREPORT_H
#define DAILYSALESREPORT_H

#include <QDialog>

#include "generateddailyreport.h"

class generateDailyReport;

namespace Ui {
class dailySalesReport;
}

class dailySalesReport : public QDialog
{
    Q_OBJECT

public:
    explicit dailySalesReport(QWidget *parent = 0);
    ~dailySalesReport();

public slots:
        void opengenerateddailyreport();

private:
        generatedDailyReport *generateddailyreportPtr;

private slots:


    void on_pushButton_clicked();

private:
    Ui::dailySalesReport *ui;
};

#endif // DAILYSALESREPORT_H
