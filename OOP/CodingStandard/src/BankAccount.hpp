#ifndef _BANKACCOUNT_HPP_
#define _BANKACCOUNT_HPP_

#include <string>
#include <vector>

// ***** HPP FILE *****

class BankAccount
{
    private:

    std::string name {};
    std::string account {};
    double balance {};

    public:

    void set_info(std::string, std::string);
    std::vector <std::string> get_info();
    void deposit(double);
    bool withdrawal(double);
    double get_balance();
};

# endif