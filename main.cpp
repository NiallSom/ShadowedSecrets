#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(1000,600);
    w.show();
    w.setStyleSheet("background-color: #e4e2dd;");
    return a.exec();
}
