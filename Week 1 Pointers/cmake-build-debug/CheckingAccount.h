#ifndef WEEK_1_CHECKINGACCOUNT_H
#define WEEK_1_CHECKINGACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class CheckingAccount : public Account
{
public:
    CheckingAccount();
    CheckingAccount(double, double);
    virtual double credit(double);
    virtual double debit(double);
    string getType();

private:
    double feePerTransaction;
};


#endif //WEEK_1_CHECKINGACCOUNT_H
