#include <stdio.h>
#include <math.h>


void insertionSort(int arr[], int size)
{
    int i, j, elem;
    for ( i =1; i < size; i++)
    {
        elem = arr[i];
        j  = i -1;
    

    while(j >=0 && arr[j] > elem){
        arr[j + 1] = arr[j];
        j = j -1;
    }
    arr[j + 1] = elem;

    }
}

void printArray(int arr[], int size)
{
    int i;
    for ( i =0; i < size;  i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] =  {8,4,5,2,3,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    printArray(arr,n);
}