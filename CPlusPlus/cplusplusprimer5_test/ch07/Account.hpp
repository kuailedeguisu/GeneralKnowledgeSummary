#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account
{
public:
    void calculate() { amount += amount * interestRate;}
    static double rate() {return interestRate;}
    static void rate(double);

private:
    std::string owner;
    double amount;
    static double interestRate;
    //static double initRate();
    static constexpr int period = 30;//if static data member will be initialized, you must make it const expression
    double daily_tbl[period];
};

#endif