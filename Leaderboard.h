#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include <string>
// include some header files accessing scores and names
#include <Menu.h>

class Leaderboard{
    private:
        std::ifstream currentLeaderboard;
        std::string text;
    public:
        Leaderboard();
        void displayStats();
        void saveLeaderboard();
};

#endif