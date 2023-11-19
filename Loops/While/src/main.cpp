#include <iostream>
#include <vector>

using namespace std;

// ***** WHILE *****

int main()
{
    int min {1};
    int max {100};
    int guess {rand() % max - min};
    int tries {6};
    int num;

    cout << "Guess the number between 1 and 100. You have 6 chances." << endl;
    cout << "Enter the number: ";
    cin >> num;

    while (num != guess && tries > 1)
    {
        if (num < 1 || num > 100)
        {
            cout << "Invalid number" << endl;
            cout << "Enter the number: ";
            cin >> num;
            continue;
        }

        tries = tries - 1;

        if (num < guess) { cout << "Too low. "; }
        
        if (num > guess) { cout << "Too high. "; }

        cout << "That's not the answer. You have " << tries << " chances more." << endl;
        cout << "Enter the number: ";
        cin >> num;
    }

    if (num == guess)
    {
        cout << "You found the secret number!" << endl;
    }
    else
    {
        cout << "You lost! The secret number was " << guess << endl;
    }
    
    return 0;
}