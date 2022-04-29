#include "Square.cpp"

int main(int argc, char *argv[]) {

  // code to setup chessboard
  Square chessboard[8][8];
  for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
      chessboard[row][column].setRow(row + 1);
      chessboard[row][column].setCol((char) 65 + column);
    }
  }

  for (int row = 8; row > 0; row--) {
    for (int column = 0; column < 8; column++) {
      cout << chessboard[row - 1][column] << "  ";
    }
    cout << endl << endl;
  }
  
  // code to read inputfile and select starting square and algorithm
  ifstream infile(argv[1]);
  ofstream outfile(argv[2]);

  string line;

  
  while (getline(infile, line)) {
    
  }
  return 0;
}
