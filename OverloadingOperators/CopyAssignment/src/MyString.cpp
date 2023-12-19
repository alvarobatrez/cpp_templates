#include <iostream>
#include "MyString.hpp"

MyString::MyString() // no arguments constructor
: str {nullptr}
{
    std::cout << "no arguments contructor" << std::endl;
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s) // overloaded constructor
: str {nullptr}
{
    std::cout << "overloaded contructor" << std::endl;
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::MyString(const MyString &source) // copy constructor
: str {nullptr}
{
    std::cout << "copy contructor" << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

MyString::~MyString() // destructor
{
    std::cout << "destructor" << std::endl;
    delete [] str;
}

MyString &MyString::operator=(const MyString &rhs) // copy assignment
{
    std::cout << "copy assignment" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
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
    std::cout << str << " : " << get_length() << std::endl;
}