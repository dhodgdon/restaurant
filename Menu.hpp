#ifndef MENU_HEADER
#define MENU_HEADER

#include "Item.hpp"
#include <string>
#include <list>

using namespace std;

class Menu {
    private:
        string name;
        list<Item> items;

    public:
        Menu(string name, list<Item> items);

        string get_name();
        void set_name(string name);
        void display_menu();
};

#endif // MENU_HEADER