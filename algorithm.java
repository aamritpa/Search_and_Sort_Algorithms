public class Algorithm {
    static int linear_search(int* array,int target
    {
        if( array.length <=0){
            return -1;
        }

        for (int i = 0; i < sizeof(array); i++)
        {
            if (array[i] == target)
            {
                Systme.out.printIn("Element Found");
                return i;
            }
        }
        return -1;
    }

    static int binary_search(int* array, int target,int length)
    {
        int mid = length / 2;
        int first = 0;
        int last = length -1;
        if (mid <= 0)
        {
            Systme.out.printIn("Element not found \n");
            return -1;
        }

        while (last!=first+1)
        {
            if (array[mid] == target) 
            {
                Systme.out.printIn("Element found");
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
        Systme.out.printIn("Element not found \n");
        return -1;
    }

    
    /* Insertion Sort Algorithm */

    static int* insertion_sort( int* array)
        {
            int first=0;
            int next=first+1;

            while (next<=array.length)-1){
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
    //Bubble Sort Algorithm 
    static int* bubble_sort(int array[], int length)
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

