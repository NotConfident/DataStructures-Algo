#include <iostream>
#include "Queue.h"

int main() {
    Queue q;
    q.enqueue('a');
    q.enqueue('c');

    char temp;
    q.getFront(temp);

    cout << temp << endl;
    q.dequeue();

    q.displayItems();
    string input;
    cout << "Enter Input: ";
    cin >> input;

    for(int i = 0; i < input.length() + 1; i++)
    {
        q.enqueue(input[i]);
    }
    q.displayItems();
    cout << endl;
    q.reverse(input);

}
