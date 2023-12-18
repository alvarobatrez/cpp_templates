#include "MyString.hpp"
#include <iostream>

using namespace std;

int main()
{
    MyString empty; // no arguments constructor
    MyString name {"Alvaro"}; // overloaded constructor
    MyString namecpy {name}; // copy constructor

    empty.display();
    name.display();
    namecpy.display();
    
    return 0;
}