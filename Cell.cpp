#include "Cell.h"
#include <string>
#include <iostream>

// default cell constructor
Cell::Cell(){
    state = '\0';
}

// sets the state of the cell to x or o
void Cell::setState(char newState){
    state = newState;
}

// returns state of cell
char Cell::getState(){
    return state;
}