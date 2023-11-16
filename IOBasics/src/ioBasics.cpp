#include <iostream>

using namespace std;

int main()
{
    double f, c;
    double b, h;
    
    cout << "Enter the temperature in F: ";
    cin >> f;

    c = 5.0 / 9.0 * (f - 32);

    cout << f << " F is equal to " << c << " C" << endl;

    cout << "\nEnter the base and height of the triangle separated by an space: ";
    cin >> b >> h;

    cout << "The area of the triangle is\t" << b * h / 2 << endl;

    string fname;
    cout << "Enter your full name: ";
    getline(cin, fname);
    cout << "Your full name is " << fname << endl;

    return 0;
}