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
        GameRun();
        void runGame(int gamemode, Player p1, Player p2);
        ~GameRun();
};

#endif