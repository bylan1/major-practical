#include "Player.h"
#include "OuterGrid.h"
#include "Grid.h"
#include "GameRun.h"
#include <iostream>
#include <string>

extern void clr();

GameRun::GameRun(){
    board1 = new Grid;
    board2 = new OuterGrid;
    winCase = 0;
}

void GameRun::runGame(int gamemode, Player p1, Player p2){
    clr();
    std::cout << "Player 1: " << std::endl;
    p1.setName();
    p1.setMarker();
    std::cout << "Player 2: " << std::endl;
    p2.setName();
    p2.setMarker();
    while(p2.getMarker()==p1.getMarker()){
        std::cout << "Invalid input. ";
        p2.setMarker();
    }
    if(gamemode==1){
        clr();
        while(board1->evaluateGrid()==false && board1->drawGame()==false){
            clr();
            board1->displayGrid();
            std::cout << p1.getName() << "\'s turn (" << p1.getMarker() << ") : " << std::endl;
            p1.setMove();
            while(board1->getCell(p1.getRow(p1.getMoveInput()),p1.getCol(p1.getMoveInput()))!='\0'){
                std::cout << "Invalid input. ";
                p1.setMove();
            }
            board1->setCell(p1.getRow(p1.getMoveInput()), p1.getCol(p1.getMoveInput()), p1.getMarker());
            if(board1->evaluateGrid()==true){
                winCase = 1;
                break;
            } else if(board1->drawGame()==true){
                winCase = 2;
                break;
            }
            clr();
            board1->displayGrid();
            std::cout << p2.getName() << "\'s turn (" << p2.getMarker() << ") : " << std::endl;
            p2.setMove();
            while(board1->getCell(p2.getRow(p2.getMoveInput()),p2.getCol(p2.getMoveInput()))!='\0'){
                std::cout << "Invalid input. ";
                p2.setMove();
            }
            board1->setCell(p2.getRow(p2.getMoveInput()), p2.getCol(p2.getMoveInput()), p2.getMarker());
        }
        clr();
        board1->displayGrid();
        if(winCase==1){
            if(p1.getMarker()==board1->getWinner()){
                std::cout << p1.getName() << " has won!" << std::endl;
            }
            if(p2.getMarker()==board1->getWinner()){
                std::cout << p2.getName() << " has won!" << std::endl;
            }
        } else if(winCase==2){
            std::cout << "It\'s a draw!" << std::endl;
        }
    } else if(gamemode==2){
        clr();
        board2->displayOuterGrid();
        while(board2->evaluateGrid()==false && board2->drawGame()==false){
            std::cout << p1.getName() << "\'s turn (" << p1.getMarker() << ") : " << std::endl;
            p1.setGrid();
            while(board2->getGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput())).evaluateGrid()==true){
                std::cout << "Grid completed. ";
                p1.setGrid();
            }
            p1.setMove();
            while(board2->getCell(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()),p1.getRow(p1.getMoveInput()),p1.getCol(p1.getMoveInput()))!='\0'){
                std::cout << "Invalid input. ";
                p1.setMove();
            }
            clr();
            board2->setCell(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()),p1.getRow(p1.getMoveInput()),p1.getCol(p1.getMoveInput()),p1.getMarker());
            if(board2->getGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput())).drawGame()==true){
                board2->refreshGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()));
            }
            board2->setWonGrid(p1.getRow(p1.getGridInput()),p1.getCol(p1.getGridInput()));
            board2->displayOuterGrid();
            if(board2->evaluateGrid()==true){
                winCase = 1;
                break;
            } else if(board2->drawGame()==true){
                winCase = 2;
                break;
            }
            std::cout << p2.getName() << "\'s turn (" << p2.getMarker() << ") : " << std::endl;
            p2.setGrid();
            while(board2->getGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput())).evaluateGrid()==true){
                std::cout << "Grid completed. ";
                p2.setGrid();
            }
            p2.setMove();
            while(board2->getCell(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()),p2.getRow(p2.getMoveInput()),p2.getCol(p2.getMoveInput()))!='\0'){
                std::cout << "Invalid input. ";
                p2.setMove();
            }
            clr();
            board2->setCell(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()),p2.getRow(p2.getMoveInput()),p2.getCol(p2.getMoveInput()),p2.getMarker());
            if(board2->getGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput())).drawGame()==true){
                board2->refreshGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()));
            }
            board2->setWonGrid(p2.getRow(p2.getGridInput()),p2.getCol(p2.getGridInput()));
            board2->displayOuterGrid();
            if(board2->evaluateGrid()==true){
                winCase = 1;
                break;
            } else if(board2->drawGame()==true){
                winCase = 2;
                break;
            }
        }
        clr();
        board2->displayOuterGrid();
        if(winCase==1){
            if(p1.getMarker()==board1->getWinner()){
                std::cout << p1.getName() << " has won!" << std::endl;
            }
            if(p2.getMarker()==board1->getWinner()){
                std::cout << p2.getName() << " has won!" << std::endl;
            }
        } else if(winCase==2){
            std::cout << "It\'s a draw!" << std::endl;
        }
    } else {
        std::cout << "failed test" << std::endl;
    }
}

GameRun::~GameRun(){
    delete board1;
    delete board2;
}