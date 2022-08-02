#include "openfiles.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenFile w;
    w.showMaximized();
    return a.exec();
}
