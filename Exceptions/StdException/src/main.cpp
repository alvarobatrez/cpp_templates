#include <iostream>
#include <memory>
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include "AccountUtils.hpp"

#include "BalanceException.hpp"
#include "FundsException.hpp"

using namespace std;

int main()
{
    // ***** STD::EXCEPTION *****
    
    try
    {
        unique_ptr<Account> account {make_unique<CheckingAccount>("Alvaro", 100.0)};
        cout << *account << endl;
        account->withdraw(50.00);
        cout << *account << endl;
        account->withdraw(50.00);
        cout << *account << endl;
    }
    catch(const BalanceException &e)
    {
        cerr << e.what() << '\n';
    }
    catch(const FundsException &e)
    {
        cerr << e.what() << '\n';
    }
    
    cout << "Program completed successfully\n";
    
    return 0;
}