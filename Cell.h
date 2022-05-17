#ifndef CELL_H
#define CELL_H
#include <string>

class Cell{
    private:
        char state;
    public:
        Cell();
        void setState(char state);
        char getState();
};

#endif