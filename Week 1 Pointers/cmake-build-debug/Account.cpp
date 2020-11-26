#include <iostream>
#include "Account.h"

Account :: Account() {}

Account :: Account(double iniBalance) : accountBalance(iniBalance)
{
    if (iniBalance < 0)
    {
        accountBalance = 0;
        cout << "Initial Balance invalid. Balance set to 0." << endl;
    }
}

void Account :: debit(double debitAmt)
{
    if (debitAmt < accountBalance)
    {
        accountBalance -= debitAmt;
    }
}

void Account :: credit(double creditAmt)
{
    accountBalance += creditAmt;
}

double Account :: getBalance()
{
    cout << "Current balance is: " << accountBalance << endl;
    return accountBalance;
}

