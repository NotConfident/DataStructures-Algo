#ifndef WEEK_1_PRACTICAL_2_PERSON_H
#define WEEK_1_PRACTICAL_2_PERSON_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

const int MAX_SIZE = 10;

class Person
{
public:
    Person();
    Person(string, string);
    void setName(string);
    string getName();
    void setTelNo(string);
    string getTelNo();

private:
    string name;
    string telNo;
};


#endif //WEEK_1_PRACTICAL_2_PERSON_H
