#ifndef ITEM_HEADER
#define ITEM_HEADER

#include <string>

using namespace std;

class Item {
    private:
        string name;
        float cost;
    
    public:
        Item(string name, float cost);
        string get_name();
        float get_cost();

};

#endif // ITEM_HEADER