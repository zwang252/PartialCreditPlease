#include "Knight.h"
#include <chrono>

int main(int argc, char *argv[]) {

    // code to setup chessboard
    Chessboard chessboard;
  
    // code to read inputfile and select starting square and algorithm
    string tile;
    int algChoice;

    tile = string(argv[1]);
    algChoice = stoi((argv[2]));

    Knight lancelot;
    lancelot.setBoard(chessboard);

    
    int var1 = (int) (tile[0] - 65);
    int var2 = (int) (tile[1] - 48);
    lancelot.setLocation(*chessboard.get(var1, var2 - 1));

    auto start = chrono::steady_clock::now();
        
    //Backtrack
    if (algChoice == 1) {
        vector<Square> temp2;
        vector<Square> temp3 = lancelot.moveBackT(temp2);
        chessboard.displayResults(temp3);

        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, std::ratio<60>>(diff).count() << " mins" << endl; 
    }
    //Warns
    if (algChoice == 2) {
        vector<Square> temp = lancelot.moveWarns();
        chessboard.displayResults(temp);

        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, std::milli>(diff).count() << " ms" << endl; 
    }


    return 0;
};