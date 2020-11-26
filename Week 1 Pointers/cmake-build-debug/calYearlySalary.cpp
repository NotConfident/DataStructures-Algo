#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int calYearlySalary()
{
    Employee employee1("Elon", "Musk", 10000);
    Employee employee2("Tim", "Cook", 900000);

    cout << "Employee 1 Annual Salary: " << employee1.getmonthlySalary() << endl;
    cout << "Employee 2 Annual Salary: " << employee2.getmonthlySalary() << endl;

    employee1.setmonthlySalary(employee1.getmonthlySalary() * 1.1);
    employee2.setmonthlySalary(employee2.getmonthlySalary() * 1.1);

    cout << "Employee 1 Revised Annual Salary: " << employee1.getmonthlySalary() << endl;
    cout << "Employee 2 Revised Annual Salary: " << employee2.getmonthlySalary() << endl;
}



