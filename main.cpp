#include "s1_designation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    S1_Designation w;
    w.show();
    return a.exec();
}
