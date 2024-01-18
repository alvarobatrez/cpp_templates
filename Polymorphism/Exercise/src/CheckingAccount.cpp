#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(std::string name, double balance)
: Account {name, balance} {}

bool CheckingAccount::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account)
{
    os << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return os;
}