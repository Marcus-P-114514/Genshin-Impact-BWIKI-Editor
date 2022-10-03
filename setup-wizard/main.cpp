#include "setupwiz.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SetupWiz w;
    w.show();
    return a.exec();
}
