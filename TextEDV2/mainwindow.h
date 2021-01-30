#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_normalButton_clicked();

    void on_actionExit_triggered();

    void on_actionNew_Window_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionFont_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
