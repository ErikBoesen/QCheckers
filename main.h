#pragma once

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include "widget.h"

class Window
        : public QWidget {

    public:
        Window(QWidget *parent = 0);

    private slots:
        void drawBoard();

    private:
        Widget *board;


};
