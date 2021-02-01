/********************************************************************************
** Form generated from reading UI file 'font.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONT_H
#define UI_FONT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_font
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget_3;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *font)
    {
        if (font->objectName().isEmpty())
            font->setObjectName(QString::fromUtf8("font"));
        font->resize(400, 300);
        gridLayout = new QGridLayout(font);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget = new QListWidget(font);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_2->addWidget(listWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listWidget_2 = new QListWidget(font);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        horizontalLayout_3->addWidget(listWidget_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listWidget_3 = new QListWidget(font);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        horizontalLayout_4->addWidget(listWidget_3);


        gridLayout->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        lineEdit = new QLineEdit(font);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(font);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 3);


        retranslateUi(font);
        QObject::connect(buttonBox, SIGNAL(accepted()), font, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), font, SLOT(reject()));

        QMetaObject::connectSlotsByName(font);
    } // setupUi

    void retranslateUi(QDialog *font)
    {
        font->setWindowTitle(QCoreApplication::translate("font", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("font", "10", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("font", "12", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("font", "14", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("font", "16", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("font", "18", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("font", "24", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("font", "36", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("font", "48", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("font", "72", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem9 = listWidget_2->item(0);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("font", "Bold", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_2->item(1);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("font", "Italic", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_2->item(2);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("font", "Normal", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class font: public Ui_font {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONT_H
