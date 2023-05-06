#ifndef ORDER_HEADER
#define ORDER_HEADER

#include "Order.hpp"
#include "Item.hpp"
#include <list>

using namespace std;

class Order {
    private:
        int order_num;
        list<Item> order_items;

    public:
        Order(int order_num);
        void add_item_to_order(Item item);
        void display_order();
};

#endif // ORDER_HEADER