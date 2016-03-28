#ifndef GENERATEDAILYREPORT_H
#define GENERATEDAILYREPORT_H

#include <QDialog>

namespace Ui {
class generateDailyReport;
}

class generateDailyReport : public QDialog
{
    Q_OBJECT

public:
    explicit generateDailyReport(QWidget *parent = 0);
    ~generateDailyReport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::generateDailyReport *ui;
};

#endif // GENERATEDAILYREPORT_H
