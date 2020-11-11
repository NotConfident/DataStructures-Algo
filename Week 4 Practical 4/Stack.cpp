#include "Stack.h"
#include <string>
#include <iostream>
#include <list>

Stack :: Stack()
{
    count = 0;
}

bool Stack :: isEmpty()
{
    return true;
}

bool  Stack :: push(ItemType &item)
{
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if(topNode == NULL)
    {
        topNode = newNode;
        topNode->next = NULL;
        count++;
    }
    else
    {
        Node *current = topNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        count++;
    }
}

bool  Stack :: pop()
{
    Node *current = topNode;
    if(count == 1)
    {
        current = topNode->next;
        delete (current);
    }
    else
    {
        for(int i = 0; i < count - 1; i++)
        {
            current = current->next;
        }
        delete(current);
    }
    count--;
}

bool Stack :: pop(ItemType &item)
{
}

void Stack :: getTop(ItemType &item)
{
    item = topNode->item;
    cout << item << endl;
}

void Stack :: displayInOrderOfInsertion()
{
    Node *current = topNode;
    for(int i = 0; i < count; i++)
    {
        cout << current[i].item << endl;
    }
    cout << endl;
}

void Stack :: displayInOrder()
{
    Node *current = topNode;
    for(int i = count - 1; i >= 0; i--)
    {
        cout << current[i].item << endl;
    }
    cout << endl;
}

string Stack :: reverse(string input)
{
    cout << "Hi";
}
