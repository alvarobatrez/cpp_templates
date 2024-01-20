#include <iostream>
#include <vector>
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include "AccountUtils.hpp"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    // Account account{"Alvaro", 1000.0}; // not possible
    // Account *p = new Account(); // not possible

    // Savings Accounts
    Account *homero = new SavingsAccount();
    Account *marge = new SavingsAccount("Marge");
    Account *lisa = new SavingsAccount("Lisa", 2000.0);
    Account *maggie = new SavingsAccount("Maggie", 5000.0);

    vector <Account *> savings_accounts;
    savings_accounts.push_back(homero);
    savings_accounts.push_back(marge);
    savings_accounts.push_back(lisa);
    savings_accounts.push_back(maggie);

    display(savings_accounts);
    deposit(savings_accounts, 1000.0);
    withdraw(savings_accounts, 2000.0);

    // Checking Accounts
    Account *anakin = new CheckingAccount();
    Account *yoda = new CheckingAccount("Yoda");
    Account *arturito = new CheckingAccount("Arturito", 2000.0);
    Account *luke = new CheckingAccount("Luke", 5000.0);
    
    vector <Account *> checking_accounts {anakin, yoda, arturito, luke};

    display(checking_accounts);
    deposit(checking_accounts, 1000.0);
    withdraw(checking_accounts, 2000.0);

    // Trust Accounts
    Account *j = new TrustAccount();
    Account *jose = new TrustAccount("Jose", 2000.0, 2.0);
    Account *juan = new TrustAccount("Juan", 5000.0, 5.0);
    Account *jaime = new TrustAccount("Jaime", 30000.0, 10.0);

    vector <Account *> trust_accounts {j, jose, juan, jaime};

    display(trust_accounts);
    deposit(trust_accounts, 1000.0);
    
    for (int i {0}; i<=4; i++)
    {
        withdraw(trust_accounts, 1000.0);
    }

    delete homero;
    delete marge;
    delete lisa;
    delete maggie;
    delete anakin;
    delete yoda;
    delete arturito;
    delete luke;
    delete j;
    delete jose;
    delete juan;
    delete jaime;
    
    return 0;
}