/********************************************************************************
** Form generated from reading UI file 'deletemem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEM_H
#define UI_DELETEMEM_H

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

class Ui_deleteMem
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *nameInput;
    QLabel *label_3;

    void setupUi(QDialog *deleteMem)
    {
        if (deleteMem->objectName().isEmpty())
            deleteMem->setObjectName(QStringLiteral("deleteMem"));
        deleteMem->resize(400, 300);
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
        deleteMem->setPalette(palette);
        buttonBox = new QDialogButtonBox(deleteMem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(deleteMem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 191, 31));
        nameInput = new QLineEdit(deleteMem);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        nameInput->setGeometry(QRect(120, 140, 113, 20));
        label_3 = new QLabel(deleteMem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 230, 71, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_3->setScaledContents(true);

        retranslateUi(deleteMem);
        QObject::connect(buttonBox, SIGNAL(accepted()), deleteMem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), deleteMem, SLOT(reject()));

        QMetaObject::connectSlotsByName(deleteMem);
    } // setupUi

    void retranslateUi(QDialog *deleteMem)
    {
        deleteMem->setWindowTitle(QApplication::translate("deleteMem", "Dialog", 0));
        label->setText(QApplication::translate("deleteMem", "Enter name of Customer to Remove", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deleteMem: public Ui_deleteMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEM_H
