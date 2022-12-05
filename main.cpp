#include "mainwindow.h"

#include <QApplication>

void setWindowOptions(MainWindow& window)
{
    window.setWindowTitle("Clock");
    window.resize(250,200);
    window.show();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    setWindowOptions(w);
    return a.exec();
}
