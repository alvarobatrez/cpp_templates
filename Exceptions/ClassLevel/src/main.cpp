#include <iostream>
#include <memory>
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include "TrustAccount.hpp"
#include "AccountUtils.hpp"

#include "BalanceException.hpp"

using namespace std;

int main()
{
    // ***** CLASS LEVEL EXCEPTION *****
    
    try
    {
        unique_ptr<Account> account {make_unique<CheckingAccount>("Alvaro", -100.0)};
        cout << *account << endl;
    }
    catch(const BalanceException &e)
    {
        std::cerr << "Negative balance exception\n";
    }

    cout << "Program completed successfully\n";
    return 0;
}