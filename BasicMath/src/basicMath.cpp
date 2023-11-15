#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // ***** ARITHMETIC *****

    cout << 2 + 4 * 4 << endl;
    cout << (2 + 4) * 4 << endl;

    cout << 2.5e7 << endl << endl;

    cout << 3 / 2 << endl; // division between integers returns an integer
    cout << 3.0 / 2 << endl;
    cout << 3 / 2.0 << endl;
    cout << 3.0 / 2.0 << endl << endl;

    // ***** MATH LIBRARY *****

    double c1 {3.0}, c2 {4.0};
    double h;
    h = sqrt(pow(c1,2) + pow(c2,2));
    cout << h << endl << endl;

    // ***** INCREMENTS/DECREMENTS *****

    int num {0};
    num++;
    num = num + 1;
    num += 1;
    cout << num << endl << endl;

    // ***** RANDOM NUMBERS *****

    srand(time(nullptr)); // needed to always get a new random number

    int min_number {1};
    int max_number {100};
    int random_number;

    random_number = rand() % max_number + min_number; // RAND_MAX = 32767
    cout << random_number << endl;
    random_number = rand() % max_number + min_number; // RAND_MAX = 32767
    cout << random_number << endl;

    return 0;
}