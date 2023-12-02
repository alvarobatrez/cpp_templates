#include <iostream>

using namespace std;

// ***** CONSTANT CLASS *****

class BankAccount
{
    private:

    string userName;
    unsigned int accountNumber;

    public:

    BankAccount(string name = "", unsigned int number = 0);

    ~BankAccount() {};

    // constant
    string get_name() const;
    unsigned int get_number() const;
};

BankAccount::BankAccount(string name, unsigned int number)
: userName {name}, accountNumber {number} {}

// ***** Constant Method *****
string BankAccount::get_name() const
{
    return userName;
}

unsigned int BankAccount::get_number() const
{
    return accountNumber;
}

int main()
{
    const BankAccount bbva("Alvaro", 27031988); // constant
    cout << bbva.get_name() << endl;
    cout << bbva.get_number() << endl;
    
    return 0;
}