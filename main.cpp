#include <QApplication>
#include "mainwindow.h"
#include "time.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qsrand(time(NULL));
    setbuf(stdout,NULL);

    if (argc > 1) {
        w.showFullScreen();
    } else {
        w.move(100, 50);
        w.resize(660, 400);
        w.show();
    }
    return a.exec();
}
