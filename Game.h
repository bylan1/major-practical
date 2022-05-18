#ifndef GAME_H
#define GAME_H
#include <string>
#include "Cell.h"
#include "Grid.h"
#include "Player.h"
#include "Options.h"
#include "MainMenu.h"

class Game{
    private:
        Options options;
        MainMenu menu;
        Grid gameboard;
        Cell tempCell;
        Player player1;
        Player player2;
    public:
        Game();
        void run();
};

#endif