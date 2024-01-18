#ifndef _TRUST_ACCOUNT_HPP_
#define _TRUST_ACCOUNT_HPP_

#include "SavingsAccount.hpp"

class TrustAccount : public SavingsAccount
{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);

    private:

    static constexpr const char *default_name = "Unnamed Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_num_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;

    protected:
    
    int num_withdrawals;

    public:

    TrustAccount(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest_rate);

    bool deposit(double amount);
    bool withdraw(double amount);

    ~TrustAccount() {}
};

#endif