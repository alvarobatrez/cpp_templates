#include "MyString.hpp"
#include <iostream>

using namespace std;

int main()
{
    MyString b1 {"john"};
    MyString b2;
    MyString b3;
    MyString b4;

    cout << "Write the name of the second beatle: ";
    cin >> b2;

    cout << "Write the name of the third and fourth beatle separated by a space: ";

    cin >> b3 >> b4;

    cout << "The name of the Beatles are " << b1 << ", " << b2 << ", " << b3 << " and " << b4 << endl;
    
    return 0;
}