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
    string inputFile;
    string outputFile;
    string line;

    inputFile = string(argv[1]);
    outputFile = (argv[2]);

    ifstream infile(inputFile);
    ofstream outfile(outputFile);

    string tile; //temp name for storing starting square
    int algChoice;

    while (getline(infile, line)) {
        istringstream iss(line);
        iss >> tile >> algChoice;
    
        //tile[0] 
    }
    return 0;
}
