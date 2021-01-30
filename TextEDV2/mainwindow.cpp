#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_clearButton_clicked()
{
    ui->textEdit->clear();
}

void MainWindow::on_leftAlignmentButton_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}

void MainWindow::on_justifyAlignmentButton_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow::on_rightAlignmentButton_clicked()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void MainWindow::on_colorComboBox_currentTextChanged(const QString &arg1)
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        ui->textEdit->setTextColor(QColor(arg1));
    }else{
        ui->textEdit->setTextColor(QColor(arg1));
    }
}

void MainWindow::on_sizeComboBox_currentTextChanged(const QString &arg1)
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        ui->textEdit->setFontPointSize(arg1.toInt());
    }else{
        ui->textEdit->setFontPointSize(arg1.toInt());
    }
}

void MainWindow::on_fontComboBox_currentTextChanged(const QString &arg1)
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        ui->textEdit->setFontFamily(arg1);
    }else{
        ui->textEdit->setFontFamily(arg1);
    }
}

void MainWindow::on_boldButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        QFont f(ui->textEdit->fontFamily(), ui->textEdit->fontPointSize(), QFont::Bold);
        ui->textEdit->setFont(f);
    }
}

void MainWindow::on_italicButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        QFont f(ui->textEdit->fontFamily(), ui->textEdit->fontPointSize(), QFont::StyleItalic);
        f.setItalic(true);
        ui->textEdit->setFont(f);
    }
}

void MainWindow::on_normalButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        QFont f(ui->textEdit->fontFamily(), ui->textEdit->fontPointSize(), QFont::StyleNormal);
        ui->textEdit->setFont(f);
    }
}

void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::exit();
}

void MainWindow::on_actionNew_Window_triggered()
{
    QWidget *newWindow = new MainWindow();
    newWindow->show();
}

void MainWindow::on_actionOpen_triggered()
{
    QString files = QFileDialog::getOpenFileName(this, tr("Open File"), "./", tr("*.txt"));
    QFile file(files);
    // give warning if the file does not exist
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","File does not exists!");
        messageBox.setFixedSize(500,200);
    }
    // open file in new window
    on_actionNew_Window_triggered();
    QFileInfo fname(files);
    fileName = fname.fileName();
    fileDirectory = fname.path();
    pFileName = fileDirectory + '/' + fileName;
    QTextStream in(&file);
    // code it in utf-8 to represent persian
    in.setCodec("utf-8");
    QString allText = in.readAll();
    ui->textEdit->setText(allText);
}

void MainWindow::on_actionSave_triggered()
{
    if (fileDirectory == ""){
        on_actionSave_as_triggered();
    }else{
        QFile f(pFileName);
        if (f.open(QIODevice::WriteOnly)) {
            QTextStream out{&f};
            out.setCodec("utf-8");
            out << ui->textEdit->toHtml();
            f.close();
        }else{
            QMessageBox messageBox;
            messageBox.critical(0,"Error",pFileName);
            messageBox.setFixedSize(500,200);
        }
    }
}

void MainWindow::on_actionSave_as_triggered()
{
    fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "./", tr("*.txt"));
    pFileName = fileName;
    QFile f(fileName);
    QFileInfo ff(fileName);
    fileDirectory = ff.path();
    if (f.open(QIODevice::WriteOnly)) {
        QTextStream out{&f};
        out.setCodec("utf-8");
        out << ui->textEdit->toHtml();
    }
    f.close();
}
