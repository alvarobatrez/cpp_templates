#include "MyString.hpp"

int main()
{
    MyString empty;
    MyString name {"Alvaro"};
    MyString copy {name};

    empty.display();
    name.display();
    copy.display();
    
    return 0;
}