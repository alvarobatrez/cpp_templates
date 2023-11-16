#include <iostream>

// ***** DO - WHILE *****

int main()
{
    std::string password {"5555"};
    std::string pass {};

    do
    {
        std::cout << "Enter your password: ";
        std::cin >> pass;
    } while (pass != password);

    std::cout << "Password is correct\n";    
}