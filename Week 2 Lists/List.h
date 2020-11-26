#ifndef WEEK_1_PRACTICAL_2_LIST_H
#define WEEK_1_PRACTICAL_2_LIST_H

#include <iostream>
#include <string>
#include <list>
#include "Person.h"
using namespace std;
typedef Person ItemType;

class List
{
public:
    List();
    void View();
    void Add(int, ItemType);
    void Remove(int);
    string Search(string);

private:
    ItemType items[10];
    int size;
};


#endif //WEEK_1_PRACTICAL_2_LIST_H
