#include "MyString.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    MyString a {"Hello"}; // overloaded constructor
    MyString b; // no arguments constructor

    b = a; // copy assignment

    b = "world"; // overloaded constructor

    a.display();
    b.display();

    cout << endl;

    vector <MyString> beatles;
    beatles.push_back("John");
    beatles.push_back("Paul");
    beatles.push_back("George");
    beatles.push_back("Ringo");

    for (const MyString &b : beatles)
    {
        b.display();
    }

    cout << endl;

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