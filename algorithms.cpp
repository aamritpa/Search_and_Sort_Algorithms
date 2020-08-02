#include <iostream>
using namespace std;


/* Linear Search Algorithim*/

int linear_serach(int* array, int target)
{
    if (sizeof(array) == 0)
        return -1;

    for (int i = 0; i < sizeof(array); i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

/* Binary Search Algorithm */
/* Pre condition is that the list is already sorted */

int binary_search(int* array, int target,int length)
{
    int mid = length / 2;
    int first = 0;
    int last = length -1;
    if (mid <= 0)
    {
        cout << "Element not found" << "\n";
        return -1;
    }

    while (last!=first+1)
    {
        if (array[mid] == target) 
        {
            cout << "Element found at " << mid << " index" << "\n";
            return 0;
        }
        else if (array[mid] > target)
        {
            last = mid;
            mid = (last + first) / 2;
        }
        else if (array[mid] < target)
        {
            first = mid;
            mid = (last + first) / 2;
        }
    }
    cout << "Element not found"<<"\n";
    return -1;
}

int main() {
    int array1[10] = {8,20,4,2,16,15,58,68,1,34};
    int array2[10] = {1,3,5,7,9,13,15,26,56,89};
    int search = binary_search(array2,26,10);
    return 0;
}