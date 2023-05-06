#include "Menu.hpp"
#include "Item.hpp"
#include "Order.hpp"
#include <iostream>

using namespace std;

int main() {

    // Create necessary classes to start program:
    Item hamburger {"Hamburger", 3.00};
    Item cheeseburger {"Cheeseburger", 3.50};
    Item fries {"French Fries", 1.50};
    Item salad {"Salad", 4.50};
    Item drink {"Drink", 1.00};
    Order o1 {1};
    Menu m1 {"Joe's Burgers", {hamburger, cheeseburger, fries, salad, drink}};


    // Print start menu.
    cout << "Welcome to " << m1.get_name() << "! \n";
    cout << "How may I help you?\n";
    cout << "1. Place Order\n";
    cout << "2. View Order\n";
    cout << "3. Pay\n";
    cout << "4. Quit\n";

    int selector;
    cin >> selector;

    do {
        switch (selector) {
            case 1:
                cout << "What would you like to order?\n";
                m1.display_menu();

                int selector2;
                cin >> selector2;

                switch (selector2) {
                    case 1:
                        o1.add_item_to_order(hamburger);
                        break;
                    case 2:
                        o1.add_item_to_order(cheeseburger);
                        break;
                    case 3:
                        o1.add_item_to_order(fries);
                        break;
                    case 4:
                        o1.add_item_to_order(salad);
                        break;
                    case 5:
                        o1.add_item_to_order(drink);
                        break;
                }
                break;
            case 2: 
                cout << "Here is your order!\n";
                o1.display_order();
                break;
            case 3:
                cout << "Here is your order!\n";
                o1.display_order();
                cout << "Thank you for dining with us today!";
                break;
            case 4:
                cout << "We look forward to seeing you again soon!" << endl;
                break;
        }
    }
    while (selector != 3 && selector != 4);
}