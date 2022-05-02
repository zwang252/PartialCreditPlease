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

void Chessboard::displayResults(vector<Square> sequence) {
    int ROW, COLUMN = 8;
    int displayBoard[ROW][COLUMN];
    //Sets every value to -1
    for (int y = 0; y < ROW; y++) {
        for (int x = 0; x < COLUMN; x++) {
            displayBoard[x][y] = -1;
        }
    }
    //Loops through and appends accordingly to 2D array
    for (int i = 0; i < sequence.size(); i++) {
        displayBoard[sequence.at(i).getCol()][sequence.at(i).getRow()] = (i + 1);
    }
    //Prints out results
    for (int row = 8; row > 0; row--) {
        for (int column = 0; column < 8; column++) {
            cout << displayBoard[column][row - 1] << "   ";
	    }
	cout << endl << endl;
    }
}