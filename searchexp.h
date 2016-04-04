#ifndef SEARCHEXP_H
#define SEARCHEXP_H

#include <QDialog>

namespace Ui {
class searchExp;
}

class searchExp : public QDialog
{
    Q_OBJECT

public:
    explicit searchExp(QWidget *parent = 0);
    ~searchExp();

private:
    Ui::searchExp *ui;
};

#endif // SEARCHEXP_H
