#include "List.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "List.h"
#include <list>

List :: List()
{
    size = 0;
}

void List :: View()
{
    for(int i = 0; i < size; i++)
    {
        cout << i + 1 << ")" << endl;
        cout << "Name:" << items[i].getName() << endl;
        cout << "Number: " << items[i].getTelNo() << endl;
        cout << " " << endl;
    }
}

void List :: Add(int index, ItemType item)
{
    items[index] = item;
    size++;
}

void List :: Remove(int index)
{
    items[index - 1].setName("");
    items[index - 1].setTelNo("");

    for(int i = index - 1; i < size; i++)
    {
        items[i] = items[i + 1];
    }
    size--;
}

string List :: Search(string name)
{
    for(int i = 0; i < size; i++)
    {
        if (items[i].getName() == name)
        {
            cout << i + 1 << ")" << endl;
            cout << "Name: " << items[i].getName() << endl;
            cout << "Number: " << items[i].getTelNo() << endl;
            cout << " " << endl;
        }
    }
}