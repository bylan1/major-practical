#include "Game.h"
#include "Grid.h"
#include "Cell.h"
#include "Player.h"
#include "Menu.h"
#include "MainMenu.h"
#include "Options.h"
#include <iostream>

Game::Game(){
}

void Game::run(){
    menu.display();
    menu.setSelection();
    switch(menu.getSelection()){
        case 1:
            player1.setName();
            player1.setMarker();
            player2.setName();
            player2.setMarker();
            while(player2.getMarker()==player1.getMarker()){
                player2.setMarker();
            }
            gameboard.displayGrid();
            while(gameboard.evaluateGrid()==false){
                player1.setMove();
                tempCell.setState(player1.getMarker());
                gameboard.setCell(player1.getRow(), player1.getCol(), tempCell);
                gameboard.displayGrid();
                if(gameboard.evaluateGrid()!=false){
                    break;
                }
                player2.setMove();
                tempCell.setState(player2.getMarker());
                gameboard.setCell(player2.getRow(), player2.getCol(), tempCell);
                gameboard.displayGrid();
            }
            if(player1.getMarker()==gameboard.winnerMarker){
                std::cout << player1.getName() << " has won!" << std::endl;
            }
            if(player2.getMarker()==gameboard.winnerMarker){
                std::cout << player2.getName() << " has won!" << std::endl;
            }
            break;
        case 2:
            std::cout << "under construction" << std::endl;
            break;
        case 3:
            options.display();
            options.setSelection();
            std::cout << "under construction" << std::endl;
            break;
        case 4:
            std::cout << "under construction" << std::endl;
            break;
        case 5:
            std::cout << "Goodbye!" << std::endl;
            break;
    }
}