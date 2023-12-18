#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <cstring>

class MyString
{
    private:

    char *str; // C-style string

    public:

    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();

    // ***** COPY ASSINGMENT *****

    MyString &operator=(const MyString &rhs);

    size_t get_length() const;
    const char *get_string() const;
    void display() const;
};

#endif