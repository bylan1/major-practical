#ifndef GRID_H
#define GRID_H
#include "Cell.h"

class Grid{
    private:
        Cell board[3][3];
        int input;
        int rowGrid;
        int colGrid;
    public:
        Grid();
        int inputValue();
        void setCell(int x,int y,Cell state);
        bool evaluateGrid();
};

#endif