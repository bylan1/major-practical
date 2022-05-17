#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    private:
        int input;
        std::string username;
        int rowValue;
        int colValue;
    public:
        Player(std::string name);
        int takeInput();
        int getRow();
        int getCol();
};

#endif