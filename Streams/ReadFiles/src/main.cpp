#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::ifstream file;
    std::string name;
    int year;
    double height;

    // ***** READ FILE - FORMATTED INPUT *****

    file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\text.txt");

    if (!file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    file >> name >> year >> height;

    std::cout << "Name: " << name << "\t";
    std::cout << "Year: " << year << "\t";
    std::cout << "Height: " << height << std::endl;

    file.close();

    std::cout << std::endl;

    // ***** READ LINES - FORMATTED INPUT *****

    file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\text.txt");

    if (!file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    while (!file.eof())
    {
        file >> name >> year >> height;

        std::cout << "Name: " << name << "\t";
        std::cout << "Year: " << year << "\t";
        std::cout << "Height: " << height << std::endl;
    }

    file.close();

    std::cout << std::endl;

    // ***** READ FILE - UNFORMATTED INPUT *****

    file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");

    if (!file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    char c;
    while (file.get(c))
    {
        std::cout << c;
    }
    std::cout << std::endl;

    file.close();

    std::cout << std::endl;

    // ***** READ LINES - UNFORMATTED INPUT *****

    file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");

    if (!file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    std::string line;

    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();
    
    return 0;
}