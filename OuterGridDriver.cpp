#include <iostream>
#include "OuterGrid.h"
#include "Grid.h"

int main(){
    OuterGrid scaledGameboard;
    scaledGameboard.setCell(0,1,0,0,'1');
    scaledGameboard.setCell(0,1,0,1,'1');
    scaledGameboard.setCell(0,1,0,2,'1');
    scaledGameboard.setCell(0,1,1,0,'4');
    scaledGameboard.setCell(0,1,1,1,'5');
    scaledGameboard.setCell(0,1,1,2,'6');
    scaledGameboard.setCell(0,1,2,0,'7');
    scaledGameboard.setCell(0,1,2,1,'8');
    scaledGameboard.setCell(0,1,2,2,'9');
    scaledGameboard.displayGrid();
    std::cout << scaledGameboard.evaluateEachGrid(0,1) << std::endl;
    return 0;
}