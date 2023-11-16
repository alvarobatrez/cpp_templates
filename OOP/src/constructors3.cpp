#include <iostream>

using namespace std;

// ***** COPY CONSTRUCTOR *****

class MyClass
{
    private:

    int data;

    public:

    // constructor
    MyClass(int d);

    // copy constructor
    MyClass(const MyClass &source);

    // destructor
    ~MyClass();

    void set_data(int d) { data = d; }

    int get_data() { return data; }
};

MyClass::MyClass(int d)
: data{d}
{
    cout << "Constructor for data " << data << endl;
}

MyClass::MyClass(const MyClass &source)
: data(source.data)
{
    cout << "Copy constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor for data " << data << endl;
}

int main()
{
    MyClass myclass1(10);
    cout << myclass1.get_data() << endl;

    MyClass myclass2 {myclass1};
    myclass2.set_data(-10);
    cout << myclass2.get_data() << endl;
    
    return 0;
}