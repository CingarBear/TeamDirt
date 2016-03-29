/********************************************************************************
** Form generated from reading UI file 'searchmem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHMEM_H
#define UI_SEARCHMEM_H

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

class Ui_searchMem
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *searchInput;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *searchMem)
    {
        if (searchMem->objectName().isEmpty())
            searchMem->setObjectName(QStringLiteral("searchMem"));
        searchMem->resize(400, 300);
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
        searchMem->setPalette(palette);
        buttonBox = new QDialogButtonBox(searchMem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 190, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        searchInput = new QLineEdit(searchMem);
        searchInput->setObjectName(QStringLiteral("searchInput"));
        searchInput->setGeometry(QRect(140, 140, 113, 20));
        label = new QLabel(searchMem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 90, 171, 16));
        label_3 = new QLabel(searchMem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 230, 71, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_3->setScaledContents(true);

        retranslateUi(searchMem);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchMem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchMem, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchMem);
    } // setupUi

    void retranslateUi(QDialog *searchMem)
    {
        searchMem->setWindowTitle(QApplication::translate("searchMem", "Dialog", 0));
        label->setText(QApplication::translate("searchMem", "Enter Customer to search for", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class searchMem: public Ui_searchMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHMEM_H
