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
        int possibleMoves(Square Loc) {
            vector<Square> val;
            int possibleMoves = 0;
            //cout << possibleMoves << endl;

            //Possible moves
            //Right moves
            if ((Loc.getCol() + 2) < 8) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) possibleMoves++;
                if ((Loc.getRow() - 1) > -1) possibleMoves++;
            }
            //Left moves
            if ((Loc.getCol() - 2) > -1) {
                //Up & down moves
                if ((Loc.getRow() + 1) < 8) possibleMoves++;
                if ((Loc.getRow() - 1) > -1) possibleMoves++;
            }
            //Up moves
            if ((Loc.getRow() + 2) < 8) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) possibleMoves++;
                if ((Loc.getCol() - 1) > -1) possibleMoves++;
            }
            //Down moves
            if ((Loc.getRow() - 2) > -1) {
                //Right & left moves
                if ((Loc.getCol() + 1) < 8) possibleMoves++;
                if ((Loc.getCol() - 1) > -1) possibleMoves++;
            }
            return possibleMoves;
        }


        Square getLocation() {
            return loc;
        }

    private:
        Square loc;
};