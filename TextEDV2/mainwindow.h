#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QTextCharFormat>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString fileName, pFileName, fileDirectory;
    int ID;
    QPixmap bkgnd;
    QSqlDatabase dataBase;

private slots:
    void on_clearButton_clicked();

    void on_leftAlignmentButton_clicked();

    void on_justifyAlignmentButton_clicked();

    void on_rightAlignmentButton_clicked();

    void on_colorComboBox_currentTextChanged(const QString &arg1);

    void on_sizeComboBox_currentTextChanged(const QString &arg1);


    void on_fontComboBox_currentTextChanged(const QString &arg1);

    void on_boldButton_clicked();

    void on_italicButton_clicked();

    void on_underlineButton_clicked();

    void on_actionExit_triggered();

    void on_actionNew_Window_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionStore_in_DB_triggered();

    void createDB();

    void addValues(int id, QString text);

    void on_actionClear_DB_triggered();

    void on_textEdit_currentCharFormatChanged(const QTextCharFormat &format);


private:
    Ui::MainWindow *ui;
    void resizeEvent(QResizeEvent *evt);
};
#endif // MAINWINDOW_H
