#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
    private:

    int *data;

    public:

    // constructor
    MyClass(int d);

    // copy constructor
    MyClass(const MyClass &source);

    // move constructor
    MyClass(MyClass &&source) noexcept;

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

MyClass::MyClass(const MyClass &source)
: MyClass {*source.data}
{
    cout << "Copy for " << *data << " created" << endl;
}

// ***** MOVE CONSTRUCTOR *****

MyClass::MyClass(MyClass &&source) noexcept
: data {source.data}
{
    source.data = nullptr;
    cout << "Moving source " << *data << endl;
}

MyClass::~MyClass()
{
    if (data != nullptr)
    {
        cout << "Destructor freeing data for " << *data << endl;
    }
    else
    {
        cout << "Destructor freeing data for nullptr" << endl;
    }

    delete data;
}

int main()
{
    vector <MyClass> vec;

    vec.push_back(MyClass {1});
    vec.push_back(MyClass {2});
    vec.push_back(MyClass {3});
    vec.push_back(MyClass {4});
    vec.push_back(MyClass {5});
    
    return 0;
}