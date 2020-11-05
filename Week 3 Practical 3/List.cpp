#include "List.h"
#include <string>
#include <iostream>

List :: List()
{
    firstNode == NULL;
    size = 0;
}

List :: ~List()
{
}

bool List :: add(ItemType item)
{
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if (firstNode == NULL)
    {
        firstNode = newNode;
        firstNode->next = NULL;
    }

    else
    {
        Node *current = firstNode;
        while(current->next != NULL)
        {
            current = current->next; // Traverse to the last node
        }
        current->next = newNode;
    }
    size++;
    return true;
}

bool List :: add(int Index, ItemType item)
{
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if (firstNode == NULL)
    {
        firstNode = newNode;
        firstNode->next = NULL;
    }
    else
    {
        size++;
        Node *current = firstNode;
        for (int i = 0; i > Index - 1; i++)
        {
            current = current->next;
        }
        current[Index - 1].next = newNode;
        newNode->next = &current[Index];
    }
    return true;
}

void List :: remove(int Index)
{;
    Node *current = firstNode;
    if(Index == 0)
    {
        firstNode = current->next;
        size--;
    }
    else
    {
        for (int i = 0; i < Index - 1; i++)
        {
            current = current->next;
        }
        current->next = current->next->next;
        size--;
    }
}

bool List :: isEmpty()
{
    if (size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ItemType List :: get(int index)
{
    Node temp = firstNode[index];
    cout << temp.item << endl;
}

int List :: getLength()
{
    cout << "Length of Linked List is: " << size << endl;
}

void List :: print()
{
    Node *current = firstNode;
    while(current != NULL)
    {
        cout << current->item << endl;
        current = current->next;
    }
}