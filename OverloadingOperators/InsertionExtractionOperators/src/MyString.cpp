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

MyString::MyString(MyString &&source)
: str {source.str}
{
    std::cout << "move constructor" << std::endl;
    source.str = nullptr;
}

MyString::~MyString()
{
    std::cout << "destructor: " << &str << std::endl;
    delete [] str;
}

MyString &MyString::operator=(const MyString &rhs)
{
    std::cout << "copy assignment" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = new char [std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

MyString &MyString::operator=(MyString &&rhs)
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

MyString MyString::operator-() const
{
    std::cout << "make lowercase" << std::endl;
    char *buff = new char [std::strlen(str) + 1];
    std::strcpy(buff, str);

    for (size_t i {}; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    MyString aux {buff};
    delete [] buff;
    return aux;
}

MyString MyString::operator+(const MyString &rhs) const
{
    std::cout << "concatenate" << std::endl;
    char *buff = new char [std::strlen(str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    MyString aux {buff};
    delete [] buff;
    return aux;
}

bool MyString::operator==(const MyString &rhs) const
{
    std::cout << "equal" << std::endl;
    return (std::strcmp(str, rhs.str) == 0);
}

std::ostream &operator<<(std::ostream &os, const MyString &rhs) // insertion operator
{
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &in, MyString &rhs) // extraction operator
{
    char *buff = new char[1000];
    in >> buff;

    rhs = MyString {buff};
    delete [] buff;
    return in;
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