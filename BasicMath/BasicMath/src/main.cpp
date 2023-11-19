#include <iostream>
#define _USE_MATH_DEFINES // optional
#include <cmath>

using namespace std;

int main()
{
    // ***** ARITHMETIC *****

    cout << 2 + 4 * 4 << endl;
    cout << (2 + 4) * 4 << endl << endl;

    cout << 3 / 2 << endl; // division between integers returns an integer
    cout << 3.0 / 2 << endl;
    cout << 3 / 2.0 << endl;
    cout << 3.0 / 2.0 << endl << endl;

    cout << 2.5e7 << endl << endl;

    // ***** MATH LIBRARY *****
    
    cout << sqrt(pow(3.0, 2) + pow(4.0, 2)) << endl;
    cout << cos(M_PI) << endl << endl;

    // ***** INCREMENTS/DECREMENTS *****

    int num {0};
    num++; // num--
    num = num + 1; // num - 1
    num += 1; // -=

    cout << num << endl << endl;

    // ***** RANDOM NUMBER *****

    srand(time(nullptr)); // needed to always get a new random number

    int min_number {1};
    int max_number {100};
    int random_number;

    random_number = rand() % max_number + min_number; // RAND_MAX = 32767
    cout << random_number << endl;
    
    return 0;
}