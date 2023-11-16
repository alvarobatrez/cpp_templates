#include <iostream>

using namespace std;

class BankAccount
{
    public:

    // ***** CONSTRUCTOR *****

    BankAccount(string name, unsigned int number)
    {
        user_name = name;
        account_number = number;

        display_name();
    }

    // ***** OVERLOADING CONSTRUCTORS *****

    BankAccount(string name)
    {
        user_name = name;
        account_number = 0;

        display_name();
    }

    // **** DESTRUCTOR *****

    ~BankAccount() // optional
    {
        cout << "BankAccount " << user_name << " has been destroyed" << endl;
    }

    void display_name()
    {
        cout << "BankAccount " << user_name << " has been created" << endl;
    }

    private:

    string user_name;
    unsigned int account_number;
};

int main()
{
    BankAccount bbva("Alvaro", 27031988);
    BankAccount santander("Octavio");

    // ***** POINTER CONSTRUCTOR *****

    BankAccount *hsbc {nullptr};
    hsbc = new BankAccount("Berenice", 8112023);
    delete hsbc;

    return 0;
}