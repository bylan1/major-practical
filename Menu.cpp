#include "Menu.h"
#include <iostream>

extern void clr();

Menu::Menu() : selection(0){
}

void Menu::setSelection(){
    std::cout << "Pick a selection: ";
    std::cin >> selection;
}

int Menu::getSelection(){
    return selection;
}