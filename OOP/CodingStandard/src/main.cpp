#include <iostream>
#include <iomanip>
#include "BankAccount.hpp"

using namespace std;

// ***** MAIN FILE *****

int main()
{
    BankAccount bbva;
    string name;
    string account;
    bool exit {false};
    int choice;
    double amount;

    cout << fixed << setprecision(2);

    cout << "Welcome to BBVA" << endl;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter your account number: ";
    cin >> account;

    bbva.set_info(name, account);

    cout << "\nHello " << bbva.get_info().at(0)
        << ", the balance in your account " << bbva.get_info().at(1)
        << " is $" << bbva.get_balance();

    while (exit == false)
    {
        cout << "\n\nSelect one choice:\n1. Deposit\n2. Withdrawal\n3. Exit";
        cout << "\nSelection: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the amount: $";
                cin >> amount;
                bbva.deposit(amount);
                cout << "\nYour new balance is $" << bbva.get_balance();
                break;
            case 2:
                cout << "Enter the amount: $";
                cin >> amount;
                if (bbva.withdrawal(amount) == true)
                {
                    cout << "\nYour new balance is $" << bbva.get_balance();
                }
                else
                {
                    cout << "\nInsufficient funds";
                    cout << "\nYour balance is $" << bbva.get_balance();
                }
                break;
            case 3:
                cout << "\nGood bye";
                exit = true;
                break;
            default:
                cout << "\nInvalid selection";
                break;
        }
    }

    cout << "\n";
    
    return 0;
}