#pragma once

#include <QWidget>

class Checkers : public QWidget {

    public:
        Checkers(QWidget *parent = 0);

    protected:
        void init();
        void paintEvent(QPaintEvent *e);
        void timerEvent(QTimerEvent *e);
        void redraw();
};