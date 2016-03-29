/********************************************************************************
** Form generated from reading UI file 'updatemem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEMEM_H
#define UI_UPDATEMEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updateMem
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *executiveCustButton;
    QPushButton *regualarCustButton;
    QLabel *label;
    QLineEdit *nameInput;
    QLabel *label_2;

    void setupUi(QDialog *updateMem)
    {
        if (updateMem->objectName().isEmpty())
            updateMem->setObjectName(QStringLiteral("updateMem"));
        updateMem->resize(400, 300);
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
        updateMem->setPalette(palette);
        buttonBox = new QDialogButtonBox(updateMem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        executiveCustButton = new QPushButton(updateMem);
        executiveCustButton->setObjectName(QStringLiteral("executiveCustButton"));
        executiveCustButton->setGeometry(QRect(210, 70, 141, 23));
        regualarCustButton = new QPushButton(updateMem);
        regualarCustButton->setObjectName(QStringLiteral("regualarCustButton"));
        regualarCustButton->setGeometry(QRect(30, 70, 141, 23));
        label = new QLabel(updateMem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 130, 181, 16));
        nameInput = new QLineEdit(updateMem);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        nameInput->setGeometry(QRect(130, 170, 113, 20));
        label_2 = new QLabel(updateMem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(updateMem);
        QObject::connect(buttonBox, SIGNAL(accepted()), updateMem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), updateMem, SLOT(reject()));

        QMetaObject::connectSlotsByName(updateMem);
    } // setupUi

    void retranslateUi(QDialog *updateMem)
    {
        updateMem->setWindowTitle(QApplication::translate("updateMem", "Dialog", 0));
        executiveCustButton->setText(QApplication::translate("updateMem", "View Executive Customers", 0));
        regualarCustButton->setText(QApplication::translate("updateMem", "View Regular Customers", 0));
        label->setText(QApplication::translate("updateMem", "Enter name of Customer to Upgrade", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class updateMem: public Ui_updateMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEMEM_H
