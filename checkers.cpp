#include <QPainter>
#include "checkers.h"
#include "piece.h"

Checkers::Checkers(QWidget *parent)
        : QWidget(parent) {

        redraw();
}

void Checkers::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    //redraw();
}

void Checkers::init() {

}

void Checkers::timerEvent(QTimerEvent *e) {

    Q_UNUSED(e);


}

void Checkers::redraw() {

    // Initialize painter.
    // FIXME: It's very bad to do this every single time we redraw.
    QPainter canvas(this);

    // Set brush to black
    canvas.setBrush(Qt::black);
    // Turn off border
    canvas.setPen(Qt::NoPen);

    // Draw the board squares.
    for (int x = 0; x < 8; x++) for (int y = 0; y < 8; y++)
        if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1))
            canvas.drawRect(75*x, 75*y, 75, 75);

    canvas.setBrush(QBrush("#e41f1f"));
    canvas.drawEllipse(75*1+10, 75*1+10, 55, 55);
}

/*
void Piece::move(int new_x, int new_y) {
    int old_x = this.x;
    int old_y = this.y;
    this.x = new_x;
    this.y = new_y;
}

void Piece::king() {
    this.is_king = true;
}
*/