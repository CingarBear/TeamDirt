/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QAction *actionAdd_Member;
    QAction *actionDelete_Member;
    QAction *actionSearch_Member;
    QAction *actionUpdate_Membership;
    QAction *actionSearch_Expiring;
    QAction *actionAdd_Inventory;
    QAction *actionDelete_Inventory;
    QAction *actionSearch_Inventory;
    QAction *actionTotal_Purchases;
    QAction *actionItems_Sold;
    QAction *actionRebate;
    QAction *actionTotal_Products_Sold;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuMembership;
    QMenu *menuAdd_Delete_Member_2;
    QMenu *menuInventory;
    QMenu *menuAdd_Delete_Inventory;
    QMenu *menuPrint_Reports;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(223, 219, 180, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainMenu->setPalette(palette);
        MainMenu->setAutoFillBackground(false);
        actionAdd_Member = new QAction(MainMenu);
        actionAdd_Member->setObjectName(QStringLiteral("actionAdd_Member"));
        actionDelete_Member = new QAction(MainMenu);
        actionDelete_Member->setObjectName(QStringLiteral("actionDelete_Member"));
        actionSearch_Member = new QAction(MainMenu);
        actionSearch_Member->setObjectName(QStringLiteral("actionSearch_Member"));
        actionUpdate_Membership = new QAction(MainMenu);
        actionUpdate_Membership->setObjectName(QStringLiteral("actionUpdate_Membership"));
        actionSearch_Expiring = new QAction(MainMenu);
        actionSearch_Expiring->setObjectName(QStringLiteral("actionSearch_Expiring"));
        actionAdd_Inventory = new QAction(MainMenu);
        actionAdd_Inventory->setObjectName(QStringLiteral("actionAdd_Inventory"));
        actionDelete_Inventory = new QAction(MainMenu);
        actionDelete_Inventory->setObjectName(QStringLiteral("actionDelete_Inventory"));
        actionSearch_Inventory = new QAction(MainMenu);
        actionSearch_Inventory->setObjectName(QStringLiteral("actionSearch_Inventory"));
        actionTotal_Purchases = new QAction(MainMenu);
        actionTotal_Purchases->setObjectName(QStringLiteral("actionTotal_Purchases"));
        actionItems_Sold = new QAction(MainMenu);
        actionItems_Sold->setObjectName(QStringLiteral("actionItems_Sold"));
        actionRebate = new QAction(MainMenu);
        actionRebate->setObjectName(QStringLiteral("actionRebate"));
        actionTotal_Products_Sold = new QAction(MainMenu);
        actionTotal_Products_Sold->setObjectName(QStringLiteral("actionTotal_Products_Sold"));
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 70, 211, 181));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirt.png")));
        label->setScaledContents(true);
        MainMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuMembership = new QMenu(menuBar);
        menuMembership->setObjectName(QStringLiteral("menuMembership"));
        menuAdd_Delete_Member_2 = new QMenu(menuMembership);
        menuAdd_Delete_Member_2->setObjectName(QStringLiteral("menuAdd_Delete_Member_2"));
        menuInventory = new QMenu(menuBar);
        menuInventory->setObjectName(QStringLiteral("menuInventory"));
        menuAdd_Delete_Inventory = new QMenu(menuInventory);
        menuAdd_Delete_Inventory->setObjectName(QStringLiteral("menuAdd_Delete_Inventory"));
        menuPrint_Reports = new QMenu(menuBar);
        menuPrint_Reports->setObjectName(QStringLiteral("menuPrint_Reports"));
        MainMenu->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainMenu->setStatusBar(statusBar);

        menuBar->addAction(menuMembership->menuAction());
        menuBar->addAction(menuInventory->menuAction());
        menuBar->addAction(menuPrint_Reports->menuAction());
        menuMembership->addAction(menuAdd_Delete_Member_2->menuAction());
        menuMembership->addAction(actionSearch_Member);
        menuMembership->addAction(actionUpdate_Membership);
        menuMembership->addAction(actionSearch_Expiring);
        menuAdd_Delete_Member_2->addAction(actionAdd_Member);
        menuAdd_Delete_Member_2->addAction(actionDelete_Member);
        menuInventory->addAction(menuAdd_Delete_Inventory->menuAction());
        menuInventory->addAction(actionSearch_Inventory);
        menuAdd_Delete_Inventory->addAction(actionAdd_Inventory);
        menuAdd_Delete_Inventory->addAction(actionDelete_Inventory);
        menuPrint_Reports->addAction(actionTotal_Purchases);
        menuPrint_Reports->addAction(actionItems_Sold);
        menuPrint_Reports->addAction(actionRebate);
        menuPrint_Reports->addAction(actionTotal_Products_Sold);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "MainMenu", 0));
        actionAdd_Member->setText(QApplication::translate("MainMenu", "Add Member", 0));
        actionDelete_Member->setText(QApplication::translate("MainMenu", "Delete Member", 0));
        actionSearch_Member->setText(QApplication::translate("MainMenu", "Search Member", 0));
        actionUpdate_Membership->setText(QApplication::translate("MainMenu", "Update Membership", 0));
        actionSearch_Expiring->setText(QApplication::translate("MainMenu", "Search Expiring", 0));
        actionAdd_Inventory->setText(QApplication::translate("MainMenu", "Add Inventory", 0));
        actionDelete_Inventory->setText(QApplication::translate("MainMenu", "Delete Inventory", 0));
        actionSearch_Inventory->setText(QApplication::translate("MainMenu", "Search Inventory", 0));
        actionTotal_Purchases->setText(QApplication::translate("MainMenu", "Total Purchases", 0));
        actionItems_Sold->setText(QApplication::translate("MainMenu", "Daily Sales Report", 0));
        actionRebate->setText(QApplication::translate("MainMenu", "Rebate", 0));
        actionTotal_Products_Sold->setText(QApplication::translate("MainMenu", "Total Products Sold", 0));
        label->setText(QString());
        menuMembership->setTitle(QApplication::translate("MainMenu", "Membership", 0));
        menuAdd_Delete_Member_2->setTitle(QApplication::translate("MainMenu", "Add/Delete Member", 0));
        menuInventory->setTitle(QApplication::translate("MainMenu", "Inventory", 0));
        menuAdd_Delete_Inventory->setTitle(QApplication::translate("MainMenu", "Add/Delete Inventory", 0));
        menuPrint_Reports->setTitle(QApplication::translate("MainMenu", "Print Reports", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
