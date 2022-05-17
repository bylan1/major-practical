#include "Grid.h"
#include <iostream>

Grid::Grid(){
    board[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
}

bool Grid::enterMove(Player player){
    int row = player.getMove()/3;
    int column = player.getMove()%3;
    std::cout << row << std::endl << column << std::endl;
}