/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
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
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *leftAlignmentButton;
    QPushButton *justifyAlignmentButton;
    QPushButton *rightAlignmentButton;
    QPushButton *boldButton;
    QPushButton *italicButton;
    QPushButton *normalButton;
    QComboBox *colorComboBox;
    QComboBox *sizeComboBox;
    QFontComboBox *fontComboBox;
    QPushButton *clearButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuHello;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 737);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Window->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 791, 151));
        leftAlignmentButton = new QPushButton(widget);
        leftAlignmentButton->setObjectName(QString::fromUtf8("leftAlignmentButton"));
        leftAlignmentButton->setGeometry(QRect(30, 0, 111, 41));
        leftAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        leftAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAlignmentButton->setIcon(icon5);
        leftAlignmentButton->setCheckable(true);
        justifyAlignmentButton = new QPushButton(widget);
        justifyAlignmentButton->setObjectName(QString::fromUtf8("justifyAlignmentButton"));
        justifyAlignmentButton->setGeometry(QRect(140, 0, 111, 41));
        justifyAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        justifyAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        justifyAlignmentButton->setIcon(icon6);
        justifyAlignmentButton->setCheckable(true);
        justifyAlignmentButton->setChecked(false);
        justifyAlignmentButton->setAutoRepeat(false);
        rightAlignmentButton = new QPushButton(widget);
        rightAlignmentButton->setObjectName(QString::fromUtf8("rightAlignmentButton"));
        rightAlignmentButton->setGeometry(QRect(250, 0, 111, 41));
        rightAlignmentButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightAlignmentButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAlignmentButton->setIcon(icon7);
        boldButton = new QPushButton(widget);
        boldButton->setObjectName(QString::fromUtf8("boldButton"));
        boldButton->setGeometry(QRect(430, 0, 111, 41));
        boldButton->setCursor(QCursor(Qt::PointingHandCursor));
        boldButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/Bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldButton->setIcon(icon8);
        italicButton = new QPushButton(widget);
        italicButton->setObjectName(QString::fromUtf8("italicButton"));
        italicButton->setGeometry(QRect(540, 0, 111, 41));
        italicButton->setCursor(QCursor(Qt::PointingHandCursor));
        italicButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/Italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicButton->setIcon(icon9);
        normalButton = new QPushButton(widget);
        normalButton->setObjectName(QString::fromUtf8("normalButton"));
        normalButton->setGeometry(QRect(650, 0, 111, 41));
        normalButton->setCursor(QCursor(Qt::PointingHandCursor));
        normalButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/Normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        normalButton->setIcon(icon10);
        colorComboBox = new QComboBox(widget);
        colorComboBox->addItem(QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon13, QString());
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon14, QString());
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/green.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon15, QString());
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorComboBox->addItem(icon16, QString());
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));
        colorComboBox->setGeometry(QRect(30, 80, 161, 61));
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
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));
        sizeComboBox->setGeometry(QRect(200, 80, 161, 61));
        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(370, 80, 241, 61));
        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(650, 90, 111, 41));
        clearButton->setCursor(QCursor(Qt::PointingHandCursor));
        clearButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("../build-TextEDV2-Desktop_Qt_5_13_1_MSVC2015_64bit-Debug/resources/pixmaps/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon17);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(-7, 153, 811, 571));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QString::fromUtf8("menuHello"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuHello->addAction(actionNew_Window);
        menuHello->addAction(actionOpen);
        menuHello->addAction(actionSave);
        menuHello->addAction(actionSave_as);
        menuHello->addSeparator();
        menuHello->addAction(actionExit);
        menuFormat->addAction(actionFont);

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
        leftAlignmentButton->setText(QString());
        justifyAlignmentButton->setText(QString());
        rightAlignmentButton->setText(QString());
        boldButton->setText(QString());
        italicButton->setText(QString());
        normalButton->setText(QString());
        colorComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Color", nullptr));
        colorComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Black", nullptr));
        colorComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Orange", nullptr));
        colorComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Red", nullptr));
        colorComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Blue", nullptr));
        colorComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Green", nullptr));
        colorComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Yellow", nullptr));

        sizeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Size", nullptr));
        sizeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "10", nullptr));
        sizeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "12", nullptr));
        sizeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "14", nullptr));
        sizeComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "16", nullptr));
        sizeComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "18", nullptr));
        sizeComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "24", nullptr));
        sizeComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "32", nullptr));
        sizeComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "48", nullptr));
        sizeComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "72", nullptr));

        clearButton->setText(QString());
        menuHello->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
