#include "Cell.h"
#include <string>
#include <iostream>

Cell::Cell(){
    state = '\0';
}

void Cell::setState(char newState){
    state = newState;
}

char Cell::getState(){
    return state;
}