#ifndef WEEK_1_ACCOUNT_H
#define WEEK_1_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:

    Account();
    Account(double);
    void credit(double);
    void debit(double);
    double getBalance();
    virtual string getType() = 0;

private:
    double accountBalance;
};


#endif //WEEK_1_ACCOUNT_H
