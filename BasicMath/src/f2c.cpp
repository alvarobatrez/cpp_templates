#include <iostream>

// ***** FAHRENHEIT TO CELSIUS *****

int main()
{
    double f {55};
    double c;

    c = 5.0 / 9 * (f - 32);

    std::cout << f << " F is equal to " << c << " C" << std::endl;

    return 0;
}