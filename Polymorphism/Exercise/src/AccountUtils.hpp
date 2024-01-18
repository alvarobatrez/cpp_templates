#ifndef _ACCOUNT_UTILS_CPP_
#define _ACCOUNT_UTILS_CPP_

#include <vector>
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"

void display(const std::vector <Account> &accounts);
void deposit(std::vector <Account> &accounts, double amount);
void withdraw(std::vector <Account> &accounts, double amount);

void display(const std::vector <SavingsAccount> &accounts);
void deposit(std::vector <SavingsAccount> &accounts, double amount);
void withdraw(std::vector <SavingsAccount> &accounts, double amount);

void display(const std::vector <CheckingAccount> &accounts);
void deposit(std::vector <CheckingAccount> &accounts, double amount);
void withdraw(std::vector <CheckingAccount> &accounts, double amount);

void display(const std::vector <TrustAccount> &accounts);
void deposit(std::vector <TrustAccount> &accounts, double amount);
void withdraw(std::vector <TrustAccount> &accounts, double amount);

#endif