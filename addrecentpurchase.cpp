#include "addrecentpurchase.h"
#include "ui_addrecentpurchase.h"

addRecentPurchase::addRecentPurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRecentPurchase)
{
    ui->setupUi(this);
}

addRecentPurchase::~addRecentPurchase()
{
    delete ui;
}
