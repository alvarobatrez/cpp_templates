#include <iostream>

using namespace std;

// ***** FAHRENHEIT TO CELSIUS *****

int main()
{
    double f {55};
    double c;

    c = 5.0 / 9 * (f - 32);

    cout << f << " F is equal to " << c << " C" << endl;
    
    return 0;
}