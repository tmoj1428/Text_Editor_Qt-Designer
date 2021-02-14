#include "dbpassbox.h"
#include "ui_dbpassbox.h"

dbPassBox::dbPassBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dbPassBox)
{
    ui->setupUi(this);
}

dbPassBox::~dbPassBox()
{
    delete ui;
}

void dbPassBox::on_buttonBox_accepted()
{
    password = ui->lineEdit->text();
    ok = true;
}
