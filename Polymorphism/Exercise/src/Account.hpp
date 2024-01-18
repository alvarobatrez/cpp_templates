#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <iostream>
#include <string>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);

    private:

    static constexpr const char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;

    protected:

    std::string name;
    double balance;

    public:

    Account(std::string name = default_name, double balance = default_balance);
    
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};

#endif