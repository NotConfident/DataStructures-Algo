#ifndef WEEK_1_SAVINGSACCOUNT_H
#define WEEK_1_SAVINGSACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class SavingsAccount : public Account
{
public:
    SavingsAccount();
    SavingsAccount(double, double);
    double calculateInterest();
    string getType();

private:
    double interestRate;

};

#endif //WEEK_1_SAVINGSACCOUNT_H
