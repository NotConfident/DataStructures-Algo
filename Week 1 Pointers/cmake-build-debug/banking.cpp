#include <iostream>
#include <string>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <vector>

using namespace std;

int banking()
{
    vector<Account*> accountVector(2);

    SavingsAccount savings(100000.00, 1.5);
    CheckingAccount checking(300000.00, 2.0);

    accountVector[0] = &savings;
    accountVector[1] = &checking;

    for(int i = 0; i < accountVector.size(); i++)
    {
        Account* count = accountVector[i];
        int boolSavings = count->getType().find("SavingsAccount");
        int boolChecking = count->getType().find("CheckingAccount");

        double withdraw;
        double deposit;

        if(boolSavings != string::npos)
        {
            SavingsAccount* sPtr = dynamic_cast<SavingsAccount*>(count);

            cout << "Specify the amount to deposit: ";
            cin >> deposit;
            sPtr->credit(deposit);
            cout << "Amount deposited: " << deposit << endl;
            sPtr->getBalance();
            cout << "" << endl;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Specify the amount to withdraw: ";
            cin >> withdraw;
            sPtr->debit(withdraw);
            cout << "Amount withdrawn: " << withdraw << endl;
            sPtr->getBalance();
            cout << "" << endl;

            double interestOwed = sPtr->calculateInterest();
            sPtr->credit(interestOwed);
            sPtr->getBalance();
            cout << "" << endl;
//            cout << interestOwed << endl;
        }

        if(boolChecking != string::npos)
        {
            CheckingAccount* cPtr = dynamic_cast<CheckingAccount*>(count);
            cout << "Specify the amount to deposit: ";
            cin >> deposit;
            cPtr->credit(deposit);
            cout << "Amount deposited: " << deposit << endl;
            cPtr->getBalance();
            cout << "" << endl;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Specify the amount to withdraw: ";
            cin >> withdraw;
            if (cPtr->getBalance() < withdraw)
            {
                cout << "Unable to withdraw more than your current balance." << endl;
                break;
            }

            cPtr->debit(withdraw);
            cout << "Amount withdrawn: " << withdraw << endl;
            cPtr->getBalance();
            cout << "" << endl;
        }
    }
}