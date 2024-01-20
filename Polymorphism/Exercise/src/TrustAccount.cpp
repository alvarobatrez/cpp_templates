#include "TrustAccount.hpp"

TrustAccount::TrustAccount(std::string name, double balance, double interest_rate)
: SavingsAccount {name, balance, interest_rate}, num_withdrawals {0} {}

bool TrustAccount::deposit(double amount)
{
    if (amount >= bonus_threshold)
    {
        amount += bonus_amount;
    }
    
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount)
{
    if (num_withdrawals >= max_num_withdrawals || (amount > balance * max_withdraw_percent))
    {
        return false;
    }
    else
    {
        num_withdrawals++;
        return SavingsAccount::withdraw(amount);
    }
}

void TrustAccount::print(std::ostream &os) const
{
    os << "[Trust Account: " << name << ": " << balance << "]";
}