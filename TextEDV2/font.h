#ifndef FONT_H
#define FONT_H

#include <QDialog>

namespace Ui {
class font;
}

class font : public QDialog
{
    Q_OBJECT

public:
    explicit font(QWidget *parent = nullptr);
    ~font();

private:
    Ui::font *ui;
};

#endif // FONT_H
