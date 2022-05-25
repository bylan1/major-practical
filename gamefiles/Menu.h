#ifndef MENU_H
#define MENU_H
#include <string>

class Menu{
    protected:
        std::string selectionString;
        int selection;
    public:
        Menu(); // default constructor
        virtual void setSelection(); // sets the user's selection of choice
        int getSelection(); // returns the user's selection
        virtual void display() = 0; // displays a menu
};

#endif