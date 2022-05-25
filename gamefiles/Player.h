#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    private:
        std::string inputString;
        std::string username;
        int gridInput;
        int moveInput;
        int rowValue;
        int colValue;
        char marker;
    public:
        Player(); // default constructor
        void setName(); // sets the name of the player
        std::string getName(); // returns the name of the player
        void setMarker(); // sets the player's marker
        char getMarker(); // returns the player's marker
        void setGrid(); // sets the player's grid choice
        void setMove(); // sets the player's move
        int getGridInput(); // returns grid input
        int getMoveInput(); // returns move input
        int getRow(int inputValue); // returns the row of an input
        int getCol(int inputValue); // returns the column of an input
};

#endif