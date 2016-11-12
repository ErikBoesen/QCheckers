#pragma once

#include <QString>

class Piece {

    public:
        // Coordinates of square the piece is in
        int x;
        int y;
        bool is_king = false;

    protected:
        void move(int x, int y);
        void king();

};