#ifndef DELETEMEM_H
#define DELETEMEM_H

#include <QDialog>

namespace Ui {
class deleteMem;
}

class deleteMem : public QDialog
{
    Q_OBJECT

public:
    explicit deleteMem(QWidget *parent = 0);
    ~deleteMem();

private:
    Ui::deleteMem *ui;
};

#endif // DELETEMEM_H
