#ifndef MAINMENU_H
#define MAINMENU_H
#include "Menu.h"

class MainMenu : public Menu{
    public:
        MainMenu();
        int getSelection();
        void display();
};

#endif