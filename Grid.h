#ifndef GRID_H
#define GRID_H
#include "Player.h"

class Grid{
    private:
        char board[3][3];
    public:
        Grid();
        void printBoard();
        bool enterMove(Player player);
        bool checkWinner(Player player);
};

#endif