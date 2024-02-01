#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <iostream>
#include <string>
#include "InterfacePrint.hpp"

class Account : public InterfacePrint
{
    private:

    static constexpr const char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;

    protected:

    std::string name;
    double balance;

    public:

    Account(std::string name = default_name, double balance = default_balance);
    
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;

    virtual void print(std::ostream &os) const override;

    virtual ~Account() {}
};

#endif