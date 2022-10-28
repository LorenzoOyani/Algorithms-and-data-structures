
//Rearrange array such that even index elements are smaller and 
// odd index elements are greater;


/* 
The psuedo code is this:
step 1: At i =  0; arr[i] = 2 and arr[i + 1] = 3. A s i is even and arr[i] < arr[i + 1], dont need to swapp

second step: 
At i = 1, arr[i] = 3  and arr[ i + 1] = 4. As i is odd and arr[i] < arr[i + 1], swap them.
mow arr[] = {2,4,5,6} for example.
third step:
At i = 2, arr[i]  =3 and arr[i + 1] = 5 . so dont need to swap them.

*/

let rearrange =  (arr, n)=>{
    for (let i = 0; i < n -1; i++){
        if ( i % 2 == 0 && arr[i] < arr[i + 1]){
            let temp =  arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        if( i % 2 !=0 && arr[i] < arr[i + 1]){
            let temp = arr[i];
            arr[i] = arr [i + 1];
            arr[ i + 1] = temp;
        }
    }
    
}

let printArr = (arr, size)=>{
    
    let ans = '';
    for( let i = 0; i < size; i++)
    {
        ans += arr[i] + " ";
    }
    console.log(ans);

}

let arr = [6 ,2 ,1, 8 ,3];
let n  = arr.length;

printArr(arr, n);
rearrange(arr, n)