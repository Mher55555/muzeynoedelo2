#include "mainwindow.h"

#include <QApplication>
#include <serverthread.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ServerThread servThread;

    servThread.run();
    w.show();

    return a.exec();
}
