#ifndef UPDATEMEM_H
#define UPDATEMEM_H

#include <QDialog>

namespace Ui {
class updateMem;
}

class updateMem : public QDialog
{
    Q_OBJECT

public:
    explicit updateMem(QWidget *parent = 0);
    ~updateMem();

private slots:
    void on_regualarCustButton_clicked();

private:
    Ui::updateMem *ui;
};

#endif // UPDATEMEM_H
