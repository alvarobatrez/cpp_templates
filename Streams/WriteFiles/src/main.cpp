#include <iostream>
#include <fstream>

int main()
{
    // ***** WRITE A FILE - OVERWRITE *****
    
    std::ofstream file("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\WriteFiles\\src\\mytext.txt");
    
    if (!file)
    {
        std::cerr << "Error creating the file\n";
        std::exit(0);
    }

    std::string line;
    std::cout << "Enter something to write in the file: ";
    std::getline(std::cin, line);
    
    file << line << std::endl;

    file.close();

    // ***** WRITE A FILE - APPEND NEW LINE *****
    
    file.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\WriteFiles\\src\\mytext.txt", std::ios::app);
    
    if (!file)
    {
        std::cerr << "Error creating the file\n";
        std::exit(0);
    }

    std::cout << "Enter something to write in the file: ";
    std::getline(std::cin, line);
    
    file << line << std::endl;

    file.close();

    // ***** COPY A FILE - LINE BY LINE *****

    std::ifstream original("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");
    std::ofstream copy("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\WriteFiles\\src\\poem-copy-1.txt");

    if (!original)
    {
        std::cerr << "Original file not found";
        std::exit(0);
    }

    if (!copy)
    {
        std::cerr << "Error creating the copy file\n";
        std::exit(0);
    }

    std::string poem_line;
    while (std::getline(original, poem_line))
    {
        copy << poem_line << std::endl;
    }

    original.close();
    copy.close();

    std::cout << "File copied\n";

    // ***** COPY A FILE - CHARACTER BY CHARACTER *****

    original.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\ReadFiles\\src\\poem.txt");
    copy.open("C:\\Users\\alvar\\Documents\\cpp_templates\\Streams\\WriteFiles\\src\\poem-copy-2.txt");

    if (!original)
    {
        std::cerr << "Original file not found";
        std::exit(0);
    }

    if (!copy)
    {
        std::cerr << "Error creating the copy file\n";
        std::exit(0);
    }

    char c;
    while (original.get(c))
    {
        copy.put(c);
    }

    original.close();
    copy.close();

    std::cout << "File copied\n";

    return 0;
}