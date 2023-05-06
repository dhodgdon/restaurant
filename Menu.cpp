#include "Menu.hpp"
#include <string>
#include <list>
#include <iostream>

using namespace std;

Menu::Menu(string name, list<Item> items) : name(name), items(items) {

}

string Menu::get_name() {
    return name;
}

void Menu::set_name(string name) {
    Menu::name = name;
}

void Menu::display_menu() {
    int count = 1;
    for (Item item : Menu::items) {
        cout << count << ". " << item.get_name() << ", $";
        printf("%.2f \n", item.get_cost());
        count++;
    }
}

