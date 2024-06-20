#include "QtWidgetsApplication5.h"
#include <QtWidgets/QApplication>
#include "Service.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    repo r;
    Service s{ r };
    Aplicatie w{ s };
    w.show();
    return a.exec();
}
