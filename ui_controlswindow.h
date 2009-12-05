/********************************************************************************
** Form generated from reading ui file 'controlswindow.ui'
**
** Created: Sat Dec 5 17:07:09 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CONTROLSWINDOW_H
#define UI_CONTROLSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ControlsWindowClass
{
public:
    QFrame *controlsWindow_frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *scanInterval_horizontalLayout;
    QLabel *scanInterval_label;
    QComboBox *scanInterval_comboBox;
    QHBoxLayout *templateSize_horizontalLayout;
    QLabel *templateSize_label;
    QComboBox *templateSize_comboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *close_pushButton;

    void setupUi(QDialog *ControlsWindowClass)
    {
        if (ControlsWindowClass->objectName().isEmpty())
            ControlsWindowClass->setObjectName(QString::fromUtf8("ControlsWindowClass"));
        ControlsWindowClass->resize(212, 124);
        controlsWindow_frame = new QFrame(ControlsWindowClass);
        controlsWindow_frame->setObjectName(QString::fromUtf8("controlsWindow_frame"));
        controlsWindow_frame->setGeometry(QRect(10, 10, 196, 106));
        verticalLayout = new QVBoxLayout(controlsWindow_frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scanInterval_horizontalLayout = new QHBoxLayout();
        scanInterval_horizontalLayout->setSpacing(6);
        scanInterval_horizontalLayout->setObjectName(QString::fromUtf8("scanInterval_horizontalLayout"));
        scanInterval_label = new QLabel(controlsWindow_frame);
        scanInterval_label->setObjectName(QString::fromUtf8("scanInterval_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scanInterval_label->sizePolicy().hasHeightForWidth());
        scanInterval_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        scanInterval_label->setFont(font);

        scanInterval_horizontalLayout->addWidget(scanInterval_label);

        scanInterval_comboBox = new QComboBox(controlsWindow_frame);
        scanInterval_comboBox->setObjectName(QString::fromUtf8("scanInterval_comboBox"));
        scanInterval_comboBox->setEnabled(false);

        scanInterval_horizontalLayout->addWidget(scanInterval_comboBox);


        verticalLayout->addLayout(scanInterval_horizontalLayout);

        templateSize_horizontalLayout = new QHBoxLayout();
        templateSize_horizontalLayout->setSpacing(6);
        templateSize_horizontalLayout->setObjectName(QString::fromUtf8("templateSize_horizontalLayout"));
        templateSize_label = new QLabel(controlsWindow_frame);
        templateSize_label->setObjectName(QString::fromUtf8("templateSize_label"));
        sizePolicy.setHeightForWidth(templateSize_label->sizePolicy().hasHeightForWidth());
        templateSize_label->setSizePolicy(sizePolicy);
        templateSize_label->setFont(font);

        templateSize_horizontalLayout->addWidget(templateSize_label);

        templateSize_comboBox = new QComboBox(controlsWindow_frame);
        templateSize_comboBox->setObjectName(QString::fromUtf8("templateSize_comboBox"));
        templateSize_comboBox->setEnabled(false);

        templateSize_horizontalLayout->addWidget(templateSize_comboBox);


        verticalLayout->addLayout(templateSize_horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        close_pushButton = new QPushButton(controlsWindow_frame);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        verticalLayout->addWidget(close_pushButton);


        retranslateUi(ControlsWindowClass);

        QMetaObject::connectSlotsByName(ControlsWindowClass);
    } // setupUi

    void retranslateUi(QDialog *ControlsWindowClass)
    {
        ControlsWindowClass->setWindowTitle(QApplication::translate("ControlsWindowClass", "Qcorr Controls", 0, QApplication::UnicodeUTF8));
        scanInterval_label->setText(QApplication::translate("ControlsWindowClass", "Scan Interval", 0, QApplication::UnicodeUTF8));
        templateSize_label->setText(QApplication::translate("ControlsWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Template Size</p></body></html>", 0, QApplication::UnicodeUTF8));
        close_pushButton->setText(QApplication::translate("ControlsWindowClass", "&Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ControlsWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ControlsWindowClass: public Ui_ControlsWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSWINDOW_H