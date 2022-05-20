#ifndef MENU_H
#define MENU_H

class Menu{
    protected:
        int selection;
    public:
        Menu();
        virtual void setSelection();
        virtual void display() = 0;
};

#endif