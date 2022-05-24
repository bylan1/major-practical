#include "Player.h"
#include <iostream>

int main(){
    Player dylan;
    dylan.setMove();
    dylan.setMarker();
    std::cout << dylan.getRow() << std::endl << dylan.getCol() << std::endl << dylan.getMarker();
    return 0;
}