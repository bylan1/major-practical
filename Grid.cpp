#include "Grid.h"
#include <iostream>

extern void clr();

// default grid constructor
Grid::Grid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            board[i][j] = '\0';
        }
    }
}

void Grid::setCell(int x,int y,char state){
    // invalidate cells with non-null states
    board[x][y] = state;
}

char Grid::getCell(int x,int y){
    return board[x][y];
}

// !incorporate player into win
bool Grid::evaluateGrid(){
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!='\0'){
        winnerMarker = board[0][0];
        return true;
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!='\0'){
        winnerMarker = board[0][2];
        return true;
    }
    for(int row = 0; row<3; row++){
        if(board[row][0]==board[row][1] && board[row][1]==board[row][2] && board[row][0]!='\0'){
            winnerMarker = board[0][row];
            return true;
        }
        for(int col = 0; col<3; col++){
            if(board[0][col]==board[1][col] && board[1][col]==board[2][col] && board[0][col]!='\0'){
                winnerMarker = board[0][col];
                return true;
            }
        }
    }
    return false;
}

char Grid::getWinner(){
    return winnerMarker;
}

void Grid::displayGrid(){
    for(int row=0; row<3; row++){
        std::cout << " --- --- ---" << std::endl;
        std::cout << "|";
        for(int col=0; col<3; col++){
            if(board[row][col]=='\0'){
                std::cout << "   |";
            } else {
                std::cout << " " << board[row][col] << " |";
            }
        }
        std::cout << std::endl;
    }
    std::cout << " --- --- ---" << std::endl;
}