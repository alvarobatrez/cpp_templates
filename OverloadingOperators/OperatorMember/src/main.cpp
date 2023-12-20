#include "MyString.hpp"
#include <iostream>

int main()
{
    MyString john {"John"};
    MyString paul {"PAUL"};
    MyString george {"George"};
    MyString ringo {"Ringo"};

    MyString paulower {-paul}; // lowercase
    paulower.display();

    MyString b {george + ringo}; // concatenate
    b.display();

    std::cout << (john==george) << std::endl; // equal
    
    return 0;
}