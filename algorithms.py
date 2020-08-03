

#Linear Search Algorithm

def linear_search(array,target):

    if len(array)==0:
        return -1
        
    for i in range(len(array)):
        if(array[i]==target):
            return i

    return -1 

# Binary Search Algorithm
def binary_search(array, target, length):

    mid =length/2
    first=0
    last= length-1
    if(mid<=0):
        print("Element not found", "\n")
        return -1
    
    while (last!=first+1):
        if(array[mid]==target):
            print("Element found at ",mid,"index \n")
            return 0
        elif( array[mid]>target):
            last=mid
            mid= (last+first)/2
        elif(array[mid]<target):
            first=mid
            mid=(last+first)/2
    print("Element not found \n")
    
    return -1

#Insertion Sort Algorithm 

def insertion_sort(array):
    first=0
    next=first+1

    while (next<=len(array)-1):
        if(array[first]>array[next]):
            temp= array[first]
            array[first]=array[next]
            array[next]=temp
            first=0
            next=first+1
        else:
            first=first+1
            next=first+1
    
    return array


# Bubble Sort Algorithm

def bubble_sort(array, length):
    first = 0
    next = first + 1
    count = 0
    passed = True
        
    while (passed):
        if (array[first] > array[next]):
            temp = array[first]
            array[first] = array[next]
            array[next] = temp
            first = first + 1
            next = first + 1
            count=count+1
            if (next >= length - 1):
                first = 0
                next = first + 1
                count = 0
            else:
                first = first + 1
                next = first + 1
                
                if (next > length - 1 and count!=0):
                    first = 0
                    next = first + 1
                    count = 0
                elif (next > length - 1 and count ==0):
                    passed = False
    
            if (((next > length - 1) and count == 0)):
                passed = False

    return array






