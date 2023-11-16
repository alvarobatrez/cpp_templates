#include <iostream>
#include <vector>

using namespace std;

// ***** DECLARING A CLASS *****

class BankAccount
{
    public:

    // ***** ATTRIBUTES *****
    string name;
    unsigned int accountNumber;
    double balance;

     // ***** METHODS *****
    void deposit(double amount)
    {
        balance += amount;
    }

    void withdrawal(double amount)
    {
        balance -= amount;
    }
};

int main()
{
    // ***** CREATING AN OBJECT *****
    
    BankAccount bbva;
    auto santander {BankAccount()};

    // using arrays and vectors
    BankAccount accounts_arr[] {bbva, santander};
    vector<BankAccount> accounts_vec {bbva, santander};

    // using pointers
    BankAccount *account_ptr {nullptr};
    account_ptr = new BankAccount;

    // ***** ACCESSING CLASS MEMBERS *****

    bbva.name = "Alvaro";
    bbva.accountNumber = 27031988;
    bbva.balance = 100.0;

    cout << bbva.name << endl;
    cout << bbva.accountNumber << endl;
    cout << bbva.balance << endl;

    bbva.deposit(50.0);
    bbva.deposit(10.0);
    bbva.withdrawal(20.0);
    
    cout << bbva.balance << endl;

    // using pointes
    (*account_ptr).name = "Martha";
    account_ptr->accountNumber = 25061959;
    account_ptr->balance = 300.0;

    cout << account_ptr->name << endl;
    cout << account_ptr->accountNumber << endl;
    cout << account_ptr->balance << endl;

    account_ptr->withdrawal(100.0);
    account_ptr->deposit(25.0);

    cout << account_ptr->balance << endl;

    delete account_ptr;
    
    return 0;
}