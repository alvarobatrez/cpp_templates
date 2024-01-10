#include <iostream>
#include <memory>

using namespace std;

class Base
{
    public:

    void disp_type() const
    {
        cout << "base object\n";
    }
};

class Derived : public Base
{
    public:

    void disp_type() const
    {
        cout << "derived object\n";
    }
};

// ***** STATIC BINDING *****

void hello(const Base &obj)
{
    cout << "Hello ";
    obj.disp_type();
}

int main()
{
    Base b;
    b.disp_type();

    Derived d;
    d.disp_type();

    hello(b);
    hello(d);

    Base *ptr = new Derived(); // Derive is a Base object
    ptr->disp_type();

    unique_ptr <Base> ptr1 = std::make_unique <Derived> (); // Smart pointer
    ptr1->disp_type();

    delete ptr;
    
    return 0;
}