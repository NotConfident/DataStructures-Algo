#ifndef WEEK_5_PRACTICAL_5_QUEUE_H
#define WEEK_5_PRACTICAL_5_QUEUE_H

#pragma once
#include<string>
#include<iostream>
#include <list>
using namespace std;

typedef char ItemType;

class Queue
{
private:
    struct Node
    {
        ItemType item;	// item
        Node     *next;	// pointer pointing to next item
    };

    Node *frontNode;	// point to the first item
    Node *backNode;	// point to the last item

    string Input;
    string reversedInput;

public:
    // constructor
    Queue();

//    ~Queue();

    // enqueue (add) item at the back of queue
    bool enqueue(ItemType item);

    // dequeue (remove) item from front of queue
    bool dequeue();

    // dequeue (remove) and retrieve item from front of queue
    bool dequeue(ItemType &item);

    // retrieve (get) item from front of queue
    void getFront(ItemType &item);

    // check if the queue is empty
    bool isEmpty();

    // display items in queue from front to back
    void displayItems();

    string reverse(string);
};
#endif //WEEK_5_PRACTICAL_5_QUEUE_H
