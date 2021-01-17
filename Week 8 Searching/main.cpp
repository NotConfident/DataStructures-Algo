#include <iostream>
#include <string>
using namespace std;
static int comparisons = 0;
int counter = 0;
int size = 0;
int last = 0;

// search for an item in a sorted array using sequential search (Iterative version)
// returns the index of the item in the array if found, otherwise returns -1
int search (int dataArray[], int n, int start, int target)
{
//    for(int i = 0; i < arraySize; i++)
//    {
//        if(dataArray[i] == target)
//        {
//            return i;
//        }
//        comparisons+=1;
//    }

    if(start > n-1)
    {
        return -1;
    }
    else
    {
        if(dataArray[start] == target)
        {
            return start;
        }
        else if(dataArray[start] > target)
        {
            return search(dataArray, n, start+1, target);
        }
    }

}

int first = 0;
int middle = 0;

int binarySearch (int dataArray[], int first, int last, int target)
{
//    while(first <= last)
//    {
//        int middle = (first + last) / 2; //Round down
//        if(dataArray[middle] == target)
//        {
//            comparisons+=1;
//            return middle;
//        }
//        else if (dataArray[middle] > target) // Skips straight to middle instead of iterate from start
//        {
//            last = middle - 1; // If dataArray[middle] more than target, move the index back by one to check if its more
//            comparisons+=1;
//        }          // than or equals or less than target.
//        else
//        {
//            first = middle + 1;// If dataArray[middle] less than target, move the index forward by one to check if its more
//            comparisons+=1;
//        }                      // than or equals or less than target.
//    }

    if(first > last)
    {
        return -1;
    }
    else
    {
        int middle = (first + last) / 2; //Round down
        if(dataArray[middle] == target)
        {
            return middle;
        }
        else if(target < dataArray[middle])
        {
            comparisons+=1;
            return binarySearch(dataArray, first, middle-1, target);
        }
        else
        {
            comparisons+=1;
            return binarySearch(dataArray, middle+1, last, target);
        }
    }
}

int main()
{
    int dataArray[1000] = {};
    int count = 2;

    for(int i = 0; i < 1000; i++)
    {
        dataArray[i] = count;
        count+=2;
    }

    size+=sizeof(dataArray) / sizeof(dataArray[0]);
    last+=size;
    middle+=(first + last) / 2; //Round down

//    for(int i = 0; i < size; i++)
//    {
//        cout << dataArray[i] << endl;
//    }

    int target;
    cout << "Enter number: ";
    cin >> target;

//    if(search(dataArray, size, target) != -1)
//    {
//        cout << "Found! " << comparisons << " Comparisons" << endl;
//    }
//    else
//    {
//        cout << "Not Found! " << comparisons << " Comparisons" << endl;
//    }

    if(binarySearch(dataArray, 0, size, target) != -1)
    {
        cout << "Found! " << comparisons << " Comparisons" << endl;
    }
    else
    {
        cout << "Not Found! " << comparisons << " Comparisons" << endl;
    }
}



