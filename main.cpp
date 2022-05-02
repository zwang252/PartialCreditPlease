#include "Knight.h"

int main(int argc, char *argv[]) {

    // code to setup chessboard
    Chessboard chessboard;
    //chessboard.display();
  
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
    lancelot.setBoard(chessboard);

    while (getline(infile, line)) {
        istringstream iss(line);
        iss >> tile >> algChoice;
    
        int var1 = (int) (tile[0] - 65);
        int var2 = (int) (tile[1] - 48);
        lancelot.setLocation(*chessboard.get(var1,var2 - 1));
        
        //cout << lancelot.getLocation() << endl;
    }


    vector<Square> temp = lancelot.moveWarns();
    chessboard.displayResults(temp);

    return 0;
};