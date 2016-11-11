#include <QApplication>
#include "checkers.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    Checkers window;

    window.resize(600, 600);
    window.setWindowTitle("Checkers");
    window.show();

    return app.exec();
}