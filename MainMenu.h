#ifndef MAINMENU_H
#define MAINMENU_H
#include "Menu.h"

class MainMenu : public Menu{
    public:
        MainMenu(); // default constructor
        int getSelection(); // gets the user's selection
        void display(); // displays menu
};

#endif