#include "InterfacePrint.hpp"

std::ostream &operator<<(std::ostream &os, const InterfacePrint &obj)
{
    obj.print(os);
    return os;
}