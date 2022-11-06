
function swap(arr, xp, yp){
    let temp = arr[xp];
    arr[xp] = arr[yp];
    arr[yp] = temp;
}


function selectionSort(arr, n){

    let mid_index;

    for(let i = 0;  i < n -1; i++){
        mid_index = i;
        
        for( let j =0; j < n; j++){
            if(arr[j] < arr[mid_index])
            {
                mid_index = j;
                swap(arr, mid_index, i);
            }
        }

    }
}

function printArr(arr, n)
{
    for(let i = 0; i<n; i++)
    {
        console.log(arr[i]);
    }
}