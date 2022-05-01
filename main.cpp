#include "Knight.cpp"

int main(int argc, char *argv[]) {

    // code to setup chessboard
    Square chessboard[8][8];
    for (int col = 0; col < 8; col++) {
        for (int row = 0; row < 8; row++) {
            chessboard[col][row].setCol(col);
	        chessboard[col][row].setRow(row);
	    }
    }

    for (int row = 8; row > 0; row--) {
        for (int column = 0; column < 8; column++) {
	        cout << chessboard[column][row - 1] << "  ";
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

    Knight lancelot; 

    while (getline(infile, line)) {
        istringstream iss(line);
        iss >> tile >> algChoice;
    
        int var1 = (int) (tile[0] - 65);
        int var2 = (int) (tile[1] - 48);
        lancelot.setLocation(chessboard[var1][var2 - 1]);
        
        cout << lancelot.getLocation() << endl;
    }


    vector<Square> temp = lancelot.moveWarns(lancelot);
    for (int i = 0; i < temp.size(); i++) {
        cout << temp.at(i) << endl;
    }


    return 0;
}
