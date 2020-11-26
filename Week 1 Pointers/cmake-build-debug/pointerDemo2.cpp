#include <iostream>
#include <string>

using namespace std;

void changeValue(int x, int* y)
{
    x += 10;
    *y += 10;
}

int pointerDemo2()
{
    int x = 30;
    int* y;

    y = &x;

    cout << "Value of x:" << x << endl;
    cout << "Value of y:" << *y << endl;

    changeValue(x, y);

    cout << "Value of x:" << x << endl;
    cout << "Value of y:" << *y << endl;
}






