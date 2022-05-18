#include "Menu.h"
#include "Options.h"
#include <iostream>

extern void clr();

Options::Options() : scale(1){
}

void Options::display(){
    clr();
    std::cout << "OPTIONS" << std::endl
    << "1. increase grid scale (max grid scale is 3x)" << std::endl
    << "2. decrease grid scale" << std::endl
    << "3. return to menu" << std::endl;
}

void Options::setSelection(){
    std::cout << "Pick a selection: ";
    std::cin >> selection;
    switch(selection){
        case 1:
            if(scale<3){
                scale++;
                break;
            }
        case 2:
            if(scale>1){
                scale--;
                break;
            }
    }
}