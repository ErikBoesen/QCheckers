#include "main.h"

Window::Window(QWidget *parent) : QWidget(parent) {

    QLabel *instructions = new QLabel("It's your turn.", this);
    QPushButton *calculate = new QPushButton("Calculate Area", this);

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(instructions, 0, 0);
    grid->addWidget(board, 0, 1);

    setLayout(grid);
}

void Window::drawBoard() {

}

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Window window;

    window.setWindowTitle("Checkers");
    window.resize(200, 50);
    window.show();

    return app.exec();
}
