#include "mainmenu.h"
#include "ui_mainmenu.h"

#include "header.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    connect(ui->actionAdd_Member, SIGNAL(triggered(bool)),this, SLOT(openaddmem()));
    connect(ui->actionDelete_Member, SIGNAL(triggered(bool)),this,SLOT(opendeleteMem()));
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::openaddMem()
{
    addmemPtr = new addMem();
    addmemPtr->show();
}

void MainMenu::opendeleteMem()
{
    deletememPtr = new deleteMem();
    deletememPtr->show();
}

void MainMenu::on_actionAdd_Member_triggered()
{
    openaddMem();
}

void MainMenu::on_actionAdd_Delete_Member_2_triggered()
{
    opendeleteMem();
}

void MainMenu::opensearchMem()
{
    searchmemPtr = new searchMem();
    searchmemPtr->show();
}

void MainMenu::on_actionSearch_Member_triggered()
{
    opensearchMem();
}

void MainMenu::openupdateMem()
{
    updatememPtr = new updateMem();
    updatememPtr->show();
}

void MainMenu::on_actionUpdate_Membership_triggered()
{
    openupdateMem();
}

void MainMenu::opensearchExp()
{
    searchexpPtr = new searchExp();
    searchexpPtr->show();
}

void MainMenu::on_actionSearch_Expiring_triggered()
{
    opensearchExp();
}

void MainMenu::openaddinventory()
{
    addinventoryPtr = new addInventory();
    addinventoryPtr->show();
}

void MainMenu::on_actionAdd_Inventory_triggered()
{
    openaddinventory();
}

void MainMenu::opendeleteinventory()
{
    deleteinventoryPtr = new deleteInventory();
    deleteinventoryPtr->show();
}

void MainMenu::on_actionDelete_Inventory_triggered()
{
    opendeleteinventory();
}

void MainMenu::opensearchinventory()
{
    searchinventoryPtr = new searchInventory();
    searchinventoryPtr->show();
}

void MainMenu::on_actionSearch_Inventory_triggered()
{
    opensearchinventory();
}

void MainMenu::opentotalpurchases()
{
    totalpurchasesPtr = new totalPurchases();
    totalpurchasesPtr->show();
}

void MainMenu::on_actionTotal_Purchases_triggered()
{
    opentotalpurchases();
}


void MainMenu::opendailysalesreport()
{
    dailysalesreportPtr = new dailySalesReport();
    dailysalesreportPtr->show();
}

void MainMenu::on_actionDaily_Report_triggered()
{
    opendailysalesreport();
}

void MainMenu::openrebatereport()
{
    rebatereportPtr = new rebateReport();
    rebatereportPtr->show();
}

void MainMenu::on_actionRebate_triggered()
{
    openrebatereport();
}

void MainMenu::on_actionItems_Sold_triggered()
{
    opendailysalesreport();
}

void MainMenu::opentotalproductssold()
{
    totalproductssoldPtr = new totalProductsSold();
    totalproductssoldPtr->show();
}

void MainMenu::on_actionTotal_Products_Sold_triggered()
{
    opentotalproductssold();
}
