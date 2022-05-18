#include "Grid.h"
#include "Player.h"
#include "Cell.h"
#include <iostream>

// basic demo 1 of ultimate tictactoe
// fix current issues first
// more classes to make, deriving from given classes (computer class)
// find a way to increase grid scope to 3x3 3x3's
int main(){
    Grid gameboard;
    Cell tempCell;
    Player player1;
    Player player2;
    player1.setName();
    player1.setMarker();
    player2.setName();
    player2.setMarker();
    while(gameboard.evaluateGrid()==false){
        player1.setMove();
        tempCell.setState(player1.getMarker());
        gameboard.setCell(player1.getRow(), player1.getCol(), tempCell);
        gameboard.displayGrid();
        if(gameboard.evaluateGrid()!=false){
            break;
        }
        player2.setMove();
        tempCell.setState(player2.getMarker());
        gameboard.setCell(player2.getRow(), player2.getCol(), tempCell);
        gameboard.displayGrid();
    }
    if(player1.getMarker()==gameboard.winnerMarker){
        std::cout << player1.getName() << " has won!" << std::endl;
    }
    if(player2.getMarker()==gameboard.winnerMarker){
        std::cout << player2.getName() << " has won!" << std::endl;
    }
    
    return 0;
}