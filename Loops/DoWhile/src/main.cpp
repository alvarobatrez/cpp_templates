#include <iostream>

// ***** DO-WHILE *****

int main()
{
    std::string password {"5555"};
    std::string input {};

    do
    {
        std::cout << "Enter your password: ";
        getline(std::cin, input);
    } while (input != password);

    std::cout << "Password is correct!\n";    
    
    return 0;
}