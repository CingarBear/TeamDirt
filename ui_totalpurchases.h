/********************************************************************************
** Form generated from reading UI file 'totalpurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALPURCHASES_H
#define UI_TOTALPURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_totalPurchases
{
public:
    QPushButton *salesReportBackButton;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *totalPurchases)
    {
        if (totalPurchases->objectName().isEmpty())
            totalPurchases->setObjectName(QStringLiteral("totalPurchases"));
        totalPurchases->resize(400, 300);
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
        totalPurchases->setPalette(palette);
        salesReportBackButton = new QPushButton(totalPurchases);
        salesReportBackButton->setObjectName(QStringLiteral("salesReportBackButton"));
        salesReportBackButton->setGeometry(QRect(140, 240, 131, 23));
        textBrowser = new QTextBrowser(totalPurchases);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 20, 256, 192));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette1);
        label_2 = new QLabel(totalPurchases);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 230, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label_2->setScaledContents(true);

        retranslateUi(totalPurchases);

        QMetaObject::connectSlotsByName(totalPurchases);
    } // setupUi

    void retranslateUi(QDialog *totalPurchases)
    {
        totalPurchases->setWindowTitle(QApplication::translate("totalPurchases", "Dialog", 0));
        salesReportBackButton->setText(QApplication::translate("totalPurchases", "Return to Main Menu", 0));
        textBrowser->setHtml(QApplication::translate("totalPurchases", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">Total Purchase Sales Report!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\"><br /></p></body></html>", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class totalPurchases: public Ui_totalPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALPURCHASES_H
