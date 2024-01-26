#include <iostream>
#include <memory>

class MyClass
{
    private:

    int data;

    public:

    MyClass() : data {0} { std::cout << "Constructor for " << data << std::endl; }
    MyClass(int num) : data {num} { std::cout << "Constructor for " << data << std::endl; }
    ~MyClass() { std::cout << "Destructor for " << data << std::endl; }
};

void deleter(MyClass *ptr)
{
    std::cout << "Custom function deleter\n";
    delete ptr;
}

int main()
{
    // ***** CUSTOM FUNCTION DELETER *****

    std::shared_ptr<MyClass> p1 {new MyClass(100), deleter};

    // ***** CUSTOM LAMBDA EXPRESSION DELETER *****

    std::shared_ptr<MyClass> p2 (new MyClass(5), [] (MyClass *ptr)
    {
        std::cout << "Custom lambda expression deleter\n";
        delete ptr;
    });
    
    return 0;
}