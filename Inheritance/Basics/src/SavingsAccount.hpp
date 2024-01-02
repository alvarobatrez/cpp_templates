#ifndef _SAVINGSACCOUNT_HPP_
#define _SAVINGSACCOUNT_HPP_

#include "BankAccount.hpp"

class SavingsAccount : public BankAccount
{
    public:

    SavingsAccount();
    ~SavingsAccount();

    void deposit(double amount);
    void withdrawal(double amount);
};

#endif