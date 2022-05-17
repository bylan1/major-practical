#ifndef GRID_H
#define GRID_H
#include "Cell.h"
#include "Player.h"

class Grid{
    private:
        Cell* board[3][3];
    public:
        Grid();
        void setCell(int x,int y,Cell state);
        bool evaluateGrid(Player player);
        ~Grid();
};

#endif