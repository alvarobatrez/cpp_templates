#include <iostream>

class BankAccount
{
    // ***** PUBLIC *****

    public:

    std::string name;
    unsigned int accountNumber;    

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdrawal(double amount)
    {
        balance -= amount;
    }

    double get_balance()
    {
        return balance;
    }

    // ***** PRIVATE *****
    
    private:

    double balance {1000.0};
};

int main()
{
    BankAccount bbva;
    bbva.name = "Alvaro";
    bbva.accountNumber = 27031988;
    // bbva.balance // inaccesible
    bbva.deposit(50.0);
    bbva.deposit(10.0);
    bbva.withdrawal(20.0);
    
    std::cout << bbva.name << std::endl;
    std::cout << bbva.accountNumber << std::endl;
    std::cout << bbva.get_balance() << std::endl;

    return 0;
}