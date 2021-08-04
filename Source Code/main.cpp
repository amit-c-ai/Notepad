#include "mynotepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myNOTEPAD w;
    w.show();
    return a.exec();
}
