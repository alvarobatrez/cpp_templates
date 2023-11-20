#include <iostream>
#include <iomanip>

using namespace std;

// ***** RECURSIVE FUNCTIONS *****

unsigned long long factorial(unsigned long long n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

long double e(unsigned long long n)
{
    if (n <= 1)
    {
        return 1;
    }

    long double sum {1.0 / factorial(n)};

    return sum + e(n - 1);
}

long double euler(unsigned long long n)
{
    return 1 + e(n);
}

int main()
{
    cout << fixed << setprecision(15);

    for (int n {0}; n <= 20; n++)
    {
        cout << "n = " << n << ": " << euler(n) << endl;
    }
    
    return 0;
}