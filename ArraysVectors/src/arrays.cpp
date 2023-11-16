#include <iostream>

using namespace std;

int main()
{
    // ***** ARRAYS *****

    char vowels[5] {'a', 'e', 'i', 'o', 'u'};
    int primes[] {2, 3, 5, 7, 11, 13, 17, 19, 23};
    // double a[4]; // uninitialized

    //cout << a[0] << endl << endl;

    cout << vowels[0] << endl;
    cout << vowels[1] << endl;
    cout << vowels[2] << endl;
    cout << vowels[3] << endl;
    cout << vowels[4] << endl << endl;
    // cout << vowels[5] << endl; // out of array boudaries

    primes[4] = 100;

    cout << primes[0] << endl;
    cout << primes[1] << endl;
    cout << primes[2] << endl;
    cout << primes[3] << endl;
    cout << primes[4] << endl;
    cout << primes[5] << endl;
    cout << primes[6] << endl;
    cout << primes[7] << endl;
    cout << primes[8] << endl << endl;

    // ***** TABLES *****

    unsigned short scores[3][4]
    {
        {72, 85, 77, 90},
        {83, 98, 89, 94},
        {71, 82, 98, 65}
    };

    scores[2][3] = 100;

    cout << scores[0][0] << endl;
    cout << scores[0][1] << endl;
    cout << scores[0][2] << endl;
    cout << scores[0][3] << endl;
    cout << scores[1][0] << endl;
    cout << scores[1][1] << endl;
    cout << scores[1][2] << endl;
    cout << scores[1][3] << endl;
    cout << scores[2][0] << endl;
    cout << scores[2][1] << endl;
    cout << scores[2][2] << endl;
    cout << scores[2][3] << endl;

    return 0;
}