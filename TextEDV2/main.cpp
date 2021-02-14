#include "mainwindow.h"
#include "dbpassbox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    /*
    dbPassBox win;
    win.show();
    if(win.ok == true){
        w.dbPassword = win.password;
        w.show();
    }
*/
    return a.exec();
}
