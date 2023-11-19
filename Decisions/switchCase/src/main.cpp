#include <iostream>

using namespace std;

int main()
{    
    cout << "Enter your test score: ";
    int score;
    cin >> score;

    // ***** SWITCH *****

    switch (score) // only int or char
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "You failed the test! You need to retake the course again." << endl;
            break;
        case 7:
            cout << "You passed the test, but you need to make a final projects." << endl;
            break;
        case 8:
        case 9:
        case 10:
            cout << "Congratulations! You passed the course." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    cout << endl;

    // ***** ENUM *****

    enum Streetlight {red, yellow, green};

    Streetlight color(yellow);

    switch (color)
    {
        case red:
            cout << "You can't move." << endl;
            break;
        case yellow:
            cout << "Press the brake." << endl;
            break;
        case green:
            cout << "Move forward." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    
    return 0;
}