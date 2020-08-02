/* Linear Search Algorithm */
function linear_search(array,target){
    if(array.length <=0){
        return -1;
    }
    var i;
    for(i=0;i<array.length;i++)
    {
        if(array[i]==target)
        {
          window.print("Element found"); 
          return 0; 
        }
    }
    window.print("Element  not found");
    return -1; 
}

/* Binary Search Algorithm  */


