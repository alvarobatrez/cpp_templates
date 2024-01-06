#include <iostream>

// ***** THIS EXAMPLE SHOWS THE BEHAVIOR OF THE CONSCTRUCTORS *****
// ***** FULL EXAMPLE IN PASSING ARGUMENTS EXAMPLE *****

class Base
{
    private:

    int value;

    public:

    Base() : value {0}
    {
        std::cout << "Base no arguments constructor" << std::endl;
    }

    Base(int x) : value {x}
    {
        std::cout << "Base arguments constructor" << std::endl;
    }

    ~Base()
    {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base
{
    using Base::Base;
    
    private:

    int double_value;

    public:

    Derived() : double_value {10}
    {
        std::cout << "Derived no arguments constructor" << std::endl;
    }

    Derived(int x) : double_value {x*2}
    {
        std::cout << "Derived arguments constructor" << std::endl;
    }

    ~Derived()
    {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main()
{
    // Base b;
    // Base B {2};

    // Derived d;
    Derived d {10};
    
    return 0;
}