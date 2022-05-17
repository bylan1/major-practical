#include "Grid.h"
#include "Player.h"
#include "Cell.h"
#include <iostream>

// basic demo 1 of ultimate tictactoe
// more classes to make, deriving from given classes
// find a way to increase grid scope to 3x3 3x3's
// then implement visual aspect
int main(){
    Grid gameboard;
    Cell tempCell;
    Player dylan;
    Player melody;
    dylan.setName();
    dylan.setMarker();
    melody.setName();
    melody.setMarker();
    while(gameboard.evaluateGrid(dylan)==false){
        dylan.setMove();
        tempCell.setState(dylan.getMarker());
        gameboard.setCell(dylan.getRow(), dylan.getCol(), tempCell);
        if(gameboard.evaluateGrid(dylan)!=false){
            break;
        }
        melody.setMove();
        tempCell.setState(melody.getMarker());
        gameboard.setCell(melody.getRow(), melody.getCol(), tempCell);
    }
    std::cout << "player has won!" << std::endl;
    return 0;
}