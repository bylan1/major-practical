#ifndef OUTERGRID_H
#define OUTERGRID_H
#include "Grid.h"

class OuterGrid : public Grid{
    private:
        Grid* outerboard[3][3];
        char outerboardDisplay[9][9];
    public:
        OuterGrid(); // default constructor
        void setCell(int gridX, int gridY, int x, int y, char state); // sets the state of a cell at row x and column y in a particular grid
        char getCell(int gridX, int gridY, int x,int y);
        void setWonGrid(int gridX, int gridY);
        bool evaluateEachGrid(int gridX, int gridY); // assesses whether a win in one of the grids has occurred 
        Grid getGrid(int gridX, int gridY);
        void displayOuterGrid(); // displays the 3x3 3x3 grid
        ~OuterGrid(); // default deconstructor
};

#endif