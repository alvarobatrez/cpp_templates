#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <cstring>
#include <ostream>
#include <istream>

class MyString
{
    // ***** OVERLOAD STREAM EXTRACTION AND INSERTION OPERATORS*****

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &os, MyString &rhs);
    
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

    // ***** MAKE LOWERCASE *****

    MyString operator-() const;

    // ***** CONCATENATE *****

    MyString operator+(const MyString &rhs) const;

    // ***** EQUAL *****

    bool operator==(const MyString &rhs) const;

    size_t get_length() const;
    const char *get_string() const;
    void display() const;
};

#endif