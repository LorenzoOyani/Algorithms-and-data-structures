// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.



// Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
//Output: 5 6 7 1 2 3 4

let arr = [1, 2, 3,4  ,5,6,7];
 let d =2;
 let n = arr.length;

function rotateArr(arr, n, d) {
   let  temp = new Array(n);
   
 let   k = 0;

   // storing the first n - d element of the arr[];
    // putting it in front of temp;
   for ( let i = d; i < n ; i++ ){
    temp[k] = arr[i];
    k++;
   }

   // storing the first element of d in the arr[]
   for( let i = 0; i < d; i++) {
    temp[k] = arr[i];
    k++
   }

   //print the temp array which stores the result 
   for ( i =0;  i < n;  i++){
    console.log(temp[i] + " ");
   }


}

rotateArr(arr, n, d);

// AMOTHER SOLUTION 

// print the first value of d, and  set it as the last value of the arr using the arr[n -1];
function rotateArrByOne (arr, n, d){

    let p =1;
    while( p <=d){
        let last = arr[0];
        for (let i = 0; i < n; i++){
            arr[i] = arr[i + 1];
        }

        arr[n -1] = last;
        p++
    }

    for(let i =0;  i < n; i++){
        console.log(arr[i] + " ");
    }
}
