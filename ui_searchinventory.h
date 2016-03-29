/********************************************************************************
** Form generated from reading UI file 'searchinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHINVENTORY_H
#define UI_SEARCHINVENTORY_H

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

class Ui_searchInventory
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *searchProductInput;
    QLabel *label_2;

    void setupUi(QDialog *searchInventory)
    {
        if (searchInventory->objectName().isEmpty())
            searchInventory->setObjectName(QStringLiteral("searchInventory"));
        searchInventory->resize(400, 300);
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
        searchInventory->setPalette(palette);
        buttonBox = new QDialogButtonBox(searchInventory);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(searchInventory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 90, 181, 16));
        searchProductInput = new QLineEdit(searchInventory);
        searchProductInput->setObjectName(QStringLiteral("searchProductInput"));
        searchProductInput->setGeometry(QRect(140, 140, 113, 20));
        label_2 = new QLabel(searchInventory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(searchInventory);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchInventory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchInventory, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchInventory);
    } // setupUi

    void retranslateUi(QDialog *searchInventory)
    {
        searchInventory->setWindowTitle(QApplication::translate("searchInventory", "Dialog", 0));
        label->setText(QApplication::translate("searchInventory", "Enter name of Product to search for", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class searchInventory: public Ui_searchInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINVENTORY_H
