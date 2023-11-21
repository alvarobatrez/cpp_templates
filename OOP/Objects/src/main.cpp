#include <iostream>
#include <vector>

using namespace std;

// ***** DECLARING A CLASS *****

class BankAccount
{
    public: // default: private

    // ***** ATTRIBUTES *****

    string name;
    unsigned int accountNumber;
    double balance;

    // ***** METHODS *****

    void deposit(double amount)
    {
        balance += amount;
    }

    // prototyping
    void withdrawal(double);
};

// method declaration outside the class
void BankAccount::withdrawal(double amount)
{
    balance -= amount;
}

int main()
{
    // ***** CREATING AN OBJECT

    BankAccount bbva;
    auto santander {BankAccount()};

    // arrays and vectors
    BankAccount accounts_arr[] {bbva, santander};
    vector <BankAccount> accounts_vec {bbva, santander};

    // pointers
    BankAccount *hsbc_ptr {nullptr};
    hsbc_ptr = new BankAccount;
    
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

    cout << bbva.balance << endl << endl;

    // using pointers
    (*hsbc_ptr).name = "Martha";
    hsbc_ptr->accountNumber = 25061959;
    hsbc_ptr->balance = 300.0;

    cout << hsbc_ptr->name << endl;
    cout << hsbc_ptr->accountNumber << endl;
    cout << hsbc_ptr->balance << endl;

    hsbc_ptr->withdrawal(100.0);
    hsbc_ptr->deposit(25.5);

    cout << hsbc_ptr->balance << endl;

    delete hsbc_ptr;
    
    return 0;
}