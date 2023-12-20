#include "MyString.hpp"
#include <iostream>

int main()
{
    MyString john {"John"};
    MyString paul {"PAUL"};
    MyString george {"George"};
    MyString ringo {"Ringo"};

    paul = -paul; // lowercase
    paul.display();

    MyString b {george + ringo}; // concatenate
    b.display();

    std::cout << (john==george) << std::endl; // equal
    
    return 0;
}