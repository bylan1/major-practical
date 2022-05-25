#include "Menu.h"
#include "Options.h"
#include <iostream>

extern void clr();

Options::Options() : scale(1){
}

void Options::display(){
    clr();
    std::cout << "OPTIONS" << std::endl
    << "1. grid scale 1" << std::endl
    << "2. grid scale 2" << std::endl
    << "3. return to menu" << std::endl;
}

void Options::setScale(int input){
    scale = input;
}

int Options::getScale(){
    return scale;
}