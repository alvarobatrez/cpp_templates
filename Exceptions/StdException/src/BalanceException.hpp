#ifndef _BALANCE_EXCEPTION_HPP_
#define _BALANCE_EXCEPTION_HPP_

#include <exception>

class BalanceException : std::exception
{
    public:

    BalanceException() noexcept = default;
    ~BalanceException() = default;

    virtual const char* what() const noexcept
    {
        return "Negative balance exception";
    }
};

#endif