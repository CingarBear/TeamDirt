/********************************************************************************
** Form generated from reading UI file 'addinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINVENTORY_H
#define UI_ADDINVENTORY_H

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

class Ui_addInventory
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *addItemInput;
    QLineEdit *addItemPriceInput;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *addInventory)
    {
        if (addInventory->objectName().isEmpty())
            addInventory->setObjectName(QStringLiteral("addInventory"));
        addInventory->resize(400, 300);
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
        addInventory->setPalette(palette);
        buttonBox = new QDialogButtonBox(addInventory);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        addItemInput = new QLineEdit(addInventory);
        addItemInput->setObjectName(QStringLiteral("addItemInput"));
        addItemInput->setGeometry(QRect(100, 120, 113, 20));
        addItemPriceInput = new QLineEdit(addInventory);
        addItemPriceInput->setObjectName(QStringLiteral("addItemPriceInput"));
        addItemPriceInput->setGeometry(QRect(220, 120, 51, 20));
        label = new QLabel(addInventory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 161, 16));
        label_2 = new QLabel(addInventory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(addInventory);
        QObject::connect(buttonBox, SIGNAL(accepted()), addInventory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addInventory, SLOT(reject()));

        QMetaObject::connectSlotsByName(addInventory);
    } // setupUi

    void retranslateUi(QDialog *addInventory)
    {
        addInventory->setWindowTitle(QApplication::translate("addInventory", "Dialog", 0));
        addItemPriceInput->setText(QString());
        label->setText(QApplication::translate("addInventory", "Enter name of product and price", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addInventory: public Ui_addInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINVENTORY_H
