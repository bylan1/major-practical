#include "Game.h"
#include "Grid.h"
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
                gameboard.setCell(player1.getRow(player1.getMoveInput()), player1.getCol(player1.getMoveInput()), player1.getMarker());
                gameboard.displayGrid();
                if(gameboard.evaluateGrid()!=false){
                    break;
                }
                player2.setMove();
                gameboard.setCell(player2.getRow(player2.getMoveInput()), player2.getCol(player2.getMoveInput()), player2.getMarker());
                gameboard.displayGrid();
            }
            if(player1.getMarker()==gameboard.getWinner()){
                std::cout << player1.getName() << " has won!" << std::endl;
            }
            if(player2.getMarker()==gameboard.getWinner()){
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
            std::cout << "Goodbye!" << std::endl;
            break;
    }
}