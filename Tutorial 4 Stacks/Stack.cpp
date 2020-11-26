#include "Stack.h"
#include <string>
#include <iostream>
#include <list>

Stack :: Stack()
{
    count = 0;
}

int Stack :: reverse(string input)
{
    Node *current = topNode;

    for(int i = 0; i < input.length(); i++)
    {
        Node *newNode = new Node;
        newNode->item = input[i];
        newNode->next = NULL;

        if(count == 0)
        {
            current = newNode;
        }
        else
        {
            current->next = newNode;
        }
        count++;
    }

    for(int i = count - 1; i >= 0; i--)
    {
        cout << current[i].item << endl;
    }
    cout << endl;
}