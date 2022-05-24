#ifndef GAME_H
#define GAME_H
#include <string>
#include "Grid.h"
#include "Player.h"
#include "Options.h"
#include "MainMenu.h"
#include "GameRun.h"

class Game{
    private:
        Options options;
        MainMenu menu;
        GameRun game;
        Player player1;
        Player player2;
    public:
        Game(); // default constructor
        void run(); // runs entire game of ultimate tictactoe
};

#endif