#include <iostream>
#include <vector>
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include "AccountUtils.hpp"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector <Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Paul"});
    accounts.push_back(Account {"George", 2000.0});
    accounts.push_back(Account {"Ringo", 5000.0});

    display(accounts);
    deposit(accounts, 1000.0);
    withdraw(accounts, 2000.0);

    // Savings Accounts
    vector <SavingsAccount> savings_accounts;
    savings_accounts.push_back(SavingsAccount {});
    savings_accounts.push_back(SavingsAccount {"Marge"});
    savings_accounts.push_back(SavingsAccount {"Lisa", 2000.0});
    savings_accounts.push_back(SavingsAccount {"Maggie", 5000.0});

    display(savings_accounts);
    deposit(savings_accounts, 1000.0);
    withdraw(savings_accounts, 2000.0);

    // Checking Accounts
    vector <CheckingAccount> checking_accounts;
    checking_accounts.push_back(CheckingAccount {});
    checking_accounts.push_back(CheckingAccount {"Yoda"});
    checking_accounts.push_back(CheckingAccount {"Arturito", 2000.0});
    checking_accounts.push_back(CheckingAccount {"Luke", 5000.0});

    display(checking_accounts);
    deposit(checking_accounts, 1000.0);
    withdraw(checking_accounts, 2000.0);

    // Trust Accounts
    vector <TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount {});
    trust_accounts.push_back(TrustAccount {"Jose"});
    trust_accounts.push_back(TrustAccount {"Juan", 2000.0});
    trust_accounts.push_back(TrustAccount {"Jaime", 5000.0});

    display(checking_accounts);
    deposit(checking_accounts, 1000.0);
    
    for (int i {0}; i<=5; i++)
    {
        withdraw(trust_accounts, 1000.0);
    }
    
    return 0;
}