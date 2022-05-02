#include "Knight.cpp"

class Chessboard {
    public:
        Chessboard() {
            for (int col = 0; col < 8; col++) {
                for (int row = 0; row < 8; row++) {
                    board[col][row].setCol(col);
	                board[col][row].setRow(row);
	            }
            }
        }
        void display() {
            for (int row = 8; row > 0; row--) {
                for (int column = 0; column < 8; column++) {
	                cout << board[column][row - 1] << "  ";
	            }
	        cout << endl << endl;
            }
        }

        Square get(int row, int col) {
            return board[row][col];
        }

    private:
        Square board[8][8];
};