#ifndef GAMERUN_H
#define GAMERUN_H
#include "Player.h"
#include "OuterGrid.h"
#include "Grid.h"

class GameRun{
    private:
        Grid* board1;
        OuterGrid* board2;
        int winCase;
    public:
        GameRun(); // default constructor
        void runGame(int gamemode, Player p1, Player p2); // runs the gameplay component of ultimate tictactoe
        ~GameRun(); // default deconstructor
};

#endif