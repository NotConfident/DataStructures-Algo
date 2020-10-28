#include <iostream>
#include <string>

using namespace std;

int pointerDemo()
{
    int value1 = 200000;
    int value2;
    int* ptr;

    ptr = &value1;
    cout << "Pointer value is: " << *ptr << endl;

    value2 = *ptr;
    cout << "Value 2 value is: " << value2 << endl;

    cout << "Value 1 address is: " << &value1 << endl;

    cout << "Value 2 address is: " << &value2 << endl;

    cout << "Pointer address is: " << ptr << endl;

    ptr = &value2;

    *ptr += 200;

    cout << "Value 1 value is: " << value1 << endl;

    cout << "Value 2 value is: " << value2 << endl;


}
