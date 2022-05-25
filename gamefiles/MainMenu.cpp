#include "MainMenu.h"
#include <iostream>

extern void clr();

// default constructor
MainMenu::MainMenu(){
}

// displays the main menu
void MainMenu::display(){
    clr();
    std::cout << "ULTIMATE TIC-TAC-TOE" << std::endl
    << "1. start game" << std::endl
    << "2. how to play" << std::endl
    << "3. options" << std::endl
    << "4. quit game" << std::endl;
}