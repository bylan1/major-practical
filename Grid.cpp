#include "Grid.h"
#include "Cell.h"
#include <iostream>

Grid::Grid(){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col+=){
            board[row][col] = new Cell;
        }
    }
    input = 0;
    rowGrid = 0;
    colGrid = 0;
}

void Grid::setCell(int x,int y,Cell state){
    board[x][y] = state;
}

bool Grid::evaluateGrid(){
    if(board[0][0].getState()==board[1][1].getState() && board[1][1].getState()==board[2][2].getState()){
        return true;
    }
    if(board[0][2].getState()==board[1][1].getState() && board[1][1].getState()==board[2][0].getState()){
        return true;
    }
    for(int row = 0; row<3; row++){
        if(board[row][0].getState()==board[row][1].getState() && board[row][1].getState()==board[row][2].getState()){
            return true;
        }
        for(int col = 0; col<3; col++){
            if(board[0][col].getState()==board[1][col].getState() && board[1][col].getState()==board[2][col].getState()){
                return true;
            }
        }
    }
    return false;
}

// returning winner