

function FindMinOps(arr, n ){
    let j;
    let ans = 0;
    for ( let i = 0; j =n - 1; i <=j){

        if(arr[i] == arr[j]){
            i++;
            j--;
        }else if( arr[i] > arr[j]){
            arr[j] = arr[j + 1];
            ans++;
        }else{
            arr[i] = arr[i -1]
            i++;
            ans++;
        }
    }

}


let arr = [1, 4, 5, 6, 9, 1]

document.write("count of minimum operations is " + FindMinOps(arr, arr.length));

