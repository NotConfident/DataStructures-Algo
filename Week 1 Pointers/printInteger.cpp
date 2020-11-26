#include <iostream>
#include <string>

using namespace std;

int printInteger()
{
    int number;
    int counter = 10000;

    cout << "Enter number:";
    cin >> number;

    while(number > 0)
    {
        cout << number / counter << "   ";
        number = number % counter;
        counter /= 10;
    }
}


