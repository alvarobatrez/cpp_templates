#include <iostream>
#include <vector>

using namespace std;

class Account
{
    public:

    virtual void display()
    {
        cout << "Account::display\n";
    }

    virtual ~Account() {};
};

class Checking : public Account
{
    public:
    virtual void display() // virtual not necessary in derived classes
    {
        cout << "Checking::display\n";
    }

    ~Checking() {}; // not necessary in derived classes
};

class Savings : public Account
{
    public:
    virtual void display() // virtual not necessary in derived classes
    {
        cout << "Savings::display\n";
    }

    ~Savings() {}; // not necessary in derived classes
};

class Trust : public Account
{
    public:
    virtual void display() // virtual not necessary in derived classes
    {
        cout << "Trust::display\n";
    }

    ~Trust() {}; // not necessary in derived classes
};

void show(Account &account)
{
    account.display();
}

int main()
{
    // ***** BASE CLASS REFERENCE *****
    
    Account a;
    Account &refa = a;
    refa.display();

    Trust t;
    Account &reft = t;
    reft.display();

    Account A;
    Savings S;
    Checking C;
    Trust T;

    show(A);
    show(S);
    show(C);
    show(T);

    return 0;
}