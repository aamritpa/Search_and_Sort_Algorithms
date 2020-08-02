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
}

