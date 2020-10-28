#include <iostream>
#include "Employee.h"

Employee :: Employee() {}

Employee :: Employee(string fn, string ln, int salary)
{
    firstName = fn;
    lastName = ln;
    monthlySalary = salary;
}

string Employee:: getfirstName()
{
    return firstName;
}

void Employee :: setfirstName(string name)
{
    firstName = name;
}

string Employee :: getlastName()
{
    return lastName;
}

void Employee :: setlastName(string name)
{
    lastName = name;
}

int Employee :: getmonthlySalary()
{
    return monthlySalary;
}

void Employee :: setmonthlySalary(int salary)
{
    if (salary < 0){
        monthlySalary = 0;
    }
    monthlySalary = salary;

}