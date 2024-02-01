#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate)
: Account {name, balance}, interest_rate{interest_rate} {}

bool SavingsAccount::deposit(double amount)
{
    amount += amount * (interest_rate/100);
    return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount)
{
    return Account::withdraw(amount);
}

void SavingsAccount::print(std::ostream &os) const
{
    os << "[Savings Account: " << name << ": " << balance << "]";
}