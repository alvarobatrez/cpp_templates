#include "Account.hpp"

Account::Account(std::string name, double balance)
: name {name}, balance {balance} {}
    
bool Account::deposit(double amount)
{
    if (amount < 0.0)
    {
        return false;
    }
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (amount > balance)
    {
        return false;
    }
    else
    {
        balance -= amount;
        return balance;
    }
}

void Account::print(std::ostream &os) const
{
    os << "[Account: " << name << ": " << balance << "]";
}