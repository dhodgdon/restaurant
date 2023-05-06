#include "Order.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Order::Order(int order_num) : order_num(order_num) {}

void Order::add_item_to_order(Item item) {
    order_items.push_back(item);
}

void Order::display_order() {
    cout << "Order Number: " << order_num << "\n";

    int count = 1;
    float subtotal_cost = 0;

    for (Item item : Order::order_items) {
        cout << count << ". " << item.get_name() << ", " << item.get_cost() << endl;
        count++;
        subtotal_cost += item.get_cost();
    }

    float tax = round(0.06 * subtotal_cost * 100) / 100;
    float total_cost = tax + subtotal_cost;

    cout << "Subtotal: " << subtotal_cost << endl;
    cout << "Total Tax: " << tax << endl;
    cout << "Total: " << total_cost << endl;
}