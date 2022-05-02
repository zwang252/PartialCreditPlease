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
        void setRemaining(int);
        void setUsed();
        int getCol();
        int getRow();
        int getRemaining();
        bool getUsed();
        void operator=(const Square&);
        friend ostream& operator<<(ostream&, const Square&);
    private:
        int col;
        int row;
        int remaining;
        bool used;
};

#endif