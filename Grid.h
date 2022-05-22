#ifndef GRID_H
#define GRID_H
#include "Player.h"

class Grid{
    protected:
        char board[3][3];
        char winnerMarker;
    public:
        Grid(); // default constructor
        void setCell(int x,int y,char state); // sets the state of a cell at row x and column y in the grid
        char getCell(int x,int y); // returns the state of a cell at row x and column y
        virtual bool evaluateGrid(); // assesses whether a win has occurred
        char getWinner(); // returns winner character
        virtual void displayGrid(); // displays the 3x3 grid
};

#endif