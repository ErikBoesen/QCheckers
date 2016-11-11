#include <QPainter>
#include "checkers.h"

Checkers::Checkers(QWidget *parent)
        : QWidget(parent)
{ }

void Checkers::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    QPainter qp(this);
    drawCheckers(&qp);
}

void Checkers::drawCheckers(QPainter *qp) {

    QPen pen(Qt::black, 2, Qt::SolidLine);
    qp->setPen(pen);

    qp->setBrush(Qt::black);

    for (int x = 0; x < 8; x += 2) {
        for (int y = 0; y < 8; y += 2) {
            if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1)) {
                qp->drawRect(75*x, 75*y, 75*(x+1), 75*(y+1));
            }
        }
    }
}