/********************************************************************************
** Form generated from reading UI file 'addmem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEM_H
#define UI_ADDMEM_H

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

class Ui_addMem
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *nameInput;
    QLineEdit *numberInput;
    QLineEdit *typeInput;
    QLineEdit *dateInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *recentPurchaseInput;
    QSpinBox *recentPurchaseQuantity;
    QLabel *label_7;

    void setupUi(QDialog *addMem)
    {
        if (addMem->objectName().isEmpty())
            addMem->setObjectName(QStringLiteral("addMem"));
        addMem->resize(400, 300);
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
        addMem->setPalette(palette);
        buttonBox = new QDialogButtonBox(addMem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nameInput = new QLineEdit(addMem);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        nameInput->setGeometry(QRect(180, 50, 113, 20));
        numberInput = new QLineEdit(addMem);
        numberInput->setObjectName(QStringLiteral("numberInput"));
        numberInput->setGeometry(QRect(180, 80, 113, 20));
        typeInput = new QLineEdit(addMem);
        typeInput->setObjectName(QStringLiteral("typeInput"));
        typeInput->setGeometry(QRect(180, 110, 113, 20));
        dateInput = new QLineEdit(addMem);
        dateInput->setObjectName(QStringLiteral("dateInput"));
        dateInput->setGeometry(QRect(180, 140, 113, 20));
        label = new QLabel(addMem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 101, 16));
        label_2 = new QLabel(addMem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 101, 16));
        label_3 = new QLabel(addMem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 101, 16));
        label_4 = new QLabel(addMem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 101, 16));
        label_5 = new QLabel(addMem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 0, 181, 41));
        label_6 = new QLabel(addMem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 111, 16));
        recentPurchaseInput = new QLineEdit(addMem);
        recentPurchaseInput->setObjectName(QStringLiteral("recentPurchaseInput"));
        recentPurchaseInput->setGeometry(QRect(180, 170, 113, 20));
        recentPurchaseQuantity = new QSpinBox(addMem);
        recentPurchaseQuantity->setObjectName(QStringLiteral("recentPurchaseQuantity"));
        recentPurchaseQuantity->setGeometry(QRect(310, 170, 42, 22));
        label_7 = new QLabel(addMem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 230, 71, 81));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_7->setScaledContents(true);

        retranslateUi(addMem);
        QObject::connect(buttonBox, SIGNAL(accepted()), addMem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addMem, SLOT(reject()));

        QMetaObject::connectSlotsByName(addMem);
    } // setupUi

    void retranslateUi(QDialog *addMem)
    {
        addMem->setWindowTitle(QApplication::translate("addMem", "Dialog", 0));
        label->setText(QApplication::translate("addMem", "Customer Name", 0));
        label_2->setText(QApplication::translate("addMem", "Customer Number", 0));
        label_3->setText(QApplication::translate("addMem", "Type of Customer", 0));
        label_4->setText(QApplication::translate("addMem", "Membership Date", 0));
        label_5->setText(QApplication::translate("addMem", "Adding new Member", 0));
        label_6->setText(QApplication::translate("addMem", "Most recent purchase", 0));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addMem: public Ui_addMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEM_H
