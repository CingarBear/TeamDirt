#ifndef MAINMENU_H
#define MAINMENU_H


#include <QMainWindow>
#include <QLineEdit>
#include <QString>

#include "addmem.h"
#include "deletemem.h"
#include "searchmem.h"
#include "updatemem.h"
#include "searchexp.h"
#include "addinventory.h"
#include "deleteinventory.h"
#include "searchinventory.h"
#include "totalpurchases.h"
#include "dailysalesreport.h"
#include "rebatereport.h"
#include "totalproductssold.h"
#include "generateddailyreport.h"

class addMem;

namespace Ui {
class MainMenu;
}



class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

public slots:
    void openaddMem();
    void opendeleteMem();
    void opensearchMem();
    void openupdateMem();
    void opensearchExp();
    void openaddinventory();
    void opendeleteinventory();
    void opensearchinventory();
    void opentotalpurchases();
    void opendailysalesreport();
    void openrebatereport();
    void opentotalproductssold();



private:
    addMem *addmemPtr;
    deleteMem *deletememPtr;
    searchMem *searchmemPtr;
    updateMem *updatememPtr;
    searchExp *searchexpPtr;
    addInventory *addinventoryPtr;
    deleteInventory *deleteinventoryPtr;
    searchInventory *searchinventoryPtr;
    totalPurchases *totalpurchasesPtr;
    dailySalesReport *dailysalesreportPtr;
    rebateReport *rebatereportPtr;
    totalProductsSold *totalproductssoldPtr;


private:
    Ui::MainMenu *ui;

private slots:
    void on_actionAdd_Delete_Member_2_triggered();

    void on_actionAdd_Member_triggered();

    void on_actionSearch_Member_triggered();
    void on_actionUpdate_Membership_triggered();
    void on_actionSearch_Expiring_triggered();
    void on_actionAdd_Inventory_triggered();
    void on_actionDelete_Inventory_triggered();
    void on_actionSearch_Inventory_triggered();
    void on_actionTotal_Purchases_triggered();
    void on_actionItems_Sold_triggered();
    void on_actionDaily_Report_triggered();
    void on_actionRebate_triggered();
    void on_actionTotal_Products_Sold_triggered();
};

#endif // MAINMENU_H
