#ifndef KNIGHT_H
#define KNIGHT_H

#include "Chessboard.h"

class Knight{
    public:
        void moveBackT();
        vector<Square> moveWarns();
        Square nextMove(vector<Square>);
        vector<Square> possibleMoves(Square);
        void setLocation(Square);
        Square getLocation();
        void setBoard(Chessboard);
    private:
        Square loc;
        Chessboard board;
};

#endif