#include <iostream>
#include "OuterGrid.h"
#include "Grid.h"

int main(){
    OuterGrid scaledGameboard;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scaledGameboard.setCell(0,0,i,j,'1');
        }
    }
    scaledGameboard.displayGrid();
    return 0;
}