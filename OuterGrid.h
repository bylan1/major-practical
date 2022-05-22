#ifndef OUTERGRID_H
#define OUTERGRID_H
#include "Grid.h"

class OuterGrid : public Grid{
    private:
        Grid* outerboard[3][3];
        char outerboardDisplay[9][9];
        int gridSetter;
    public:
        OuterGrid(); // default constructor
        void setCell(int x, int y, int gridX, int gridY, char state); // sets the state of a cell at row x and column y in a particular grid
        bool evaluateGrid(); // assesses whether a win has occurred
        void displayGrid(); // displays the 3x3 3x3 grid
        ~OuterGrid(); // default deconstructor
};

#endif