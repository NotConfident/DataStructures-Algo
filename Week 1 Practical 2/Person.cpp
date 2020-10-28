#include <iostream>
#include <string>
#include "Person.h"
#include <list>
#include <vector>

using namespace std;

list<Person*> contactList;

Person :: Person()
{
}

Person :: Person(string inputName, string inputTel)
{
    Person :: setName(inputName);
    Person :: setTelNo(inputTel);
}

void Person :: setName(string inputName)
{
    name = inputName;
}

void Person :: setTelNo(string inputTel)
{
    telNo = inputTel;
}

string Person :: getName()
{
    return name;
}

string Person ::getTelNo()
{
    return telNo;
}

