#ifndef DBPASSBOX_H
#define DBPASSBOX_H

#include <QDialog>

namespace Ui {
class dbPassBox;
}

class dbPassBox : public QDialog
{
    Q_OBJECT

public:
    explicit dbPassBox(QWidget *parent = nullptr);
    ~dbPassBox();
    QString password;
    bool ok = false;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::dbPassBox *ui;
};

#endif // DBPASSBOX_H
