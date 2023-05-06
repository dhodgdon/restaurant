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
        cout << count << ". " << item.get_name() << ", $";
        printf("%.2f \n", item.get_cost());
        count++;
        subtotal_cost += item.get_cost();
    }

    float tax = round(0.06 * subtotal_cost * 100) / 100;
    float total_cost = tax + subtotal_cost;

    printf("Subtotal: $%.2f \n", subtotal_cost);
    printf("Total Tax: $%.2f \n", tax);
    printf("Total: $%.2f \n\n", total_cost);
}