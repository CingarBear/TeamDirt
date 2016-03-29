/********************************************************************************
** Form generated from reading UI file 'generateddailyreport.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEDDAILYREPORT_H
#define UI_GENERATEDDAILYREPORT_H

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

class Ui_generatedDailyReport
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *generatedDailyReport)
    {
        if (generatedDailyReport->objectName().isEmpty())
            generatedDailyReport->setObjectName(QStringLiteral("generatedDailyReport"));
        generatedDailyReport->resize(400, 300);
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
        generatedDailyReport->setPalette(palette);
        pushButton = new QPushButton(generatedDailyReport);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 121, 23));
        label = new QLabel(generatedDailyReport);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 230, 71, 81));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/TeamDirtSolo.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(generatedDailyReport);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 20, 256, 192));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette1);

        retranslateUi(generatedDailyReport);

        QMetaObject::connectSlotsByName(generatedDailyReport);
    } // setupUi

    void retranslateUi(QDialog *generatedDailyReport)
    {
        generatedDailyReport->setWindowTitle(QApplication::translate("generatedDailyReport", "Dialog", 0));
        pushButton->setText(QApplication::translate("generatedDailyReport", "Return to Main Menu", 0));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("generatedDailyReport", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">Daily Report!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class generatedDailyReport: public Ui_generatedDailyReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEDDAILYREPORT_H
