#include "Player.h"
#include <string>
#include <iostream>

Player::Player(std::string name) : username(name){
    input = 0;
}

int Player::takeInput(){
    std::cout << "Enter choice of square (1-9): ";
    std::cin >> input;
    while(!(input >= 1 && input <= 9)){
        std::cout << "Invalid input. Enter choice of square (1-9): ";
        std::cin >> input;
        std::cout << input << std::endl;
        // fix character inputs
    }
    return input;
}

int Player::getRow(){
    rowValue = (input-1)/3;
    return rowValue;
}

int Player::getCol(){
    colValue = (input+2)%3;
    return colValue;
}