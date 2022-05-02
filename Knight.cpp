#include "Chessboard.cpp"

class Knight {
    public:
        void moveBackT() {

        }

        vector<Square> moveWarns(Knight Mordred) {
            int moveCount = 4; //hardcoded because 8x8 board
            vector<Square> sequence;
            for (int i = 0; i < moveCount; i++) {
                Mordred.getLocation().setUsed();
                sequence.push_back(Mordred.getLocation());
                cout << sequence.at(i) << endl;
                Mordred.setLocation(Mordred.nextMove(Mordred.possibleMoves(Mordred.getLocation())));
                cout << sequence.at(0).getUsed() << endl;
            }
            return sequence;
        }

        Square nextMove(vector<Square> validMoves) {
            Square nMove;
            int degree = 8;

            //Next move is the with the smallest possible moves from that position
            for (int i = 0; i < validMoves.size(); i++) {
                if((possibleMoves(validMoves.at(i))).size() < degree) {
                    if (!(validMoves.at(i).getUsed())) {
                        degree = possibleMoves(validMoves.at(i)).size();
                        nMove = validMoves.at(i);
                        //cout << nMove << endl;
                    }
                }
            }
            return nMove;
        }

        vector<Square> possibleMoves(Square Loc) {
            vector<Square> moveList;
            vector<Square> validList; 

        //Possible moves
            //Right moves
            if ((Loc.getCol() + 2) < 8) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) {
                    moveList.push_back(board.get(Loc.getCol() + 2, Loc.getRow() + 1));
                    //Square newMove((Loc.getCol() + 2) , (Loc.getRow() + 1));
                    //moveList.push_back(newMove);
                } 
                if ((Loc.getRow() - 1) > - 1) {
                    moveList.push_back(board.get(Loc.getCol() + 2, Loc.getRow() - 1));
                    //Square newMove((Loc.getCol() + 2) , (Loc.getRow() - 1));
                    //moveList.push_back(newMove);
                }
            }
            //Left moves
            if ((Loc.getCol() - 2) > - 1) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) {
                    moveList.push_back(board.get(Loc.getCol() - 2, Loc.getRow() + 1));
                    //Square newMove((Loc.getCol() - 2) , (Loc.getRow() + 1));
                    //moveList.push_back(newMove);
                }
                if ((Loc.getRow() - 1) > - 1) {
                    moveList.push_back(board.get(Loc.getCol() - 2, Loc.getRow() - 1));
                    //Square newMove((Loc.getCol() - 2) , (Loc.getRow() - 1));
                    //moveList.push_back(newMove);
                }
            }
            //Up moves
            if ((Loc.getRow() + 2) < 8) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) {
                    moveList.push_back(board.get(Loc.getCol() + 1, Loc.getRow() + 2));
                    //Square newMove((Loc.getCol() + 1) , (Loc.getRow() + 2));
                    //moveList.push_back(newMove);
                }
                if ((Loc.getCol() - 1) > - 1) {
                    moveList.push_back(board.get(Loc.getCol() - 1, Loc.getRow() + 2));
                    //Square newMove((Loc.getCol() - 1) , (Loc.getRow() + 2));
                    //moveList.push_back(newMove);                
                }
            }
            //Down moves
            if ((Loc.getRow() - 2) > - 1) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) {
                    moveList.push_back(board.get(Loc.getCol() + 1, Loc.getRow() - 2));
                    //Square newMove((Loc.getCol() + 1) , (Loc.getRow() - 2));
                    //moveList.push_back(newMove);
                }
                if ((Loc.getCol() - 1) > - 1) {
                    moveList.push_back(board.get(Loc.getCol() - 1, Loc.getRow() - 2));
                    //Square newMove((Loc.getCol() - 1) , (Loc.getRow() - 2));
                    //moveList.push_back(newMove);
                }
            }

    
            //Checks if possible moves have been used or not yet
            for (int i = 0; i < moveList.size(); i++) {
                if (!(moveList.at(i).getUsed())) {
                    validList.push_back(moveList.at(i));
                }
            }

            return validList;
        }

        void setLocation(Square Loc) {
            loc = Loc;
        }

        Square getLocation() {
            return loc;
        }

        void setBoard(Chessboard cboard) {
            board = cboard;
        }

    private:
        Square loc;
        Chessboard board;
};