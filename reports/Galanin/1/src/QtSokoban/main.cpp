#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":/img/_pics/favicon.png"));
    w.setWindowTitle("Sokoban");
    w.show();
    return a.exec();
}
