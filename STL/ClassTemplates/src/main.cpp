#include <iostream>
#include "Item.hpp"

using namespace std;

int main()
{
    Item<string, int> a {"Alvaro", 35};
    cout << "var1 = " << a.get_var1() << ", var2 = " << a.get_var2() << endl;
    
    return 0;
}