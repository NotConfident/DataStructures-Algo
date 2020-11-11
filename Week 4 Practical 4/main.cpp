#include <iostream>
#include "Stack.h"

int main()
{
    int *ptr;
    int three = 3;
    ptr = &three;

    int *ptr1;
    int four = 4;
    ptr1 = &four;

    int *ptr2;
    int five = 5;
    ptr2 = &five;

    Stack s;
    s.push(*ptr);
    s.push(*ptr1);
    s.push(*ptr2);

//    s.displayInOrder();
    s.displayInOrderOfInsertion();

//    int number;
//    s.getTop(number);
    s.pop();

//    s.displayInOrder();
    s.displayInOrderOfInsertion();
}
