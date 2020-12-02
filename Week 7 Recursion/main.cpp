#include <iostream>
using namespace std;

long power (int a, int n)
{
    if (a > 0 && n != 0)
    {
        return a * a + power (a, n - 1); // 2 * 2 = 4, will be stored in function till it break and return the total
    }
}

void printBackward(int array[], int n)
{
    if(n != 0)
    {
        cout << array[n - 1] << endl;
        printBackward(array, n - 1 );
    }
}

int maxArray(int array[], int start, int end)
{
    if(end == start)
    {
        return array[start]; // Returns the individual value
    }
    else
    {
        int temp = (end + start) / 2; // Split till the start and end = 0 ie. A triangle pattern
        return max(maxArray(array, start, temp),  maxArray(array, temp + 1, end)); // Constantly comparing the max as it
                                                                                         // moves up the triangle,
                                                                                         // top of triangle will only have 2 values
                                                                                         // to compare
    }
}

int main()
{
//    cout << power (2, 4) << endl;
    int number[5] = {1, 2, 3, 4, 5};
//    printBackward(number, 5);
//    cout << maxArray(number, 0 , 4) << endl;
}
