#include <iostream>
#include <vector>
#include <algorithm>

int X {1000};

int main()
{
    // ***** STATEFUL LAMBDA *****

    int x {100};

    auto l1 = [x]()
    {
        std::cout << x << std::endl;
        std::cout << X << std::endl;
    };
    l1();
    
    return 0;
}