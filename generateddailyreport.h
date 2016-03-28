#ifndef GENERATEDDAILYREPORT_H
#define GENERATEDDAILYREPORT_H

#include <QDialog>

namespace Ui {
class generatedDailyReport;
}

class generatedDailyReport : public QDialog
{
    Q_OBJECT

public:
    explicit generatedDailyReport(QWidget *parent = 0);
    ~generatedDailyReport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::generatedDailyReport *ui;
};

#endif // GENERATEDDAILYREPORT_H
