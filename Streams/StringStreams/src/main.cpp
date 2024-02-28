#include <iomanip>
#include <sstream>
#include <limits>
#include <iostream>

int main()
{
    int kg {};
    double m {};
    std::string name {};

    // ***** ISTRINGSTREAM *****

    std::string info {"Alvaro 1.73 80"};
    std::istringstream iss {info};

    iss >> name >> m >> kg;
    
    std::cout << name << ' ' << m << ' ' << kg << std::endl;

    // ***** OSTRINGSTREAM *****

    std::ostringstream oss {};
    oss << name << ' ' << m << ' ' << kg << std::endl;
    std::cout << oss.str();

    // ***** DATA VALIDATION *****

    int value {};
    std::string input {};
    bool done {false};

    do
    {
        std::cout << "Enter a integer value: ";
        std::cin >> input;
        std::istringstream validator {input};
        if (validator >> value)
        {
            done = true;
        }
        else
        {
            std::cout << "That is not an integer\n";
        }
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (!done);

    std::cout << "You entered an integer value: " << value << std::endl;
    
    return 0;
}