#include <iostream>

class Base
{
    private:

    int base_int;

    public:

    Base() : base_int {0}
    {
        std::cout << "Base no arguments constructor" << std::endl;
    }

    Base(int x) : base_int {x}
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

    int derived_int;

    public:

    Derived() : derived_int {10}
    {
        std::cout << "Derived no arguments constructor" << std::endl;
    }

    Derived(int x) : derived_int {x*2}
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