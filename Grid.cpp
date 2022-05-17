#include "Grid.h"
#include "Cell.h"
#include <iostream>

// default grid constructor
Grid::Grid(){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            board[row][col] = new Cell;
        }
    }
}

// sets a cell at row x and column y to a cell state
void Grid::setCell(int x,int y,Cell state){
    *board[x][y] = state;
}

// determines if a player has won
// incorporate player into win
bool Grid::evaluateGrid(Player player){
    // fix board when null cells equate initially
    if(board[0][0]->getState()==board[1][1]->getState() && board[1][1]->getState()==board[2][2]->getState() && board[0][0]->getState()!='\0'){
        return true;
    }
    if(board[0][2]->getState()==board[1][1]->getState() && board[1][1]->getState()==board[2][0]->getState() && board[0][2]->getState()!='\0'){
        return true;
    }
    for(int row = 0; row<3; row++){
        if(board[row][0]->getState()==board[row][1]->getState() && board[row][1]->getState()==board[row][2]->getState() && board[row][0]->getState()!='\0'){
            return true;
        }
        for(int col = 0; col<3; col++){
            if(board[0][col]->getState()==board[1][col]->getState() && board[1][col]->getState()==board[2][col]->getState() && board[0][col]->getState()!='\0'){
                return true;
            }
        }
    }
    return false;
}

// default grid deconstructor
Grid::~Grid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            delete board[i][j];
        }
    }
}