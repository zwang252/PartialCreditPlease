#include <iostream>
#include <fstream>
#include <sstream>

#include <math.h>
#include <algorithm>
#include <vector>
#include <string>

class Square {
    public:
        //Setters
        void setCol(char x) {
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
        char getCol() {
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

    private:
        char col;
        int row;
        int remaining;
        bool used = false;
};