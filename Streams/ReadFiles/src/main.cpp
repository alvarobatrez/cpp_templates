#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::ifstream in_file;
    std::string name;
    int year;
    double height;

    // ***** READ FILE - FORMATTED INPUT *****

    in_file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\text.txt");

    if (!in_file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    in_file >> name >> year >> height;

    std::cout << "Name: " << name << "\t";
    std::cout << "Year: " << year << "\t";
    std::cout << "Height: " << height << std::endl;

    in_file.close();

    std::cout << std::endl;

    // ***** READ LINES - FORMATTED INPUT *****

    in_file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\text.txt");

    if (!in_file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    while (!in_file.eof())
    {
        in_file >> name >> year >> height;

        std::cout << "Name: " << name << "\t";
        std::cout << "Year: " << year << "\t";
        std::cout << "Height: " << height << std::endl;
    }

    in_file.close();

    std::cout << std::endl;

    // ***** READ FILE - UNFORMATTED INPUT *****

    in_file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");

    if (!in_file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    char c;
    while (in_file.get(c))
    {
        std::cout << c;
    }
    std::cout << std::endl;

    in_file.close();

    std::cout << std::endl;

    // ***** READ LINES - UNFORMATTED INPUT *****

    in_file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");

    if (!in_file)
    {
        std::cerr << "File not found";
        std::exit(0);
    }

    std::string line;

    while (std::getline(in_file, line))
    {
        std::cout << line << std::endl;
    }

    in_file.close();
    
    return 0;
}