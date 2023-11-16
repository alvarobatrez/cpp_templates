#ifndef _BANKACCOUNT_HPP_
#define _BANKACCOUNT_HPP_

#include <string>
#include <vector>

class BankAccount
{
    public:

    void set_info(std::string name, std::string account_number);
    std::vector<std::string> get_info();
    void deposit(double amount);
    bool withdrawal(double amount);
    double get_balance();

    private:

    std::string name {};
    std::string accountNumber {};
    double balance {};
};

#endif