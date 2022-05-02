#include "Square.h"

Square::Square(){

}

Square::Square(const Square &s) {
    col = s.col;
    row = s.row;
    remaining = s.remaining;
    used = s.used;
}
        
void Square::setCol(int x) {
    col = x;
}
        
void Square::setRow(int y) {
    row = y;
}
        
void Square::setRemaining(int z){
    remaining = z;
}

void Square::setUsed() {
	used = true;
}

//Getters
int Square::getCol() {
    return col;
}

int Square::getRow() {
    return row;
}

int Square::getRemaining() {
    return remaining;
}

bool Square::getUsed() {
    return used;
}

ostream& operator<<(ostream& os, const Square& s) {
    os << (char) (s.col + 65) << s.row + 1;
    return os;      
}

void Square::operator=(const Square &s) {
    col = s.col;
    row = s.row;
    remaining = s.remaining;
    used = s.used;
}

Square::Square (int c, int r) {
    col = c;
    row = r;
}