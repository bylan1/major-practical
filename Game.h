#ifndef GAME_H
#define GAME_H
#include <string>
#include "Menu.h"
#include "Leaderboard.h"
#include "Computer.h"
#include "Player.h"
#include "HumanPlayer.h"

class Game{
    protected:
        std::string name;
        int gamemode;
        int score;
    public:
        Game();
        void run_game();
};

#endif