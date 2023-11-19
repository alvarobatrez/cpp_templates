#include <iostream>

using namespace std;

int main()
{
    double f, c;
    double b, h, a;
    string full_name;

    // ***** SINGLE INPUT *****

    cout << "Enter the temperature in F: ";
    cin >> f;

    c = 5.0 / 9 * (f - 32);

    cout << f << " F is equal to " << c << " C" << endl;

    // ***** MULTIPLE INPUTS *****

    cout << "\nEnter the base and height of a triangle separated by a space: ";
    cin >> b >> h;

    a = b * h / 2;

    cout << "The area of the triangle is " << a << endl;

    // ***** STRINGS WITH MULTIPLE SPACES *****

    cout << "\nEnter your full name: ";
    cin.ignore(); // optional in case you use ">>" and getline() in the same file
    getline(cin, full_name);

    cout << "You are " << full_name << endl;
    
    return 0;
}