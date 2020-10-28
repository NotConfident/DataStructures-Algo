#include <iostream>
#include "SavingsAccount.h"

SavingsAccount :: SavingsAccount() {}

SavingsAccount :: SavingsAccount(double accBalance, double iniInterestRate)
{

    Account* aPtr = dynamic_cast<Account*>(this);
    aPtr->credit(accBalance);
    interestRate = iniInterestRate;
}

double SavingsAccount :: calculateInterest()
{
    double accountBalance = getBalance();
    cout << "Interest Credited: " << ((interestRate * accountBalance) - accountBalance) << endl;
    return (interestRate * accountBalance) - accountBalance;
};

string SavingsAccount :: getType()
{
    return typeid(this).name();
}
