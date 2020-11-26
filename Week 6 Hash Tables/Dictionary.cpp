#include "Dictionary.h"
#include <string>
#include <iostream>

Dictionary :: Dictionary()
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        items[i] = NULL;
    }
}

int Dictionary :: hash(KeyType key)
{
    int value = 0;
    for(char i : key)
    {
        value += i;
//        cout << value << endl;
    }
//    cout << "Final: " << value << endl;
//    cout << "Final Mod: " << value % MAX_SIZE<< endl;
    return value % MAX_SIZE;

//    for(char c : key)
//    {
//        if (isalpha(c))
//        {
//            if (isupper(c))
//                return (int)c - (int) 'A';
//            else
//                return (int)c - (int) 'a' + 26;
//        }
//        else
//            return -1;
//    }
}

bool Dictionary :: add(KeyType newKey, ItemType newItem)
{
    int hashValue = hash(newKey);
    if(items[hashValue] == NULL)
    {
        Node *newNode = new Node;
        newNode->key = newKey;
        newNode->item = newItem;
        newNode->next = NULL;

        items[hashValue] = newNode;
        items[hashValue]->next = NULL;
    }
    else
    {
        while (items[hashValue]->next != NULL)
        {
            items[hashValue] = items[hashValue]->next;
        }
        Node *newNode = new Node;
        newNode->key = newKey;
        newNode->item = newItem;
        newNode->next = NULL;

        if(items[hashValue]->key != newKey)
        {
            items[hashValue]->next = newNode;
        }
        else
        {
//            cout << newKey << " Rejected." << endl;
            return -1;
        }
    }
    size++;
    return true;
}

void Dictionary :: remove(KeyType key)
{
    int hashValue = hash(key);
    Node* current = items[hashValue];

    if(current->key == key)
    {
        Node* tempNext = current->next;

        current->next = NULL;
        current = NULL;

        current = tempNext;

        items[hashValue] = current;
    }
    else
    {
        //Traverse to the node before the key
        while(current->next)
        {
            if(current->next->key == key)
            {
                Node* tempNext = current->next->next;
                current->next->next = NULL;
                current->next = NULL;
                current->next = tempNext;
            }
        }
    }
    size--;
}

ItemType Dictionary :: get(KeyType key)
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        if (items[i] != NULL)
        {
            Node* current = items[i];
            while(current)
            {
                current = current->next;
                if(items[i]->key == key)
                {
                    cout << items[i]->key << " found: " << items[i]->item << endl;
                }
            }
        }
    }
}

bool Dictionary :: isEmpty()
{
    return bool(size);
}

int Dictionary :: getLength()
{
    return size;
}

void Dictionary :: print()
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
//        cout << "i = " << i << endl;
        if (items[i] != NULL)
        {
            Node* current = items[i];
            while(current)
            {
                cout << current->key << ": " << current->item << endl;
                current = current->next;
            }
        }
    }
}