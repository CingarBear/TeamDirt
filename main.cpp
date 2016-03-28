#include "mainmenu.h"
#include <QApplication>
#include "header.h"

#include <qdebug.h>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainMenu w;
    w.show();

    return a.exec();
}
