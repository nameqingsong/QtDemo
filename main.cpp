#include "mainwindow.h"
#include <QApplication>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QIcon icon("baby.ico");
    a.setWindowIcon(QIcon(":/images/baby.ico"));
    MainWindow w;
    w.show();

    return a.exec();
}
