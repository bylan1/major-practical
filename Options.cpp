#include "Menu.h"
#include "Options.h"
#include <iostream>

extern void clr();

// default constructor
Options::Options() : scale(1){
}

// displays the options menu
void Options::display(){
    clr();
    std::cout << "OPTIONS" << std::endl
    << "1. increase grid scale (max grid scale is 3x)" << std::endl
    << "2. decrease grid scale" << std::endl
    << "3. return to menu" << std::endl;
}