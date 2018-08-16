#include <iostream>
#include "Account.hpp"
using namespace std;

void Account::rate(double newRate)
{
    interestRate = newRate;
}

/*double Account::initRate()
{
    interestRate = 2.1;
}*/

//double Account::interestRate = initRate();
double  Account::interestRate = 6.8;
constexpr int Account::period; 

int main()
{
    double r;
    r = Account::rate();
    cout << "r=" << r << endl;

    Account ac1;
    Account* ac2 = &ac1;

    cout << "ac1 rate=" << ac1.rate() << endl;
    cout << "ac2 rate=" << ac2->rate() << endl;

    return 0;
}