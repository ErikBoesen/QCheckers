#pragma once

#include <QString>

class Piece {

    public:
        // Coordinates of square the piece is in
        int x;
        int y;
        bool is_king = false;
        QString color;

        Move(int x, int y);
        King();

};