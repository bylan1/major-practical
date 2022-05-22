#include "MainMenu.h"
#include <iostream>

extern void clr();

// default constructor
MainMenu::MainMenu(){
}

int MainMenu::getSelection(){
    return selection;
}

// displays the main menu
void MainMenu::display(){
    clr();
    std::cout << "ULTIMATE TIC-TAC-TOE" << std::endl
    << "1. start game" << std::endl
    << "2. instructions" << std::endl
    << "3. options" << std::endl
    << "4. leaderboard" << std::endl
    << "5. quit game" << std::endl;
}