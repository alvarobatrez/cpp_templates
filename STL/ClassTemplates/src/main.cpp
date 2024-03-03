#include <iostream>
#include <vector>
#include "Item.hpp"

using namespace std;

int main()
{
    // ***** USING CLASS TEMPLATES *****
    
    Item<string, int> a {"Alvaro", 35}; // recommended
    cout << a.get_var1() << " " << a.get_var2() << endl;

    Item b {1.73, 'H'};
    cout << b.get_var1() << " " << b.get_var2() << endl;

    Item<string, Item<string, double>> c {"Cookies", {"Chocolate", true}};
    cout << c.get_var1() << endl;
    cout << c.get_var2().get_var1() << endl;
    cout << c.get_var2().get_var2() << endl;

    // ***** USING CLASS TEMPLATES - VECTORS *****

    vector <Item<string, int>> vec {};
    vec.push_back(Item<string, int>("Jhon", 1940));
    vec.push_back(Item<string, int>("Paul", 1942));
    vec.push_back(Item<string, int>("George", 1943));
    vec.push_back(Item<string, int>("Ringo", 1940));
    for (const auto &item: vec)
    {
        cout << "Name: " << item.get_var1() << " \tYear: " << item.get_var2() << endl;
    }
    
    return 0;
}