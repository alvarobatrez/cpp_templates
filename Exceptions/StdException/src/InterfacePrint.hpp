#ifndef _INTERFACEPRINT_HPP
#define _INTERFACEPRINT_HPP

#include <iostream>

class InterfacePrint
{
    friend std::ostream &operator<<(std::ostream &os, const InterfacePrint &account);

    public:

    virtual void print(std::ostream &os) const = 0;
    virtual ~InterfacePrint() {}
};

#endif