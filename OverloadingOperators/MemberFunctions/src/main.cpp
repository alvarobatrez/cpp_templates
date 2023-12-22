#include "MyString.hpp"
#include <iostream>

int main()
{
    MyString john {"john"};
    MyString paul {"PAUL"};
    MyString george {"george"};
    MyString ringo {"ringo"};

    MyString paulower {-paul};
    paulower.display();

    MyString c {george + ringo};
    c.display();

    std::cout << (john == ringo) << std::endl;

    MyString copy {ringo};
    std::cout << (copy == ringo) << std::endl;
    
    return 0;
}