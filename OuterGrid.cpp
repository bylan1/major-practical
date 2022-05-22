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

bool OuterGrid::evaluateGrid(){
    return 0;
}

void OuterGrid::displayGrid(){
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            outerboardDisplay[r][c]=outerboard[r][c]->board[r][c];
        }
    }
    std::cout << " --- --- ---+--- --- ---+--- --- ---" << std::endl;
    for(int outerrow=0; outerrow<3; outerrow++){
        for(int outercol=0; outercol<3; outercol++){
            std::cout << "|";
            for(int innerrow=0; innerrow<3; innerrow++){
                for(int innercol=0; innercol<3; innercol++){
                    if(outerboard[outerrow][outercol]->getCell(innerrow,innercol)=='\0'){
                std::cout << "   |";
                    } else {
                std::cout << " " << outerboard[outerrow][outercol]->getCell(innerrow,innercol) << " |";
                    }
                }
            }
            std::cout << std::endl;
            std::cout << " --- --- ---+--- --- ---+--- --- ---" << std::endl;
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