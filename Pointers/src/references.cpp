#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ***** REFERENCES *****

    int num = 10;
    int &r1 = num;
    // int &r2 = 10; // not possible
    
    char letter {'x'};
    char &ref {letter};

    cout << letter << endl;
    cout << ref << endl;

    letter = 'y';

    cout << letter << endl;
    cout << ref << endl;

    ref = 'z';

    cout << letter << endl;
    cout << ref << endl << endl;

    vector<string> beatles {"John","Paul","George","Ringo"};

    for (auto name : beatles)
    {
        name = "Yoko"; // not change because is making a copy
    }

    for (auto name : beatles)
    {
        cout << name << endl;
    }

    for (auto &name : beatles)
    {
        name = "Yoko"; // name is referencing
    }

    for (auto name : beatles)
    {
        cout << name << endl;
    }

    return 0;
}