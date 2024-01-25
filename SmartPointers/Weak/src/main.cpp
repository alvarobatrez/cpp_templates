#include <iostream>
#include <memory>

class B;

class A
{
    private:

    std::shared_ptr<B> b_ptr;

    public:

    A() { std::cout << "A constructor" << std::endl; }
    ~A() { std::cout << "A destructor" << std::endl; }
    void setB(std::shared_ptr<B> &b) { b_ptr = b; }
};

class B
{
    private:

    std::weak_ptr<A> a_ptr;

    public:

    B() { std::cout << "B constructor" << std::endl; }
    ~B() { std::cout << "B destructor" << std::endl; }
    void setA(std::shared_ptr<A> &a) { a_ptr = a; }
};

int main()
{
    std::shared_ptr<A> a {std::make_shared<A>()};
    std::shared_ptr<B> b {std::make_shared<B>()};

    a->setB(b);
    b->setA(a);
}