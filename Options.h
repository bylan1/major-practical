#ifndef OPTIONS_H
#define OPTIONS_H
#include "Menu.h"

// scaling for grid not integrated yet
class Options : public Menu{
    private:
        int scale;
    public:
        Options();
        void display();
};

#endif