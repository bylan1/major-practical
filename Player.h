#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    private:
        int input;
        std::string username;
        int rowValue;
        int colValue;
        char marker;
    public:
        Player();
        void setName();
        std::string getName();
        void setMarker();
        char getMarker();
        void setMove();
        int getRow();
        int getCol();
};

#endif