#include <iostream>
#include "BankAccount.hpp"

BankAccount::BankAccount() {}

BankAccount::~BankAccount() {};

void BankAccount::deposit(double amount)
{
    std::cout << "Bank account deposit: " << amount << std::endl;
}

void BankAccount::withdrawal(double amount)
{
    std::cout << "Bank account withdrawal: " << amount << std::endl;
}