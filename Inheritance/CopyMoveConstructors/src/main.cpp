#include <iostream>

using namespace std;

class Base
{
    private:

    int value;

    public:

    Base() : value {0}
    {
        cout << "Base no arguments constructor" << endl;
    }

    Base(int x) : value {x}
    {
        cout << "Base with arguments contructor" << endl;
    }

    // ***** COPY CONSTRUCTOR *****

    Base(const Base &source) : value {source.value}
    {
        cout << "Base copy constructor" << endl;
    }

    Base &operator=(const Base &rhs)
    {
        cout << "Base operator=" << endl;
        if (this == &rhs)
        {
            return *this;
        }
        value = rhs.value;
        return *this;
    }

    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base
{
    private:

    int double_value;

    public:

    Derived() : Base {} // double_value not initialize
    {
        cout << "Derived no arguments constructor" << endl;
    }

    Derived(int v) : Base {v}, double_value{v * 2}
    {
        cout << "Derived with arguments constructor" << endl;
    }

    Derived(const Derived &source)
    : Base(source), double_value {source.double_value}
    {
        cout << "Derived copy constructor" << endl;
    }

    Derived &operator=(const Derived &rhs)
    {
        cout << "Derived operator=" << endl;
        if (this == &rhs)
        {
            return *this;
        }
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this;
    }

    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    /* Base b {100}; // overloaded constructor
    Base b1 {b}; // copy constructor
    Base b2; // constructor
    b2 = b; // copy assignment */

    Derived d {100};
    Derived d1 {d};
    Derived d2;
    d2 = d1;
    
    return 0;
}