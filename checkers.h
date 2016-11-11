#pragma once

#include <QWidget>

class Checkers : public QWidget {

    public:
        Checkers(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *event);
        void drawCheckers(QPainter *qp);
};