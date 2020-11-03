#include "List.h"
#include <string>
#include <iostream>

List :: List()
{
    Node *nameList = new Node;
    firstNode = nameList;
}

bool List :: add(ItemType item)
{
    if (size == 0)
    {
        Node *newNode = new Node;
        newNode->item = item;
        newNode->next = NULL;

        firstNode = newNode;
        firstNode->next = newNode;
    }
    else
    {
        Node *newNode1 = new Node;

        newNode1->item = item;
        newNode1->next = NULL;

        firstNode[size].item = item;
        firstNode[size].next = NULL;

        firstNode[size - 1].next = newNode1;
    }
    size++;
}

bool List :: add(int Index, ItemType item)
{
    if (size == 0)
    {
        Node *newNode = new Node;
        newNode->item = item;
        newNode->next = NULL;

        firstNode = newNode;
        firstNode->next = newNode;
    }
    else
    {
        size++;
        for (int i = size; i > Index; i--)
        {
            firstNode[i].item = firstNode[i - 1].item;
            firstNode[i].next = NULL;

            firstNode[i - 1].item = "";
            firstNode[i - 1].next = NULL;
            firstNode[i - 1].next = &firstNode[size];
        }
        firstNode[Index].item = item;
        firstNode[Index].next = &firstNode[Index + 1];
    }
}

void List :: remove(int Index)
{
    if (Index == 0)
    {
        firstNode[Index].next = NULL;
        firstNode->next = &firstNode[Index + 1];
    }

    else
    {
        firstNode[Index - 1].next = NULL;
        firstNode[Index - 1].next = &firstNode[Index + 1];
    }
}

int List :: getLength()
{
    cout << "Length of Linked List is: " << size << endl;
}

void List :: print()
{
    for(int i = 0; i < size; i++)
    {
        cout << firstNode[i].item << endl;
    }
}