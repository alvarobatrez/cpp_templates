#include <iostream>

// ***** IF - ELSE *****

int main()
{
    char sex;
    unsigned short age;

    std::cout << "Are you male or female? (m/f) ";
    std::cin >> sex;

    if (sex == 'f' || sex == 'F')
    {
        std::cout << "How old are you? ";
        std::cin >> age;

        if (age >= 10 && age <= 12)
        {
            std::cout << "Welcome! You're elegible to play with us." << std::endl;
        }
        else
        {
            std::cout << "Sorry, this team is just for girls between 10 and 12." << std::endl;
        }
    }
    else
    {
        std::cout << "This team is just for girls." << std::endl;
    }
    
    return 0;
}