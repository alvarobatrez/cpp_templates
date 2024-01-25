#include<iostream>
#include<memory>
#include<vector>

#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"

class MyClass
{
    private:

    int data;

    public:

    MyClass() : data {0} {}
    MyClass(int num) : data {num} {}
    ~MyClass() {}
};

void myfun(std::shared_ptr<MyClass> p)
{
    std::cout << p.use_count() << std::endl;
}

int main()
{
    // ***** SHARED POINTERS *****
    
    std::shared_ptr<int> p1 {new int(3)};
    std::cout << p1.use_count() << std::endl;

    std::shared_ptr<int> p2 {p1}; // shared ownership
    std::cout << p2.use_count() << std::endl;

    std::shared_ptr<int> p3;
    p3 = p2; // copy is allowed

    p1.reset();
    std::cout << p1.use_count() << std::endl;
    std::cout << p2.use_count() << std::endl;

    std::cout << std::endl;

    // make_shared
    std::shared_ptr<MyClass> ptr1 {std::make_shared<MyClass>(10)};
    myfun(ptr1);
    std::cout << ptr1.use_count() << std::endl;
    {
        std::shared_ptr<MyClass> ptr2 {ptr1};
        std::cout << ptr1.use_count() << std::endl;
        {
            std::shared_ptr<MyClass> ptr3 {ptr1};
            std::cout << ptr1.use_count() << std::endl;
            ptr1.reset();
        }
        std::cout << ptr1.use_count() << std::endl;
    }
    std::cout << ptr1.use_count() << std::endl;

    std::cout << std::endl;

    // using vectors
    std::shared_ptr<Account> a1 {std::make_shared<SavingsAccount>("Alvaro", 1000, 1.0)};
    std::shared_ptr<Account> a2 {std::make_shared<CheckingAccount>("Berenice", 500)};
    std::shared_ptr<Account> a3 {std::make_shared<TrustAccount>("Carlos", 250, 4.0)};

    std::vector <std::shared_ptr<Account>> accounts {a1, a2, a3};

    for (const auto &a: accounts)
    {
        std::cout << *a << std::endl;
        std::cout << a.use_count() << std::endl;
    }
    
    return 0;
}