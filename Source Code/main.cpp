#include "mynotepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myNOTEPAD notepad;
    notepad.show();
    return a.exec();
}
