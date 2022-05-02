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
        Square(){ 
        }

        Square(const Square &s) {
            col = s.col;
            row = s.row;
            remaining = s.remaining;
            used = s.used;
        }

        //Setters
        void setCol(int x) {
            col = x;
        }
        void setRow(int y) {
            row = y;
        }
        void setRemaining(int z){
            remaining = z;
        }
        void setUsed(bool xyz) {
	        used = xyz;
        }

        //Getters
        int getCol() {
            return col;
        }
        int getRow() {
            return row;
        }
        int getRemaining() {
            return remaining;
        }
        bool getUsed() {
            return used;
        }
        friend ostream& operator<<(ostream& os, const Square &s) {
	        os << (char) (s.col + 65) << s.row + 1;
	        return os;      
	    }
        Square (int c, int r) {
            col = c;
            row = r;
        }

    private:
        int col;
        int row;
        int remaining;
        bool used = false;
};
