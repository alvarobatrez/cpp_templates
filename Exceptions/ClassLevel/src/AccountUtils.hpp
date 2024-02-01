#ifndef _ACCOUNT_UTILS_HPP_
#define _ACCOUNT_UTILS_HPP_

#include <vector>
#include "Account.hpp"

void display(const std::vector <Account *> &accounts);
void deposit(std::vector <Account *> &accounts, double amount);
void withdraw(std::vector <Account *> &accounts, double amount);

#endif