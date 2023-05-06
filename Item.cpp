#include "Item.hpp"
#include <string>

using namespace std;

Item::Item(string name, float cost) : name(name), cost(cost) {}

string Item::get_name() {
    return name;
}

float Item::get_cost() {
    return cost;
}