/********************************************************************************
** Form generated from reading UI file 'deleteinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEINVENTORY_H
#define UI_DELETEINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_deleteInventory
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *deleteInventory)
    {
        if (deleteInventory->objectName().isEmpty())
            deleteInventory->setObjectName(QStringLiteral("deleteInventory"));
        deleteInventory->resize(400, 300);
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
        deleteInventory->setPalette(palette);
        buttonBox = new QDialogButtonBox(deleteInventory);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-60, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(deleteInventory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 181, 16));
        lineEdit = new QLineEdit(deleteInventory);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 130, 113, 20));
        label_2 = new QLabel(deleteInventory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(deleteInventory);
        QObject::connect(buttonBox, SIGNAL(accepted()), deleteInventory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), deleteInventory, SLOT(reject()));

        QMetaObject::connectSlotsByName(deleteInventory);
    } // setupUi

    void retranslateUi(QDialog *deleteInventory)
    {
        deleteInventory->setWindowTitle(QApplication::translate("deleteInventory", "Dialog", 0));
        label->setText(QApplication::translate("deleteInventory", "Enter Item to delete from Inventory", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deleteInventory: public Ui_deleteInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEINVENTORY_H
