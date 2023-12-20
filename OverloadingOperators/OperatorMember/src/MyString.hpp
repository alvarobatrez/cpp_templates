#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <cstring>

class MyString
{
    private:

    char *str; // C-style string

    public:

    // ***** NO ARGUMENTS CONSTRUCTOR *****

    MyString();

    // ***** OVERLOADED CONSTRUCTOR *****

    MyString(const char *s);

    // ***** COPY CONSTRUCTOR *****

    MyString(const MyString &source);

    // ***** MOVE CONSTRUCTOR *****

    MyString(MyString &&source);

    // ***** DESTRUCTOR *****

    ~MyString();

    // ***** COPY ASSIGNMENT *****

    MyString &operator=(const MyString &rhs);

    // ***** MOVE ASSIGNMENT *****

    MyString &operator=(MyString &&rhs);

    // ***** - MAKE LOWERCASE *****

    MyString operator-() const;

    // ***** + CONCATENATE *****

    MyString operator+(const MyString &rhs) const;

    // ***** == EQUAL *****

    bool operator==(const MyString &rhs) const;

    size_t get_length() const;
    const char *get_string() const;
    void display() const;
};

#endif