// Part 2
#include <iostream>

// ***** INTERFACE AND ABSTRACT CLASS *****

class Interface
{
    friend std::ostream &operator<<(std::ostream &os, const Interface &obj);

    public:

    virtual void print(std::ostream &os) const = 0;
    virtual ~Interface() {}
};

std::ostream &operator<<(std::ostream &os, const Interface &obj)
{
    obj.print(os);
    return os;
}

class Account : public Interface
{
    public:
    
    virtual void withdraw()
    {
        std::cout << "Account::withdraw\n";
    }

    virtual void print(std::ostream &os) const
    {
        os << "Account";
    }

    virtual ~Account() {}
};

class Checking : public Account
{
    public:
    
    virtual void withdraw()
    {
        std::cout << "Checking::withdraw\n";
    }

    virtual void print(std::ostream &os) const
    {
        os << "Checking";
    }

    virtual ~Checking() {}
};

class Savings : public Account
{
    public:
    
    virtual void withdraw()
    {
        std::cout << "Savings::withdraw\n";
    }

    virtual void print(std::ostream &os) const
    {
        os << "Savings";
    }
    
    virtual ~Savings() {}
};

class Trust : public Account
{
    public:
    
    virtual void withdraw()
    {
        std::cout << "Trust::withdraw\n";
    }

    virtual void print(std::ostream &os) const
    {
        os << "Trust";
    }

    virtual ~Trust() {}
};

class Other: public Interface
{
    public:

    virtual void print(std::ostream &os) const
    {
        os << "Other";
    }
};

void print(const Interface &obj)
{
    std::cout << obj << std::endl;
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

    Other *o = new Other();
    std::cout << *o << std::endl;

    print(*o);

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    delete o;
    
    return 0;
}