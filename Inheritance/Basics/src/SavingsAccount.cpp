#include <iostream>
#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount() {}

SavingsAccount::~SavingsAccount() {};

void SavingsAccount::deposit(double amount)
{
    std::cout << "Savings account deposit: " << amount << std::endl;
}

void SavingsAccount::withdrawal(double amount)
{
    std::cout << "Savings account withdrawal: " << amount << std::endl;
}