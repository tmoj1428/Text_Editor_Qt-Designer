/********************************************************************************
** Form generated from reading UI file 'dbpassbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBPASSBOX_H
#define UI_DBPASSBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dbPassBox
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dbPassBox)
    {
        if (dbPassBox->objectName().isEmpty())
            dbPassBox->setObjectName(QString::fromUtf8("dbPassBox"));
        dbPassBox->resize(533, 340);
        verticalLayout_2 = new QVBoxLayout(dbPassBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dbPassBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(dbPassBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(dbPassBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(dbPassBox);
        QObject::connect(buttonBox, SIGNAL(accepted()), dbPassBox, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dbPassBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(dbPassBox);
    } // setupUi

    void retranslateUi(QDialog *dbPassBox)
    {
        dbPassBox->setWindowTitle(QCoreApplication::translate("dbPassBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dbPassBox", "Enter your local mysql password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dbPassBox: public Ui_dbPassBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBPASSBOX_H
