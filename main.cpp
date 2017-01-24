#include "primeraqt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PrimeraQt w;
    w.show();

    return a.exec();
}
