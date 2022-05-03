#include "Knight.h"

vector<Square> Knight::moveBackT(vector<Square> sequence) {
    if (sequence.size() == 64) {
        return sequence;
    }
    board.get(loc.getCol(), loc.getRow())->setUsed(true);
    sequence.push_back(loc);
    if (this->possibleMoves(loc).size() == 0) {
        loc.setUsed(false);
        
    }
    this->setLocation(*board.get(this->nextMove(this->possibleMoves(loc)).getCol(),
                                 this->nextMove(this->possibleMoves(loc)).getRow()));
    return this->moveBackT(sequence);
}

vector<Square> Knight::moveWarns() {
    int moveCount = 64; //hardcoded because 8x8 board
    vector<Square> sequence;
    for (int i = 0; i < moveCount; i++) {
        board.get(loc.getCol(), loc.getRow())->setUsed(true);
        cout << (i + 1) << ": " << loc << endl;
        sequence.push_back(loc);
        this->setLocation(*board.get(this->nextMove(this->possibleMoves(loc)).getCol(),
                                    this->nextMove(this->possibleMoves(loc)).getRow()));
        
    }
    return sequence;
}

Square Knight::nextMove(vector<Square> validMoves) {
    Square nMove;
    int degree = 7;
    
    //Next move is the with the smallest possible moves from that position
    for (int i = 0; i < validMoves.size(); i++) {
        if((possibleMoves(validMoves.at(i))).size() <= degree) {
            //if (!(board.get(validMoves.at(i).getCol(),validMoves.at(i).getRow())->getUsed())) {
            degree = possibleMoves(validMoves.at(i)).size();
            nMove = *board.get(validMoves.at(i).getCol(), validMoves.at(i).getRow());
            //}
        }
    }
    return nMove;
}

vector<Square> Knight::possibleMoves(Square Loc) {
    vector<Square> moveList;
    vector<Square> validList; 

    //Possible moves
    //Right moves
    if ((Loc.getCol() + 2) < 8) {
        //Up & down moves
        if ((Loc.getRow() + 1) < 8) {
            moveList.push_back(*board.get(Loc.getCol() + 2, Loc.getRow() + 1));
        } 
        if ((Loc.getRow() - 1) > - 1) {
            moveList.push_back(*board.get(Loc.getCol() + 2, Loc.getRow() - 1));
        }
    }
    
    //Left moves
    if ((Loc.getCol() - 2) > -1) {
        //Up & down moves
        if ((Loc.getRow() + 1) < 8) {
            moveList.push_back(*board.get(Loc.getCol() - 2, Loc.getRow() + 1));
        }
        if ((Loc.getRow() - 1) > - 1) {
            moveList.push_back(*board.get(Loc.getCol() - 2, Loc.getRow() - 1));
        }
    }
    
    //Up moves
    if ((Loc.getRow() + 2) < 8) {
        //Right & left moves
        if ((Loc.getCol() + 1) < 8) {
            moveList.push_back(*board.get(Loc.getCol() + 1, Loc.getRow() + 2));
        }
        if ((Loc.getCol() - 1) > - 1) {
            moveList.push_back(*board.get(Loc.getCol() - 1, Loc.getRow() + 2));              
        }
    }
    
    //Down moves
    if ((Loc.getRow() - 2) > -1) {
        //Right & left moves
        if ((Loc.getCol() + 1) < 8) {
            moveList.push_back(*board.get(Loc.getCol() + 1, Loc.getRow() - 2));
        }
        if ((Loc.getCol() - 1) > - 1) {
            moveList.push_back(*board.get(Loc.getCol() - 1, Loc.getRow() - 2));
        }
    }

    //Checks if possible moves have been used or not yet
    for (int i = 0; i < moveList.size(); i++) {
        if (!(moveList.at(i).getUsed())) {
            validList.push_back(moveList.at(i));
        }
    }
    
    cout << board.get(6,5)->getUsed() << endl;

    return validList;
}

void Knight::setLocation(Square Loc) {
    loc = Loc;
}

Square Knight::getLocation() {
    return loc;
}

void Knight::setBoard(Chessboard cBoard) {
    board = cBoard;
}