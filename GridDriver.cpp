#include <iostream>
#include "Grid.h"

int main(){
    Grid gameboard;
    gameboard.setCell(2,1,'x');
    gameboard.setCell(1,1,'x');
    gameboard.evaluateGrid();
    gameboard.displayGrid();
    gameboard.setCell(0,1,'x');
    return 0;
}