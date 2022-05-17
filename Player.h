#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

class Player{
    protected:
        std::string name;
        char marker;
        int move;
    public:
        Player();
        std::string getName();
        char getMarker();
        int getMove();
};

#endif