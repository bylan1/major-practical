#include <iostream>
#include <string>
#include "OuterGrid.h"
#include "Grid.h"

extern void clr();

OuterGrid::OuterGrid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            outerboard[i][j] = new Grid;
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            outerboardDisplay[i][j] = '\0';
        }
    }
}

void OuterGrid::setCell(int gridX, int gridY, int x, int y, char state){
    outerboard[gridX][gridY]->setCell(x,y,state);
}

char OuterGrid::getCell(int gridX, int gridY, int x,int y){
    return outerboard[gridX][gridY]->getCell(x,y);
}

void OuterGrid::setWonGrid(int gridX, int gridY){
    if(outerboard[gridX][gridY]->evaluateGrid()==true){
        board[gridX][gridY]=outerboard[gridX][gridY]->getWinner();
    }
}

Grid OuterGrid::getGrid(int gridX, int gridY){
    return *outerboard[gridX][gridY];
}

void OuterGrid::refreshGrid(int gridX, int gridY){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            outerboard[gridX][gridY]->setCell(i,j,'\0');
        }
    }
}

void OuterGrid::displayOuterGrid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int x=0; x<3; x++){
                for(int y=0; y<3; y++){
                    if(board[i][j]=='\0'){
                        outerboardDisplay[3*i+x][3*j+y]=outerboard[i][j]->getCell(x,y);
                    } else {
                        outerboardDisplay[3*i+x][3*j+y]=board[i][j];
                    }
                }
            }
        }
    }
    std::cout << "+-----------+-----------+-----------+" << std::endl;
    for(int row=0; row<9; row++){
        std::cout << "|";
        for(int col=0; col<9; col++){
            if(outerboardDisplay[row][col]=='\0'){
                std::cout << "   |";
            } else {
                std::cout << " " << outerboardDisplay[row][col] << " |";
            }
        }
        if(row%3==2){
            std::cout << std::endl << "+-----------+-----------+-----------+" << std::endl;
        } else {
        std::cout << std::endl << "|--- --- ---|--- --- ---|--- --- ---|" << std::endl;
        }
    }
}

OuterGrid::~OuterGrid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            delete outerboard[i][j];
        }
    }
}