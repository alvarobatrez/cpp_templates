#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <cstring>

class MyString
{
    // ***** MAKE LOWERCASE *****

    friend MyString operator-(const MyString &obj);

    // ***** CONCATENATE *****

    friend MyString operator+(const MyString &lhs, const MyString &rhs);

    // ***** EQUAL *****

    friend bool operator==(const MyString &lhs, const MyString &rhs);
    
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

    size_t get_length() const;
    const char *get_string() const;
    void display() const;
};

#endif