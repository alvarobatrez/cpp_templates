#include "MyString.hpp"
#include <vector>

int main()
{
    MyString h {"hello"};
    MyString w;

    w = h;

    w = "world";

    h.display();
    w.display();

    std::vector <MyString> beatles;
    beatles.push_back("John");
    beatles.push_back("Paul");
    beatles.push_back("George");
    beatles.push_back("Ringo");

    for (const MyString &b : beatles)
    {
        b.display();
    }

    for (MyString &b : beatles)
    {
        b = "Yoko";
    }

    for (const MyString &b : beatles)
    {
        b.display();
    }
    
    return 0;
}