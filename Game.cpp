#include "Player.h"
#include "Grid.h"
#include <iostream>

int main(){
    int a;
    Player dylan;
    Grid playboard;
    dylan.getName();
    dylan.getMarker();
    dylan.getMove();
    std::cin >> a;
    std::cout << a;

    playboard.enterMove(dylan);

    return 0;
}