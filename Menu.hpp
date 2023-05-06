#include <string>
#include <list>

using namespace std;

class Menu {

    string name;
    list<int> items;

    public:
        Menu(string name);

        void displayMenu();
};