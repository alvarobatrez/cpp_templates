#include <iostream>
#include <vector>

using namespace std;

// ***** WHILE *****

int main()
{
    int min_number {1};
    int max_number {100};
    int guess {rand() % max_number + min_number};
    int tries = 6;
    int num;

    guess = 30;

    cout << "Guess the number between 1 and 100. You have 6 chances." << endl;
    cout << "Enter the number: ";
    cin >> num;

    while (num != guess && tries > 1)
    {
        if (num < min_number || num > max_number)
        {
            cout << "Invalid number" << endl;
            cout << "Enter the number: ";
            cin >> num;
            continue;
        }

        tries = tries - 1;

        if (num < guess)
        {
            cout << "Too low. ";
        }
        else
        {
            cout << "Too high. ";
        }

        cout << "That's not the aswer. You have " << tries << " chances more" << endl;
        cout << "Enter the number: ";
        cin >> num;
    }

    if (num == guess)
    {
        cout << "You found the secret number!" << endl;
    }
    else
    {
        cout << "You lost! The secret number was " << num << endl;
    }

    return 0;
}