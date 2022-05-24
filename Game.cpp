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
                std::cout << "under construction" << std::endl;
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