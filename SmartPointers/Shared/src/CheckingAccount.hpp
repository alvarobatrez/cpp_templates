#ifndef _CHECKING_ACCOUNT_HPP
#define _CHECKING_ACCOUNT_HPP

#include <iostream>
#include <string>
#include "Account.hpp"

class CheckingAccount : public Account
{
    private:

    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_balance = 0.0;
    static constexpr double per_check_fee = 1.5;

    public:

    CheckingAccount(std::string name = default_name, double balance = default_balance);

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream &os) const override;

    virtual ~CheckingAccount() {}
};

#endif