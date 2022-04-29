#include "Square.cpp"

class Knight {
    public:
        void moveBackT() {

        }
        void moveWarns() {

        }
        void setLocation(Square Loc) {
            loc = Loc;
        }
        vector<Square> possibleMoves(Square Loc) {
            vector<Square> moveList;
            int possibleMoves = 0;

        //Possible moves
            //Right moves
            if ((Loc.getCol() + 2) < 8) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) {
                    Square newMove((Loc.getCol() + 2) , (Loc.getRow() + 1));
                    moveList.push_back(newMove);
                } 
                if ((Loc.getRow() - 1) > - 1) {
                    Square newMove((Loc.getCol() + 2) , (Loc.getRow() - 1));
                    moveList.push_back(newMove);
                }
            }
            //Left moves
            if ((Loc.getCol() - 2) > - 1) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) {
                    Square newMove((Loc.getCol() - 2) , (Loc.getRow() + 1));
                    moveList.push_back(newMove);
                }
                if ((Loc.getRow() - 1) > - 1) {
                    Square newMove((Loc.getCol() - 2) , (Loc.getRow() - 1));
                    moveList.push_back(newMove);
                }
            }
            //Up moves
            if ((Loc.getRow() + 2) < 8) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) {
                    Square newMove((Loc.getCol() + 1) , (Loc.getRow() + 2));
                    moveList.push_back(newMove);
                }
                if ((Loc.getCol() - 1) > - 1) {
                    Square newMove((Loc.getCol() - 1) , (Loc.getRow() + 2));
                    moveList.push_back(newMove);                
                }
            }
            //Down moves
            if ((Loc.getRow() - 2) > - 1) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) {
                    Square newMove((Loc.getCol() + 1) , (Loc.getRow() - 2));
                    moveList.push_back(newMove);
                }
                if ((Loc.getCol() - 1) > - 1) {
                    Square newMove((Loc.getCol() - 1) , (Loc.getRow() - 2));
                    moveList.push_back(newMove);
                }
            }
            return moveList;
        }

        Square getLocation() {
            return loc;
        }

    private:
        Square loc;
};