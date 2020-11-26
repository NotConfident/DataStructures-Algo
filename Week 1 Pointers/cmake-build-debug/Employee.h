#ifndef WEEK_1_EMPLOYEE_H
#define WEEK_1_EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee();
    Employee(string, string, int);

    string getfirstName();
    void setfirstName(string);

    string getlastName();
    void setlastName(string);

    int getmonthlySalary();
    void setmonthlySalary(int);

private:
    string firstName;
    string lastName;
    int monthlySalary;


};

#endif //WEEK_1_EMPLOYEE_H
