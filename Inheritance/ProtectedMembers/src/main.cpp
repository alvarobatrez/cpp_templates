#include <iostream>

using namespace std;

class Base
{
    public:

    int a {0};
    void display()
    {
        cout << a << ", " << b << ", " << c << endl;
    }

    protected:

    int b {0};

    private:

    int c {0};
};

class Derived : public Base
{
    public:

    void access_base_members()
    {
        a = 100;
        b = 200;
        // c = 300; not accesible
    }
};

int main()
{
    Base base;

    base.a = 1;
    // base.b = 2; not accesible
    // base.c = 3; not accesible

    Derived derived;

    derived.a = 1000;
    // derived.b = 2000; not accesible
    // derived.c = 3000; not accesible

    return 0;
}