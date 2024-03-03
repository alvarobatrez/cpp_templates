#include <iostream>

// ***** MACROS *****

#define PI 3.1416
#define e 2.71828

#define MIN(x, y) ((x < y) ? x : y)

#define SQRT(x) (x * x)

int main()
{
    std::cout << "Pi = " << PI << std::endl;
    std::cout << "e = " << e << std::endl;
    
    std::cout << MIN(4.5, 4.3) << std::endl;
    std::cout << MIN(5, 7) << std::endl;
    std::cout << MIN('d', 'b') << std::endl;

    std::cout << 100 / SQRT(5) << std::endl;
    
    return 0;
}