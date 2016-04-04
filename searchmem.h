#ifndef SEARCHMEM_H
#define SEARCHMEM_H

#include <QDialog>

namespace Ui {
class searchMem;
}

class searchMem : public QDialog
{
    Q_OBJECT

public:
    explicit searchMem(QWidget *parent = 0);
    ~searchMem();

private:
    Ui::searchMem *ui;
};

#endif // SEARCHMEM_H
