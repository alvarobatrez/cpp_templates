#include <iostream>

using namespace std;

// ***** SHALLOW / DEEP COPIES *****

class MyClass
{
    private:

    int *data;

    public:

    // constructor
    MyClass(int d);

    // copy constructor
    MyClass(const MyClass &source);

    // destructor
    ~MyClass();

    void set_data(int d)
    {
        *data = d;
    }

    int get_data()
    {
        return *data;
    }
};

MyClass::MyClass(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for " << d << endl;
}

// ***** SHALLOW COPY *****

/* MyClass::MyClass(const MyClass &source)
: data {source.data}
{
    cout << "Shallow copy for " << *data << " created" << endl;
} */

// ***** DEEP COPY *****

MyClass::MyClass(const MyClass &source)
: MyClass {*source.data}
{
    cout << "Deep copy for " << *data << " created" << endl;
}

MyClass::~MyClass()
{
    delete data;
    cout << "Object has been destroyed" << endl;
}

void display_data(MyClass obj)
{
    cout << obj.get_data() << endl;
}

int main()
{
    MyClass obj1 {1};
    display_data(obj1);

    MyClass obj2 {obj1};
    obj2.set_data(2);
    
    return 0;
}