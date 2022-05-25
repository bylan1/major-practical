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
        char getCell(int gridX, int gridY, int x,int y); // returns the state of a cell at row x and column y in a particular grid
        void setWonGrid(int gridX, int gridY); // sets a winning grid in the inherited board
        Grid getGrid(int gridX, int gridY); // returns a grid at row x and column y
        void refreshGrid(int gridX, int gridY); // fills a grid at row x and column y with null characters
        void displayOuterGrid(); // displays the 3x3 3x3 grid
        ~OuterGrid(); // default deconstructor
};

#endif