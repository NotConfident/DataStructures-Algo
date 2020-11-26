#include "CheckingAccount.h"

CheckingAccount :: CheckingAccount() {}

CheckingAccount :: CheckingAccount(double accBalance, double fee)
{
    Account* cPtr = dynamic_cast<Account*>(this);
    cPtr->credit(accBalance);
    feePerTransaction = fee;
}

double CheckingAccount :: credit(double creditAmt)
{
    Account* cPtr = dynamic_cast<Account*>(this);
    cPtr->credit(creditAmt);

}

double CheckingAccount :: debit(double debitAmt)
{
    Account* cPtr = dynamic_cast<Account*>(this);
    cout << "Fees deducted: " << feePerTransaction << endl;
    cPtr->debit(debitAmt + feePerTransaction);
}

string CheckingAccount :: getType()
{
    return typeid(this).name();
}
