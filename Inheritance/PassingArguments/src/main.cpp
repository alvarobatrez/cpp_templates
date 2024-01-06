#include <iostream>

class Base
{
    private:

    int value;

    public:

    Base() : value {0}
    {
        std::cout << "Base no arguments constructor\n";
    }

    Base(int v) : value {v}
    {
        std::cout << "Base arguments contructor\n";
    }

    ~Base()
    {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base
{
    private:

    int double_value;

    public:

    Derived() : Base {}, double_value {0} // Base {} not necessary, just for explaining purposes
    {
        std::cout << "Derived no arguments constructor\n";
    }

    Derived(int v) : Base {v}, double_value{v*2}
    {
        std::cout << "Derived arguments contructor\n";
    }

    ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};

int main()
{
    // ***** BASE NO ARGUMENTS CONSTRUCTOR *****

    // Base b;

    // ***** BASE CONSTRUCTOR *****

    // Base b {10};

    // ***** BASE NO ARGS CONSTRUCTOR - DERIVED NO ARGS CONSTRUCTOR *****

    // Derived d;

    // ***** BASE W ARGS CONSTRUCTOR - DERIVED W ARGS CONSTRUCTOR *****

    Derived {10};
}