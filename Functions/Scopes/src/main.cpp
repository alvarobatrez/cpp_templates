#include <iostream>

// ***** GLOBAL VARIABLES *****

int num {10};

// ***** LOCAL VARIABLES *****

void print(int num1)
{
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num = " << num << std::endl;
}

// ***** STATIC VARIABLES *****
void static_example()
{
    static int num1 {30}; // initialized just once, save its value for subsecuent calls
    num1 += 10;
    std::cout << "num 1 = " << num1 << std::endl;
}

int main()
{
    std::cout << "num = " << num << std::endl;
    print(20);
    static_example();
    static_example();
    static_example();
    
    return 0;
}