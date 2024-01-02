#ifndef _BANKACCOUNT_HPP_
#define _BANKACCOUNT_HPP_

class BankAccount
{
    public:
    
    BankAccount();
    ~BankAccount();
    void deposit(double amount);
    void withdrawal(double amount);
};

#endif