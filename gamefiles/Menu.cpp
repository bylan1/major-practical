#include "Menu.h"
#include <iostream>
#include <string>

extern void clr();

// default constructor
Menu::Menu() : selection(0), selectionString(""){
}

int Menu::getSelection(){
    return selection;
}

// determines selection based on user's input
void Menu::setSelection(){
    std::cout << "Pick a selection: ";
    std::cin >> selectionString;
    while(!(selectionString == "1" || selectionString == "2" || selectionString == "3" || selectionString == "4")){
        selectionString.clear();
        std::cout << "Invalid input. Pick a selection: ";
        std::cin >> selectionString;
    }
    selection = stoi(selectionString);
}