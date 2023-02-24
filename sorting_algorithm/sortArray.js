function sortArray(arr, n){
    let mid = 0,
    low = 0,
    temp = 0,
    high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++
        }else if (arr[mid] == 1){
            mid++;
        }
        else{
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--
        }
    }
}

function printArray(arr, n){
    let i =0
    for(i = 0; i < n; i++){
        document.write(arr[i] + " ")
    }
    document.write("\n");
}


let arr = [0,1, 2, 1, 2, 1,0,0, 1, 2,2];
let n = arr.length;
sortArray(arr, n);
printArray(arr, n);