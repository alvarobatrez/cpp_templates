#include <iostream>
#include "AccountUtils.hpp"

void display(const std::vector <Account> &accounts)
{
    std::cout << "\n***** Accounts *****\n";
    for (const auto &acc: accounts)
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <Account> &accounts, double amount)
{
    std::cout << "\n***** Depositing to Accounts *****\n";
    for (auto &acc: accounts)
    {
        if (acc.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <Account> &accounts, double amount)
{
    std::cout << "\n***** Withdrawing from Accounts *****\n";
    for (auto &acc: accounts)
    {
        if (acc.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}

void display(const std::vector <SavingsAccount> &accounts)
{
    std::cout << "\n***** Savings Accounts *****\n";
    for (const auto &acc: accounts)
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector <SavingsAccount> &accounts, double amount)
{
    std::cout << "\n***** Depositing to Savings Accounts *****\n";
    for (auto &acc: accounts)
    {
        if (acc.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to" << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
    }
}

void withdraw(std::vector <SavingsAccount> &accounts, double amount)
{
    std::cout << "\n***** Withdrawing from Savings Accounts *****\n";
    for (auto &acc: accounts)
    {
        if (acc.withdraw(amount))
        {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
        }
    }
}