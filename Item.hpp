#ifndef ITEM_HEADER
#define ITEM_HEADER

// #include "Ingredient.hpp"
#include <string>
// #include <list>

using namespace std;

class Item {
    private:
        string name;
        float cost;
        // list<Ingredient> ingredients;
    
    public:
        Item(string name, float cost);
        string get_name();
        float get_cost();

};

#endif // ITEM_HEADER