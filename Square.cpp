#include "Square.h"

Square::Square(){

}

Square::Square(const Square &s) {
    col = s.col;
    row = s.row;
    tried = s.tried;
    used = s.used;
}
        
void Square::setCol(int x) {
    col = x;
}
        
void Square::setRow(int y) {
    row = y;
}
        
void Square::setTried(bool z){
    tried = z;
}

void Square::setUsed(bool xyz) {
	used = xyz;
}

//Getters
int Square::getCol() {
    return col;
}

int Square::getRow() {
    return row;
}

bool Square::getTried() {
    return tried;
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
    tried = s.tried;
    used = s.used;
}

Square::Square (int c, int r) {
    col = c;
    row = r;
}