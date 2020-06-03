#include "mainwindow.h"
#include "secondwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.move(500,200);

    SecondWindow sw;
    sw.show();
    sw.move(800,200);
    return a.exec();
}
