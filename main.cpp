#include <QApplication>

#include "core/core.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    core::Core w;
    w.show();

    return a.exec();
}
