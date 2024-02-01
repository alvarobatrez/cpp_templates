#ifndef _FUNDS_EXCEPTION_HPP_
#define _FUNDS_EXCEPTION_HPP_

#include <exception>

class FundsException : std::exception
{
    public:

    FundsException() noexcept = default;
    ~FundsException() = default;

    virtual const char* what() const noexcept
    {
        return "Insufficient funds exception";
    }
};

#endif