#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <fstream>
#include <sstream>

#include <math.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Square {
    public:
        Square();
        Square(int, int);
        Square(const Square&);
        void setCol(int);
        void setRow(int);
        void setTried(bool);
        void setUsed(bool);
        int getCol();
        int getRow();
        bool getTried();
        bool getUsed();
        void operator=(const Square&);
        friend ostream& operator<<(ostream&, const Square&);
    private:
        int col;
        int row;
        bool tried = false;
        bool used = false;
};

#endif