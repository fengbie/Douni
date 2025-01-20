#include "Douni.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Douni w;
    w.show();
    return a.exec();
}
