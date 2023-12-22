#include "MyString.hpp"
#include <iostream>

MyString::MyString()
: str {nullptr}
{
    std::cout << "no arguments constructor" << std::endl;
    str = new char [1];
    *str = '\0';
}

MyString::MyString(const char *s)
: str {nullptr}
{
    std::cout << "overloaded constructor" << std::endl;
    if (s == nullptr)
    {
        str = new char [1];
        *str = '\0';
    }
    else
    {
        str = new char [std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::MyString(const MyString &source)
: str {nullptr}
{
    std::cout << "copy constructor" << std::endl;
    str = new char [std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

MyString::~MyString()
{
    std::cout << "destructor: " << str <<std::endl;
    delete [] str;
}

size_t MyString::get_length() const
{
    return std::strlen(str);
}

const char *MyString::get_string() const
{
    return str;
}

void MyString::display() const
{
    std::cout << "string = " << str << ", length = " << get_length() << std::endl;
}