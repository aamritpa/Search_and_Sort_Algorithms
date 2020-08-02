
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
           console.log("Element found at ", i); 
          return 0; 
        }
    }
    alert("Element  not found");
    return -1; 
}

/* Binary Search Algorithm  */

function binary_search(array,target){

    var mid = array.length / 2;
    var first = 0;
    var last = array.length -1;
    if (mid <= 0)
    {
        console.log("Element not found"); 
        return -1;
    }

    while (last!=first+1)
    {
        if (array[mid] == target) 
        {
            console.log("Element foundat ", mid); 
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
    console.log("Element not found"); 
    return -1;
}

var array2 = [1,3,5,7,9,13,15,26,56,89];
var search = binary_search(array2,26,10);
