#include <iostream>

class BankAccount
{
    // ***** PRIVATE *****

    private:

    float balance {1000.0};
    
    // ***** PUBLIC *****

    public:

    std::string name;
    unsigned int accountNumber;

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdrawal(float amount)
    {
        balance -= amount;
    }

    float get_balance()
    {
        return balance;
    }
};

int main()
{
    BankAccount bbva;
    bbva.name = "Alvaro";
    bbva.accountNumber = 27031988;
    
    bbva.deposit(50.0);
    bbva.deposit(10.0);
    bbva.withdrawal(20.0);

    std::cout << bbva.name << std::endl;
    std::cout << bbva.accountNumber << std::endl;
    // std::cout << bbva.balance << std::endl; not accesible
    std::cout << bbva.get_balance() << std::endl;
    
    return 0;
}