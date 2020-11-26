#include "Queue.h"
#include <string>
#include <iostream>
#include <list>

Queue :: Queue()
{

}

bool Queue ::enqueue(ItemType item)
{
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if(frontNode == NULL || frontNode->item == NULL)
    {
        frontNode = newNode;
        frontNode->next = NULL;
    }
    else
    {
        Node *current = frontNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    backNode = newNode;
}

// pop item from top of Queue
bool Queue ::dequeue()
{
    Node *current = frontNode;

    current = frontNode->next;
    delete (current);
    cout << current->item << endl;
}

// retrieve and pop item from top of Queue
bool Queue::dequeue(ItemType &item)
{

}


// retrieve item from top of Queue
void Queue ::getFront(ItemType &item)
{
    Node *current = frontNode;
    cout << current->item << endl;
}

// check if the Queue is empty
bool Queue :: isEmpty()
{
    return true;
}

void Queue :: displayItems()
{
    Node *current = frontNode;
    while (current->next != NULL)
    {
        cout << current->item << endl;
        current = current->next;
    }
}

string Queue :: reverse(string input)
{
    string reversed;
    string trueFalse;
    Node *current = frontNode;

    for(int i = 0; i < input.length(); i++)
    {
        Node *newNode = new Node;
        newNode->item = input[i];
        newNode->next = NULL;

        if(current == NULL)
        {
            current = newNode;
        }
        else
        {
            current->next = newNode;
        }
    }

    for(int i = input.length() - 1; i >= 0; i--)
    {
//        cout << current[i].item << endl;
        reversed += current[i].item;
    }
//    cout << "Reversed string: " << reversed << endl;
    if (bool(input == reversed) == 1)
    {
        trueFalse += "True";
    }
    else
    {
        trueFalse += "False";
    }
    cout << "Pangoline: " << trueFalse << endl;
}

