#include "font.h"
#include "ui_font.h"

font::font(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::font)
{
    ui->setupUi(this);
}

font::~font()
{
    delete ui;
}
