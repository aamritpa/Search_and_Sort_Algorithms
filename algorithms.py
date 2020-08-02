

#Linear Search Algorithm

def linear_search(array,target):

    if len(array)==0:
        return -1
        
    for i in range(len(array)):
        if(array[i]==target):
            return i

    return -1 

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