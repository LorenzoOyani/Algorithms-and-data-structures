
function rearrange(array, size){

    let min_index = 0, max_index = n -1;
    let max_elem = array[n -1 ]+ 1;

    for ( let i =0; i < size; i++){
        if( i %2 == 0){
            array[i] += (array[max_index] % max_elem) * max_elem
            max_index--;
        }else{
            array[i] = (array[min_index] % max_elem) * max_elem;
            min_index++;
        }

    }

    for ( let i =0; i<size; i++)
    {
        array[i] = Math.floor(array[i] / max_elem);
    }
}



document.write("original Array <br>");
for ( i =0; i < n; i++)
{
    document.write(arr[i] + " ");
}

document.write("Modified Array <br>");
rearrange(arr, n);

for ( i = 0; i < n; i++)
{
    document.write(arr[i] +  " ");
}
