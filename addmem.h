#ifndef ADDMEM_H
#define ADDMEM_H

#include <QDialog>
#include "header.h"

namespace Ui {
class addMem;
}

class addMem : public QDialog
{
    Q_OBJECT

public:
    explicit addMem(QWidget *parent = 0);
    ~addMem();


private slots:
    void on_nameInput_returnPressed(memberNode *Ptr);

    void on_nameInput_returnPressed();

private:
    Ui::addMem *ui;
};

#endif // ADDMEM_H
