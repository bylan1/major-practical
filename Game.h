#ifndef GAME_H
#define GAME_H
#include <string>
#include "Cell.h"
#include "Grid.h"
#include "Player.h"

class Game{
    private:
        Grid gameboard;
        Cell tempCell;
        Player player1;
        Player player2;
    public:
        Game();
        void run();
};

#endif