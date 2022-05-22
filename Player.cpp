#include "Player.h"
#include <string>
#include <iostream>

extern void clr();

// default player constructor
Player::Player(){
    inputString = "";
    gridInput = 0;
    moveInput = 0;
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
void Player::setGrid(){
    std::cout << "Enter choice of grid (1-9): ";
    std::cin >> inputString;
    while(!(std::stoi(inputString) >= 1 && std::stoi(inputString) <= 9)){
        std::cout << "Invalid input. Enter choice of grid (1-9): ";
        std::cin >> inputString;
    }
    gridInput = stoi(inputString);
}

int Player::getGridInput(){
    return gridInput;
}

// sets the move of the player
void Player::setMove(){
    std::cout << "Enter choice of square (1-9): ";
    std::cin >> inputString;
    while(!(std::stoi(inputString) >= 1 && std::stoi(inputString) <= 9)){
        std::cout << "Invalid input. Enter choice of square (1-9): ";
        std::cin >> inputString;
    }
    moveInput = stoi(inputString);
}

int Player::getMoveInput(){
    return moveInput;
}

// returns the row of which the player's move is
int Player::getRow(int inputValue){
    rowValue = (inputValue-1)/3;
    return rowValue;
}

// returns the column of which the player's move is
int Player::getCol(int inputValue){
    colValue = (inputValue+2)%3;
    return colValue;
}