/********************************************************************************
** Form generated from reading UI file 'searchexp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHEXP_H
#define UI_SEARCHEXP_H

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

class Ui_searchExp
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *expInput;
    QLabel *label_2;

    void setupUi(QDialog *searchExp)
    {
        if (searchExp->objectName().isEmpty())
            searchExp->setObjectName(QStringLiteral("searchExp"));
        searchExp->resize(400, 300);
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
        searchExp->setPalette(palette);
        buttonBox = new QDialogButtonBox(searchExp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(searchExp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 121, 16));
        expInput = new QLineEdit(searchExp);
        expInput->setObjectName(QStringLiteral("expInput"));
        expInput->setGeometry(QRect(130, 120, 113, 20));
        label_2 = new QLabel(searchExp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(searchExp);
        QObject::connect(buttonBox, SIGNAL(accepted()), searchExp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), searchExp, SLOT(reject()));

        QMetaObject::connectSlotsByName(searchExp);
    } // setupUi

    void retranslateUi(QDialog *searchExp)
    {
        searchExp->setWindowTitle(QApplication::translate("searchExp", "Dialog", 0));
        label->setText(QApplication::translate("searchExp", "Enter expiration month", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class searchExp: public Ui_searchExp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHEXP_H
