#include <iostream>
#include "OuterGrid.h"
#include "Grid.h"
#include "Player.h"

extern void clr();

int main(){
    OuterGrid* board2 = new OuterGrid;
    Player p1;
    Player p2;
    clr();
    std::cout << "Player 1: ";
    p1.setName();
    p1.setMarker();
    std::cout << "Player 2: ";
    p2.setName();
    p2.setMarker();
    while(p2.getMarker()==p1.getMarker()){
        std::cout << "Invalid input. ";
        p2.setMarker();
    }

    clr();
    board2->displayGrid();
    board2->displayOuterGrid();
    // fix stuff
    while(board2->evaluateGrid()==false){
        p1.setGrid();
        while(board2->evaluateEachGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()))==true){
            std::cout << "Grid completed. ";
            p1.setGrid();
        }
        p1.setMove();
        std::cout << p1.getMoveInput() << std::endl;
        while(board2->getCell(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()),p1.getRow(p1.getMoveInput()),p1.getCol(p1.getMoveInput()))!='\0'){
            std::cout << "Invalid input. ";
            p1.setMove();
        }
        clr();
        board2->setCell(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()),p1.getRow(p1.getMoveInput()),p1.getCol(p1.getMoveInput()),p1.getMarker());
        board2->setWonGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()));
        board2->displayGrid();
        board2->displayOuterGrid();
        if(board2->evaluateGrid()==true){
            break;
        }
        p2.setGrid();
        while(board2->evaluateEachGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()))==true){
            std::cout << "Grid completed. ";
            p2.setGrid();
        }
        p2.setMove();
        std::cout << p2.getMoveInput() << std::endl;
        while(board2->getCell(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()),p2.getRow(p2.getMoveInput()),p2.getCol(p2.getMoveInput()))!='\0'){
            std::cout << "Invalid input. ";
            p2.setMove();
        }
        clr();
        board2->setCell(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()),p2.getRow(p2.getMoveInput()),p2.getCol(p2.getMoveInput()),p2.getMarker());
        board2->setWonGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()));
        board2->displayGrid();
        board2->displayOuterGrid();
    }
    board2->displayGrid();
    return 0;
}