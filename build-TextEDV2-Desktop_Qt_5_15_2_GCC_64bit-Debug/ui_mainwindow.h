/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Window;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionFont;
    QAction *actionStore_in_DB;
    QAction *actionClear_DB;
    QAction *actionClear_DB3;
    QAction *actionConnect_to_DB;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *rightAlignmentButton;
    QComboBox *colorComboBox;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QPushButton *leftAlignmentButton;
    QPushButton *underlineButton;
    QPushButton *italicButton;
    QPushButton *clearButton;
    QPushButton *boldButton;
    QPushButton *justifyAlignmentButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuHello;
    QMenu *menuData_base;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(838, 737);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Window->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionStore_in_DB = new QAction(MainWindow);
        actionStore_in_DB->setObjectName(QString::fromUtf8("actionStore_in_DB"));
        actionClear_DB = new QAction(MainWindow);
        actionClear_DB->setObjectName(QString::fromUtf8("actionClear_DB"));
        actionClear_DB3 = new QAction(MainWindow);
        actionClear_DB3->setObjectName(QString::fromUtf8("actionClear_DB3"));
        actionConnect_to_DB = new QAction(MainWindow);
        actionConnect_to_DB->setObjectName(QString::fromUtf8("actionConnect_to_DB"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rightAlignmentButton = new QPushButton(widget);
        rightAlignmentButton->setObjectName(QString::fromUtf8("rightAlignmentButton"));
        rightAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAlignmentButton->setIcon(icon5);
        rightAlignmentButton->setCheckable(true);

        gridLayout_2->addWidget(rightAlignmentButton, 0, 2, 1, 1);

        colorComboBox = new QComboBox(widget);
        colorComboBox->addItem(QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon11, QString());
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));

        gridLayout_2->addWidget(colorComboBox, 1, 0, 1, 2);

        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        gridLayout_2->addWidget(fontComboBox, 1, 4, 1, 2);

        sizeComboBox = new QComboBox(widget);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));

        gridLayout_2->addWidget(sizeComboBox, 1, 2, 1, 2);

        leftAlignmentButton = new QPushButton(widget);
        leftAlignmentButton->setObjectName(QString::fromUtf8("leftAlignmentButton"));
        leftAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        leftAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAlignmentButton->setIcon(icon12);
        leftAlignmentButton->setCheckable(true);

        gridLayout_2->addWidget(leftAlignmentButton, 0, 0, 1, 1);

        underlineButton = new QPushButton(widget);
        underlineButton->setObjectName(QString::fromUtf8("underlineButton"));
        underlineButton->setCursor(QCursor(Qt::PointingHandCursor));
        underlineButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineButton->setIcon(icon13);
        underlineButton->setCheckable(true);

        gridLayout_2->addWidget(underlineButton, 0, 6, 1, 1);

        italicButton = new QPushButton(widget);
        italicButton->setObjectName(QString::fromUtf8("italicButton"));
        italicButton->setCursor(QCursor(Qt::PointingHandCursor));
        italicButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/Italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicButton->setIcon(icon14);
        italicButton->setCheckable(true);

        gridLayout_2->addWidget(italicButton, 0, 5, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setCursor(QCursor(Qt::PointingHandCursor));
        clearButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon15);

        gridLayout_2->addWidget(clearButton, 1, 6, 1, 1);

        boldButton = new QPushButton(widget);
        boldButton->setObjectName(QString::fromUtf8("boldButton"));
        boldButton->setCursor(QCursor(Qt::PointingHandCursor));
        boldButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/Bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldButton->setIcon(icon16);
        boldButton->setCheckable(true);

        gridLayout_2->addWidget(boldButton, 0, 4, 1, 1);

        justifyAlignmentButton = new QPushButton(widget);
        justifyAlignmentButton->setObjectName(QString::fromUtf8("justifyAlignmentButton"));
        justifyAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        justifyAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_15_2_GCC_64bit-Debug/resources/pixmaps/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        justifyAlignmentButton->setIcon(icon17);
        justifyAlignmentButton->setCheckable(true);
        justifyAlignmentButton->setChecked(false);
        justifyAlignmentButton->setAutoRepeat(false);

        gridLayout_2->addWidget(justifyAlignmentButton, 0, 1, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 2, 0, 1, 7);

        textEdit->raise();
        leftAlignmentButton->raise();
        justifyAlignmentButton->raise();
        boldButton->raise();
        italicButton->raise();
        underlineButton->raise();
        colorComboBox->raise();
        sizeComboBox->raise();
        fontComboBox->raise();
        clearButton->raise();
        rightAlignmentButton->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 838, 39));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QString::fromUtf8("menuHello"));
        menuData_base = new QMenu(menubar);
        menuData_base->setObjectName(QString::fromUtf8("menuData_base"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());
        menubar->addAction(menuData_base->menuAction());
        menuHello->addAction(actionNew_Window);
        menuHello->addAction(actionOpen);
        menuHello->addAction(actionSave);
        menuHello->addAction(actionSave_as);
        menuHello->addSeparator();
        menuHello->addAction(actionExit);
        menuData_base->addAction(actionStore_in_DB);
        menuData_base->addAction(actionClear_DB);
        menuData_base->addAction(actionConnect_to_DB);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "new window", nullptr));
        actionNew_Window->setText(QCoreApplication::translate("MainWindow", "New Window", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Window->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font...", nullptr));
        actionStore_in_DB->setText(QCoreApplication::translate("MainWindow", "Store in DB", nullptr));
        actionClear_DB->setText(QCoreApplication::translate("MainWindow", "Clear DB", nullptr));
        actionClear_DB3->setText(QCoreApplication::translate("MainWindow", "Clear DB", nullptr));
        actionConnect_to_DB->setText(QCoreApplication::translate("MainWindow", "Connect to DB", nullptr));
        rightAlignmentButton->setText(QString());
        colorComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Color", nullptr));
        colorComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Black", nullptr));
        colorComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Orange", nullptr));
        colorComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Red", nullptr));
        colorComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        colorComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Green", nullptr));
        colorComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Yellow", nullptr));

        sizeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Size", nullptr));
        sizeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        sizeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        sizeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "12", nullptr));
        sizeComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "14", nullptr));
        sizeComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "16", nullptr));
        sizeComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "18", nullptr));
        sizeComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "24", nullptr));
        sizeComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "32", nullptr));
        sizeComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "48", nullptr));
        sizeComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "72", nullptr));

        leftAlignmentButton->setText(QString());
        underlineButton->setText(QString());
        italicButton->setText(QString());
        clearButton->setText(QString());
        boldButton->setText(QString());
        justifyAlignmentButton->setText(QString());
        menuHello->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuData_base->setTitle(QCoreApplication::translate("MainWindow", "Data base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
