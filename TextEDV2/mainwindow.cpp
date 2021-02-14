#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbpassbox.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menubar->setStyleSheet("background-color:#3c3b37; color:white; text-decoration:underline");

    setPassword();
    this->setStyleSheet("QPushButton {background-color: white}; QComboBox {background-color: white};");
    bkgnd.load("./resources/background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->sizeComboBox->setCurrentText("12");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *evt)
{
    // fit background size to window size, so with window size changing the background image will change
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette();
    p.setBrush(QPalette::Background, bkgnd);
    setPalette(p);

    QMainWindow::resizeEvent(evt);
}

void MainWindow::setPassword()
{
    dbPassBox passWindow(this);
    passWindow.exec();
    if(passWindow.ok){
        dbPassword = passWindow.password;
        createDB();
    }else{
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Connection to data base is not established");
        messageBox.setFixedSize(500,200);
    }
}

void MainWindow::on_clearButton_clicked()
{
    // clear all texts and delete all styles that we have given to the text
    ui->textEdit->clear();
    ui->rightAlignmentButton->setChecked(false);
    ui->justifyAlignmentButton->setChecked(false);
    ui->leftAlignmentButton->setChecked(true);
    ui->underlineButton->setChecked(false);
    ui->boldButton->setChecked(false);
    ui->italicButton->setChecked(false);
}

void MainWindow::on_leftAlignmentButton_clicked()
{
    // change text alignment, button style and other alignment buttons style when the button is checked
    if(ui->leftAlignmentButton->isChecked()){
        ui->leftAlignmentButton->setStyleSheet("background-color: orange");
        ui->rightAlignmentButton->setStyleSheet("background-color: white");
        ui->justifyAlignmentButton->setStyleSheet("background-color: white");
    }else{
        ui->leftAlignmentButton->setStyleSheet("background-color: white");
    }
    ui->textEdit->setAlignment(Qt::AlignLeft);
    ui->rightAlignmentButton->setChecked(false);
    ui->justifyAlignmentButton->setChecked(false);
}

void MainWindow::on_justifyAlignmentButton_clicked()
{
    // change text alignment, button style and other alignment buttons style when the button is checked
    if(ui->justifyAlignmentButton->isChecked()){
        ui->justifyAlignmentButton->setStyleSheet("background-color: orange");
        ui->leftAlignmentButton->setStyleSheet("background-color: white");
        ui->rightAlignmentButton->setStyleSheet("background-color: white");
    }else{
        ui->justifyAlignmentButton->setStyleSheet("background-color: white");
    }
    ui->textEdit->setAlignment(Qt::AlignJustify);
    ui->rightAlignmentButton->setChecked(false);
    ui->leftAlignmentButton->setChecked(false);
}

void MainWindow::on_rightAlignmentButton_clicked()
{
    // change text alignment, button style and other alignment buttons style when the button is checked
    if(ui->rightAlignmentButton->isChecked()){
        ui->rightAlignmentButton->setStyleSheet("background-color: orange");
        ui->leftAlignmentButton->setStyleSheet("background-color: white");
        ui->justifyAlignmentButton->setStyleSheet("background-color: white");
    }else{
        ui->rightAlignmentButton->setStyleSheet("background-color: white");
    }
    ui->textEdit->setAlignment(Qt::AlignRight);
    ui->leftAlignmentButton->setChecked(false);
    ui->justifyAlignmentButton->setChecked(false);
}

void MainWindow::on_colorComboBox_currentTextChanged(const QString &arg1)
{
    // change selected text color or the new text we will write color
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
    // change selected text size or the new text we will write size
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
    // change selected text font or the new text we will write font
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
    // change button color if it is checked or unchecked
    if(ui->boldButton->isChecked()){
        ui->boldButton->setStyleSheet("background-color: orange");
    }else{
        ui->boldButton->setStyleSheet("background-color: white");
    }
    // bold the text we have been selected or the text we will write
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection() && ui->boldButton->isChecked())
    {
        ui->textEdit->setFontWeight(QFont::Bold);
    }else if(cursor.hasSelection() && !ui->boldButton->isChecked())
    {
        ui->textEdit->setFontWeight(QFont::Thin);
    }else if (ui->boldButton->isChecked()) {
        ui->textEdit->setFontWeight(QFont::Bold);
    }else {
        ui->textEdit->setFontWeight(QFont::Thin);
    }
}

void MainWindow::on_italicButton_clicked()
{
    // change button color if it is checked or unchecked
    if(ui->italicButton->isChecked()){
        ui->italicButton->setStyleSheet("background-color: orange");
    }else{
        ui->italicButton->setStyleSheet("background-color: white");
    }
    // italic the text we have been selected or the text we will write

    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection() && ui->italicButton->isChecked())
    {
        ui->textEdit->setFontItalic(true);
    }else if(cursor.hasSelection() && !ui->italicButton->isChecked()){
        ui->textEdit->setFontItalic(false);
    }else if(ui->italicButton->isChecked()){
        ui->textEdit->setFontItalic(true);
    }else{
        ui->textEdit->setFontItalic(false);
    }
}

void MainWindow::on_underlineButton_clicked()
{
    // change button style when it is checked and when it is un-checked
    if(ui->underlineButton->isChecked()){
        ui->underlineButton->setStyleSheet("background-color: orange");
    }else{
        ui->underlineButton->setStyleSheet("background-color: white");
    }
    // underline the text we have been selected or the text we will write
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection() && ui->underlineButton->isChecked())
    {
        ui->textEdit->setFontUnderline(true);
    }else if(cursor.hasSelection() && !ui->underlineButton->isChecked()){
        ui->textEdit->setFontUnderline(false);
    }else if(ui->underlineButton->isChecked()){
        ui->textEdit->setFontUnderline(true);
    }else{
        ui->textEdit->setFontUnderline(false);
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
    QString files = QFileDialog::getOpenFileName(this, tr("Open File"), "/home", tr("*"));
    QFile file(files);
    // give warning if the file does not exist
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","File does not exists!");
        messageBox.setFixedSize(500,200);
    }else{
        // open file in new window
        QFileInfo fname(files);
        fileName = fname.fileName();
        QString baseName = fname.baseName();
        fileDirectory = fname.path();
        pFileName = fileDirectory + '/' + fileName;
        QTextStream in(&file);
        // code it in utf-8 to represent persian
        in.setCodec("utf-8");
        QWidget::setWindowTitle(baseName);
        QString allText = in.readAll();
        ui->textEdit->setText(allText);
        on_actionNew_Window_triggered();
    }
}

void MainWindow::on_actionSave_triggered()
{
    // save the file if the file exists, call save as function when the file does not exists
    if (fileDirectory == ""){
        on_actionSave_as_triggered();
    }else{
        QFile f(pFileName);
        QFileInfo ff(fileName);
        if (f.open(QIODevice::WriteOnly)) {
            QTextStream out{&f};
            out.setCodec("utf-8");
            out << ui->textEdit->toHtml();
            QWidget::setWindowTitle(ff.baseName());
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
    // save as file
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
    QWidget::setWindowTitle(ff.baseName());
    f.close();
}

void MainWindow::addValues(int id, QString text)
{
    QSqlQuery qry;
    // write inserting query
    qry.prepare("INSERT INTO textTable (ID, TEXT) VALUES (NULL, :TEXT);");
    // bind values to table values
    qry.addBindValue(text);

    if(!qry.exec())
    {
        qDebug()<<qry.lastError();
    }
    ID++;
}

void MainWindow::createDB(){

    qDebug()<<"start";
    dataBase = QSqlDatabase::addDatabase("QMYSQL");
    dataBase.setHostName("127.0.0.1");
    dataBase.setUserName("root");
    dataBase.setPassword(dbPassword);

    if(!dataBase.open()){
        qDebug()<<dataBase.lastError();
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Your password is wrong, please try again!");
        messageBox.setFixedSize(500,200);
    }
    //dataBase.setDatabaseName("dbTest");



    QSqlQuery query("CREATE DATABASE IF NOT EXISTS dbText");
    if (!query.exec()){
        qDebug()<<query.lastError();
    }
    QSqlQuery qry(dataBase);

    qry.prepare("USE dbText;"
                "CREATE TABLE textTable("
                "ID MEDIUMINT NOT NULL AUTO_INCREMENT,"
                "TEXT VARCHAR(100));");

    if (!qry.exec()){
        qDebug()<<qry.lastError();
    }

    qDebug()<<"end";
}

void MainWindow::on_actionStore_in_DB_triggered()
{
    // call addValues function when the store in DB button has been pressed
    QTextCursor cursor = ui->textEdit->textCursor();
    if(cursor.hasSelection())
    {
        addValues(ID , cursor.selectedText());
    }else{
        addValues(ID, ui->textEdit->toPlainText());
    }
}


void MainWindow::on_actionClear_DB_triggered()
{
    QSqlQuery query;
    query.prepare("TRUNCATE dbText.textTable");
    if(!query.exec()){
        qDebug() << query.lastError();
    }
}

void MainWindow::on_textEdit_currentCharFormatChanged(const QTextCharFormat &format)
{
    // update combo boxes values when the cursor change position
    QString size = QString::number(format.fontPointSize());
    QString font = format.fontFamily();
    QColor color = format.foreground().color();
    QString currentColor = color.name();
    if (color == "#ff0000"){
        currentColor = "Red";
    }else if(color == "#000000"){
        currentColor = "Black";
    }else if(color == "#008000"){
        currentColor = "Green";
    }else if(color == "#0000ff"){
        currentColor = "Blue";
    }else if(color == "#ffff00"){
        currentColor = "Yellow";
    }else if(color == "#ffa500"){
        currentColor = "Orange";
    }
    ui->sizeComboBox->setCurrentText(size);
    ui->fontComboBox->setCurrentText(font);
    ui->colorComboBox->setCurrentText(currentColor);
}

void MainWindow::on_actionConnect_to_DB_triggered()
{
    if (dataBase.isValid())
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","You have an open connection to your database!");
        messageBox.setFixedSize(500,200);
    }else
    {
        setPassword();
    }
}
