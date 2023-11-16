#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main()
{
    BankAccount bbva;
    string name;
    string account_number;
    bool selection = true;
    short choice;
    double amount;

    cout << "Welcome to BBVA" << endl;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter your account number: ";
    cin >> account_number;

    bbva.set_info(name, account_number);

    cout << "\nHello " << name << ", your balance in your account " << account_number << " is $" << bbva.get_balance();
    
    while (selection == true)
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
                selection = false;
                break;
            default:
                cout << "\nInvalid selection";
                break;
        }
    }

    cout << endl;
    
    return 0;
}