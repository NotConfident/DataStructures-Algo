#ifndef TUTORIAL_4_STACK_H
#define TUTORIAL_4_STACK_H
#include <iostream>
using namespace std;
typedef string ItemType;

class Stack
{
private:
    struct Node
    {
        ItemType item;
        Node *next;
    };
    int count;
    Node *topNode;

public:
    //Default constructor
    Stack();
    //Destructor
//    ~Stack();

    int reverse(string);
};


#endif //TUTORIAL_4_STACK_H
