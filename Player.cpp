#include "Player.h"
#include <string>
#include <iostream>

Player::Player(){
    name = "";
    marker = '\0';
    move = 0;
}

// 
std::string Player::getName(){
    std::cout << "Enter name: ";
    std::cin >> name;
    return name;
}

// sets users marker
char Player::getMarker(){
    std::cout << "Choose your marker (x or o): ";
    std::cin >> marker;
    marker = tolower(marker);
    while(marker != 'x' && marker != 'o'){
        std::cout << "Invalid input. Choose marker (x or o): ";
        std::cin >> marker;
    }
    return marker;
}

// sets users move
int Player::getMove(){
    std::cout << "Choose your move (1-9): ";
    std::cin >> move;
    while(move < 1 || move > 9){
        std::cout << "Invalid input. Choose your move (1-9): ";
        std::cin >> move;
        // figure out characters
    }
    return move;
}