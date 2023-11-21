#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ***** REFERENCES *****

    char letter {'x'};
    char &ref {letter}; // char &ref {'x'} not possible

    cout << letter << endl;
    cout << ref << endl;

    letter = 'y';
    cout << letter << endl;
    cout << ref << endl;

    ref = 'z';
    cout << letter << endl;
    cout << ref << endl << endl;

    vector <string> beatles {"John", "Paul", "George", "Ringo"};

    for (auto name : beatles)
    {
        name = "Yoko"; // not changed because if making a copy
    }

    for (auto name : beatles) { cout << name << endl; }

    cout << "\n";

    for (auto &name : beatles)
    {
        name = "Yoko";
    }

    for (auto name : beatles) { cout << name << endl; }

    return 0;
}