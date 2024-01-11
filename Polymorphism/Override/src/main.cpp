#include <iostream>

class Base
{
    public:

    virtual void display() const
    {
        std::cout << "Base::display\n";
    }

    virtual ~Base() {}
};

class Derived : public Base
{
    public:

    // ***** USING OVERRIDE SPECIFIER *****

    // virtual void display() // const was forgotten by mistake
    virtual void display() const override // just in case the compiler doesn't show a warning
    {
        std::cout << "Derived::display\n";
    }
};

int main()
{
    Base *ptr1 = new Base();
    ptr1->display();

    Derived *ptr2 = new Derived();
    ptr2->display();

    Base *ptr3 = new Derived();
    ptr3->display();

    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
};