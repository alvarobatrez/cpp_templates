#include <iostream>

using namespace std;

class BankAccount
{
    private:

    string user_name;
    unsigned int account_number;

    public:

    // ***** CONSTRUCTOR *****

    BankAccount(string name, unsigned int number)
    {
        user_name = name;
        account_number = number;

        cout << "BankAccount " << user_name << " has been created" << endl;
    }

    // ***** OVERLOADING CONSTRUCTORS *****

    BankAccount(string name)
    {
        user_name = name;
        account_number = 0;

        cout << "BankAccount " << user_name << " has been created" << endl;
    }

    // ***** DESTRUCTOR *****

    ~BankAccount() // optional
    {
        cout << "BankAccount " << user_name << " has been destroyed" << endl;
    }
};

int main()
{
    BankAccount bbva("Alvaro", 27031988);
    BankAccount santander("Octavio");

    // ***** POINTER CONSTRUCTOR *****

    BankAccount *hsbc {nullptr};
    hsbc = new BankAccount("Berenice", 21112023);
    delete hsbc;

    return 0;
}