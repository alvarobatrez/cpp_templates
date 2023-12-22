#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <cstring>

class MyString
{
    private:

    char *str; // C-style

    public:

    // ***** NO ARGUMENTS CONSTRUCTOR *****

    MyString();

    // ***** OVERLOADED CONSTRUCTOR *****

    MyString(const char *s);

    // ***** COPY CONSTRUCTOR *****

    MyString(const MyString &source);

    // ***** DESTRUCTOR *****

    ~MyString();

    // ***** COPY ASSIGNMENT *****

    MyString &operator=(const MyString &rhs);

    size_t get_length() const;
    const char *get_string() const;
    void display() const;
};

#endif