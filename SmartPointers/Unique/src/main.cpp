#include <iostream>
#include <memory>
#include <vector>

#include "Account.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include "SavingsAccount.hpp"

class Class
{
    private:

    int data;

    public:

    Class() : data {0}
    {
        std::cout << "Constructor for " << data << std::endl;
    }

    Class(int num) : data {num}
    {
        std::cout << "Constructor for " << data << std::endl;
    }

    ~Class()
    {
        std::cout << "Destructor for " << data << std::endl;
    }
};

int main()
{
    // Class *p = new Class(1);
    // delete p;

    // ***** UNIQUE POINTERS *****

    std::unique_ptr<Class> p1 {new Class(1)};

    std::unique_ptr<Class> p2 = std::make_unique<Class>(2);

    std::unique_ptr<Class> p3;
    p3 = std::move(p1); // p3 = p1;

    std::unique_ptr<Account> a = std::make_unique<CheckingAccount>("Alvaro", 500.0);

    std::cout << *a << std::endl;
    a->deposit(50);
    std::cout << *a << std::endl;

    std::vector <std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<CheckingAccount>("Alvaro", 500.0));
    accounts.push_back(std::make_unique<SavingsAccount>("Berenice", 200.0, 1.0));
    accounts.push_back(std::make_unique<TrustAccount>("Carlos", 100.0, 5.0));

    for(const auto &acc: accounts)
    {
        std::cout << *acc << std::endl;
    }
    
    return 0;
}