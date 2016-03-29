/********************************************************************************
** Form generated from reading UI file 'dailysalesreport.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILYSALESREPORT_H
#define UI_DAILYSALESREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dailySalesReport
{
public:
    QDateEdit *dailyReportInput;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *dailySalesReport)
    {
        if (dailySalesReport->objectName().isEmpty())
            dailySalesReport->setObjectName(QStringLiteral("dailySalesReport"));
        dailySalesReport->resize(400, 300);
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
        dailySalesReport->setPalette(palette);
        dailyReportInput = new QDateEdit(dailySalesReport);
        dailyReportInput->setObjectName(QStringLiteral("dailyReportInput"));
        dailyReportInput->setGeometry(QRect(140, 110, 110, 22));
        label = new QLabel(dailySalesReport);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 80, 71, 16));
        pushButton = new QPushButton(dailySalesReport);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 170, 101, 23));
        label_2 = new QLabel(dailySalesReport);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(dailySalesReport);

        QMetaObject::connectSlotsByName(dailySalesReport);
    } // setupUi

    void retranslateUi(QDialog *dailySalesReport)
    {
        dailySalesReport->setWindowTitle(QApplication::translate("dailySalesReport", "Dialog", 0));
        label->setText(QApplication::translate("dailySalesReport", "Enter Date", 0));
        pushButton->setText(QApplication::translate("dailySalesReport", "Generate Report", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dailySalesReport: public Ui_dailySalesReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILYSALESREPORT_H
