#include "Player.h"
#include <iostream>

int main(){
    Player dylan("Dylan");
    dylan.takeInput();
    std::cout << dylan.getRow() << std::endl << dylan.getCol();
    return 0;
}