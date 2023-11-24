#include <iostream>

using namespace std;

// ***** COPY CONSTRUCTOR *****

class BankAccount
{
    private:

    string name;
    unsigned int number;

    public:

    // constructor
    BankAccount(string, unsigned int);

    // copy constructor
    BankAccount(const BankAccount &source);

    // destructor
    ~BankAccount();
};

BankAccount::BankAccount(string user_name = "", unsigned int account_number = 0)
: name {user_name}, number {account_number}
{
    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
}

BankAccount::BankAccount(const BankAccount &source)
// : name {source.name}, number {source.number} // initialization
: BankAccount {source.name, source.number} // delegate constructor
{
    cout << "Copy constructor for: " << source.name <<endl;
}

BankAccount::~BankAccount()
{
    cout << "BankAccount " << name << " has been destroyed" << endl;
}

int main()
{
    BankAccount bbva("Alvaro", 27031988);

    BankAccount copy {bbva};
    
    return 0;
}