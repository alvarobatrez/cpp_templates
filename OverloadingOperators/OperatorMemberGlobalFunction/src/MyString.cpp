#include <iostream>
#include "MyString.hpp"

MyString::MyString() // no arguments constructor
: str {nullptr}
{
    std::cout << "no arguments constructor" << std::endl;
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s) // overloaded constructor
: str {nullptr}
{
    std::cout << "overloaded constructor" << std::endl;
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
    std::cout << "copy constructor" << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

MyString::MyString(MyString &&source) // move constructor
: str {source.str}
{
    std::cout << "move constructor" << std::endl;
    source.str = nullptr;
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

MyString &MyString::operator=(MyString &&rhs) // move assignment
{
    std::cout << "move assignment" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

MyString operator-(const MyString &obj) // make lowercase
{
    char *buff = new char [std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    
    for (size_t i {}; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};
    delete [] buff;
    return temp;
}

MyString operator+(const MyString &lhs, const MyString &rhs) // concatenate
{
    char *buff = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    MyString temp {buff};
    delete [] buff;
    return temp;
}

bool operator==(const MyString &lhs, const MyString &rhs) // equal
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
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