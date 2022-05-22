#include <iostream>
#include "OuterGrid.h"
#include "Grid.h"
#include "Player.h"

int main(){
    Player p1;
    OuterGrid scaledGameboard;
    p1.setName();
    p1.setMarker();
    p1.getGridInput();
    p1.getMoveInput();
    scaledGameboard.setCell(2,1,1,1,'x');
    scaledGameboard.displayGrid();
    return 0;
}