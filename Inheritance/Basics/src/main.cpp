#include <iostream>
#include "BankAccount.hpp"
#include "SavingsAccount.hpp"

using namespace std;

int main()
{
    // ***** BankAccount Class *****

    BankAccount ba {};
    ba.deposit(100.0);
    ba.withdrawal(200.0);

    cout << endl;

    BankAccount *ba_ptr {nullptr};
    ba_ptr = new BankAccount();
    ba_ptr->deposit(300.0);
    ba_ptr->withdrawal(400.0);
    delete ba_ptr;

    cout << endl;

    // ***** SavingsAccount Class *****

    SavingsAccount sa {};
    sa.deposit(500.0);
    sa.withdrawal(600.0);

    cout << endl;

    SavingsAccount *sa_ptr {};
    sa_ptr = new SavingsAccount();
    sa_ptr->deposit(700);
    sa_ptr->withdrawal(800);

    return 0;
}