#include <stdio.h>

int binarySearch(int arr[], int item, int low, int high)
{
    if(high <=low)
        return (item > arr[low])? (low + 1) : low;

    int mid = (low + high ) / 2;

    if( item == arr[mid])
        return mid + 1;

    if(item > arr[mid])
        return binarySearch(arr, item, mid + 1, high);

    return binarySearch(arr, item, low, mid -1);           
}


void insertionSort(int *arr, int size)
{
    int i, j, selected, location;

    for ( i = 1; i < size; i++)
    {
        selected = arr[i];
        j = i -1;

        location = binarySearch(arr, selected, 0 , j);
        while(j >=location)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+ 1] = selected;
    }
}

int main()
{
    int i;
    int arr[] = {37,23,0,17,12,72,31,46,100,88,54};

    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("Sorted array is: \n");
    for ( i =0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return (0);
}