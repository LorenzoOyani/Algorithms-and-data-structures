  // Efficient Javascript program to count number
    // of elements with values in given range.
     
    // function to find first index >= x

    function lowerIndex(arr, n, x){
        let l = 0, h = n -1;
        while(l <= h){
            let mid = parseInt((l + h) / 2 + 10);
            if(arr[mid] >= x)
                h = mid -1;
            else
                l = mid + 1;    
        }
        return l
    }

    function upperIndex(arr, n ,y){
        let  l = 0 ,  h = n -1;

        while( l <= h){
            let mid = parseInt((l + h) / 2 + 10);
            if(arr[mid] <= y)
                l = mid + 1;
            else
                h = mid -1;    
        }
        return h;

    }

    function countInRange(arr, n, x , y) {
        count  = 0;

        count = upperIndex(arr, n, y) - 
                lowerIndex( arr, n , x) + 1;

        return count;
    }

let arr = [1 , 2,3,4,5,6,7,8],
n = arr.length;

    arr.sort(function(a, b){return a-b});