#include "Chessboard.h"

Chessboard::Chessboard() {
    for (int col = 0; col < 8; col++) {
        for (int row = 0; row < 8; row++) {
            board[col][row].setCol(col);
            board[col][row].setRow(row);
	    }
    }
}

void Chessboard::display() {
    for (int row = 8; row > 0; row--) {
        for (int column = 0; column < 8; column++) {
            cout << board[column][row - 1] << "  ";
	    }
	cout << endl << endl;
    }
}

Square* Chessboard::get(int col, int row) {
    return &board[col][row];
}