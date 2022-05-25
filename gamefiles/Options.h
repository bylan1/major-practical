#ifndef OPTIONS_H
#define OPTIONS_H
#include "Menu.h"

// scaling for grid not integrated yet
class Options : public Menu{
    private:
        int scale;
    public:
        Options(); // default constructor
        void display(); // displays the options menu
        void setScale(int input); // sets the scale of the grid for gameplay
        int getScale(); // returns the scale of the grid
};

#endif