#include "Player.h"
#include <string>
#include <iostream>

// default player constructor
Player::Player(){
    input = 0;
    username = "";
    rowValue = 0;
    colValue = 0;
    marker = '\0';
}

// sets player's name
void Player::setName(){
    std::cout << "What is your name: ";
    std::cin >> username;
}

// returns player's name
std::string Player::getName(){
    return username;
}

// sets the marker of the player
void Player::setMarker(){
    std::cout << "Choose your marker (x or o): ";
    std::cin >> marker;
    marker = tolower(marker);
    while(marker != 'x' && marker != 'o'){
        std::cout << "Invalid input. Choose your marker (x or o): ";
        std::cin >> marker;
        marker = tolower(marker);
    }
}

// returns player's marker
char Player::getMarker(){
    return marker;
}

// sets the move of the player
void Player::setMove(){
    std::cout << "Enter choice of square (1-9): ";
    std::cin >> input;
    while(!(input >= 1 && input <= 9)){
        std::cout << "Invalid input. Enter choice of square (1-9): ";
        std::cin >> input;
        std::cout << input << std::endl;
        // fix character inputs
    }
}

// returns the row of which the player's move is
int Player::getRow(){
    rowValue = (input-1)/3;
    return rowValue;
}

// returns the column of which the player's move is
int Player::getCol(){
    colValue = (input+2)%3;
    return colValue;
}