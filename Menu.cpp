#include "Menu.h"
#include <iostream>

extern void clr();

// default constructor
Menu::Menu() : selection(0){
}

// determines selection based on user's input
void Menu::setSelection(){
    std::cout << "Pick a selection: ";
    std::cin >> selection;
}