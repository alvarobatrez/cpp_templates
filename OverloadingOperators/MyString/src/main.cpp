#include "MyString.hpp"
#include <iostream>

using namespace std;

int main()
{
    MyString empty;
    MyString name {"Alvaro"};
    MyString namecpy {name};

    empty.display();
    name.display();
    namecpy.display();
    
    return 0;
}