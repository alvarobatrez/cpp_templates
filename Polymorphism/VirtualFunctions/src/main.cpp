#include <iostream>
#include <vector>

using namespace std;

class Account
{
    public:

    // ***** VIRTUAL FUNCTIONS *****

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

int main()
{
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();

    cout << "Pointers\n";
    p1->display();
    p2->display();
    p3->display();
    p4->display();

    Account *arr[] {p1, p3, p2, p4};

    cout << "\nArray\n";
    for (int i {0}; i < 4; i++)
    {
        arr[i]->display();
    }

    vector <Account *> vec {p4, p3, p2, p1};

    cout << "\nVector\n";
    for (auto v : vec)
    {
        v->display();
    }

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}