// Part 1
#include <iostream>

class Account
{
    // friends are not inherited
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);
    
    public:
    
    virtual void withdraw()
    {
        std::cout << "Account::withdraw\n";
    }

    virtual ~Account() {}
};

std::ostream &operator<<(std::ostream &os, const Account &acc)
{
    os << "Account";
    return os;
}

class Checking : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc);
    
    public:
    
    virtual void withdraw()
    {
        std::cout << "Checking::withdraw\n";
    }

    virtual ~Checking() {}
};

std::ostream &operator<<(std::ostream &os, const Checking &acc)
{
    os << "Checking";
    return os;
}

class Savings : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc);
    
    public:
    
    virtual void withdraw()
    {
        std::cout << "Savings::withdraw\n";
    }

    virtual ~Savings() {}
};

std::ostream &operator<<(std::ostream &os, const Savings &acc)
{
    os << "Savings";
    return os;
}

class Trust : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc);
    
    public:
    
    virtual void withdraw()
    {
        std::cout << "Trust::withdraw\n";
    }

    virtual ~Trust() {}
};

std::ostream &operator<<(std::ostream &os, const Trust &acc)
{
    os << "Trust";
    return os;
}

int main()
{
    // Account a;
    // std::cout << a << std::endl;

    // Checking c;
    // std::cout << c << std::endl;

    // Savings s;
    // std::cout << s << std::endl;

    // Trust t;
    // std::cout << t << std::endl;

    Account *p1 = new Account();
    std::cout << *p1 << std::endl;

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;

    Account *p3 = new Savings();
    std::cout << *p3 << std::endl;

    Account *p4 = new Trust();
    std::cout << *p4 << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}