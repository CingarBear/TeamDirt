#ifndef REBATEREPORT_H
#define REBATEREPORT_H

#include <QDialog>

namespace Ui {
class rebateReport;
}

class rebateReport : public QDialog
{
    Q_OBJECT

public:
    explicit rebateReport(QWidget *parent = 0);
    ~rebateReport();

private slots:
    void on_pushButton_clicked();

private:
    Ui::rebateReport *ui;
};

#endif // REBATEREPORT_H
