#include "BankAccount.hpp"

// ***** METHODS IMPLEMENTATION *****

void BankAccount::set_info(std::string user_name, std::string account_number)
{
    name = user_name;
    account = account_number;
}

std::vector <std::string> BankAccount::get_info()
{
    std::vector <std::string> info {name, account};
    return info;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}

bool BankAccount::withdrawal(double amount)
{
    if (balance - amount >= 0.0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

double BankAccount::get_balance()
{
    return balance;
}