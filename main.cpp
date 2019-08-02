#include <QApplication>
#include "mainwindow.h"
#include "time.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qsrand(time(NULL));
    setbuf(stdout,NULL);

    w.move(100, 50);
    w.resize(660, 400);
    w.show();

    while (--argc) {
        if (QString(argv[argc]) == "-f") {
            w.showFullScreen();
        } else if (QString(argv[argc]) == "-s") {
            QTimer::singleShot(3000, &w, SLOT(runButtonPressed()));
        }
    }
    return a.exec();
}
