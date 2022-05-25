#include "Game.h"
#include "Grid.h"
#include "Player.h"
#include "Menu.h"
#include "MainMenu.h"
#include "Options.h"
#include "GameRun.h"
#include <iostream>

extern void clr();

Game::Game(){
}

void Game::run(){
    while(menu.getSelection()!=4){
        clr();
        menu.display();
        menu.setSelection();
        switch(menu.getSelection()){
            case 1:
                game.runGame(options.getScale(), player1, player2);
                break;
            case 2:
                while(menu.getSelection()!=1){
                    clr();
                    std::cout << "HOW TO PLAY" << std::endl
                    << "use numbers (1-9) to input your move choice or grid choice depending on your choice of grid scale" << std::endl
                    << "GRID SCALE 1: grid will appear with cells 1-9 as shown:" << std::endl
                    << "+-----------+" << std::endl << "| 1 | 2 | 3 |" << std::endl << "|--- --- ---|" << std::endl
                    << "| 4 | 5 | 6 |" << std::endl << "|--- --- ---|" << std::endl
                    << "| 7 | 8 | 9 |" << std::endl << "+-----------+" << std::endl
                    << "to win, place your marker in 3 cells in a row, horizontally, vertically or diagonally" << std::endl << std::endl
                    << "GRID SCALE 2: grid will appear as 9 3x3 grids where you must input your choice of grid 1-9 before your choice of cell as shown:" <<std::endl
                    << "+-----------+-----------+-----------+" << std::endl;
                    for(int i=0; i<18; i++){
                        if(i%6==5){
                            std::cout << "+-----------+-----------+-----------+" << std::endl;
                        } else if(i==2){
                            std::cout << "|   GRID1   |   GRID2   |   GRID3   |" << std::endl;
                        } else if(i==8){
                            std::cout << "|   GRID4   |   GRID5   |   GRID6   |" << std::endl;
                        } else if(i==14){
                            std::cout << "|   GRID7   |   GRID8   |   GRID9   |" << std::endl;
                        } else {
                            std::cout << "|           |           |           |" << std::endl;
                        }
                    }
                    std::cout << "to win, win 3 3x3 grids in a row. if a 3x3 grid is tied, the grid will reset for markers to be placed again" << std::endl << std::endl;
                    std::cout << "1. return to menu" << std::endl;
                    menu.setSelection();
                }
                break;
            case 3:
                options.display();
                options.setSelection();
                while(options.getSelection()!=3){
                    options.display();
                    if(options.getSelection()>=1 && options.getSelection()<=2){
                        std::cout << "set to grid scale " << options.getSelection() << "!" << std::endl;
                    }
                    options.setSelection();
                    if(options.getSelection()>=1 && options.getSelection()<=2){
                        std::cout << "set to grid scale " << options.getSelection() << "!" << std::endl;
                        options.setScale(options.getSelection());
                    }
                }
                break;
            case 4:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid input. ";
        }
    }
}