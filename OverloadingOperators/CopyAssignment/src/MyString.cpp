#include <iostream>
#include "MyString.hpp"

MyString::MyString() // no arguments constructor
: str {nullptr}
{
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s) // overloaded constructor
: str {nullptr}
{
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
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

MyString::~MyString() // destructor
{
    delete [] str;
}

MyString &MyString::operator=(const MyString &rhs) // copy assignment
{
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