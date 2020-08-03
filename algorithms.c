#include <stdio.h>
/* Linear Search Algorithim*/
#include <stdbool.h> 

int linear_serach(int* array, int target, int length)
{
    if (length == 0)
        return -1;

    for (int i = 0; i < length; i++)
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
        printf("Element not found \n");
        return -1;
    }

    while (last!=first+1)
    {
        if (array[mid] == target) 
        {
            printf("Element found at index %d\n",mid);
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
    printf("Element not found \n");
    return -1;
}

/* Insertion Sort Algorithm */

int* insertion_sort( int* array , int length)
{
    int first=0;
    int next=first+1;

    while (next<=length-1){
        if(array[first]>array[next]){
            int temp= array[first];
            array[first]=array[next];
            array[next]=temp;
            first=0;
            next=first+1;
        }
        else{
            first=first+1;
            next=first+1;
        }
    }
    return array;
}

/* Bubble Sort Algorithm */

int* bubble_sort(int array[], int length)
{
    int first = 0;
    int next = first + 1;
    int count = 0;
    bool pass = true;
        while (pass) {
            if (array[first] > array[next])
            {
                int temp = array[first];
                array[first] = array[next];
                array[next] = temp;
                first = first + 1;
                next = first + 1;
                count++;
                if (next >= length - 1)
                {
                    first = 0;
                    next = first + 1;
                    count = 0;
                }
            }
            else
            {
                first = first + 1;
                next = first + 1;
                if (next > length - 1 && count!=0)
                {
                    first = 0;
                    next = first + 1;
                    count = 0;
                }
                else if (next > length - 1 && count ==0)
                {
                    pass = false;
                }
            }
            if (((next > length - 1) && count == 0))
            {
                pass = false;
            }
        }
    return array;
}


int main() {
    int array1[10] = {8,20,4,2,16,15,58,68,1,34};
    int array2[10] = {1,3,5,7,9,13,15,26,56,89};
    int search = binary_search(array2,26,10);
    return 0;
}