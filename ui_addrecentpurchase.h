/********************************************************************************
** Form generated from reading UI file 'addrecentpurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECENTPURCHASE_H
#define UI_ADDRECENTPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addRecentPurchase
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *recentPurchaseInput;
    QSpinBox *recentPQuantity;

    void setupUi(QDialog *addRecentPurchase)
    {
        if (addRecentPurchase->objectName().isEmpty())
            addRecentPurchase->setObjectName(QStringLiteral("addRecentPurchase"));
        addRecentPurchase->resize(329, 128);
        buttonBox = new QDialogButtonBox(addRecentPurchase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(240, 40, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addRecentPurchase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 201, 20));
        recentPurchaseInput = new QLineEdit(addRecentPurchase);
        recentPurchaseInput->setObjectName(QStringLiteral("recentPurchaseInput"));
        recentPurchaseInput->setGeometry(QRect(30, 60, 111, 21));
        recentPQuantity = new QSpinBox(addRecentPurchase);
        recentPQuantity->setObjectName(QStringLiteral("recentPQuantity"));
        recentPQuantity->setGeometry(QRect(160, 60, 42, 22));

        retranslateUi(addRecentPurchase);
        QObject::connect(buttonBox, SIGNAL(accepted()), addRecentPurchase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addRecentPurchase, SLOT(reject()));

        QMetaObject::connectSlotsByName(addRecentPurchase);
    } // setupUi

    void retranslateUi(QDialog *addRecentPurchase)
    {
        addRecentPurchase->setWindowTitle(QApplication::translate("addRecentPurchase", "Dialog", 0));
        label->setText(QApplication::translate("addRecentPurchase", "Enter most recent purchase and quantity", 0));
    } // retranslateUi

};

namespace Ui {
    class addRecentPurchase: public Ui_addRecentPurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECENTPURCHASE_H
