#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "Square.h"

class Chessboard{
    public:
        Chessboard();
        void display();
        Square* get(int, int);
        void displayResults(vector<Square>);
    private:
        Square board[8][8];
};

#endif