#include "hept2comma.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hept2Comma w;
    w.show();
    return a.exec();
}
