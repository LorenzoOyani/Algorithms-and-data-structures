#include <stdio.h>


void insertionSort(int arr[], int size)
{
    int i, j, key;

    for (i = 0; i < size; i ++)
    {
        key = arr[i];
        j = i - 1;

        while( j >=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }


}


void printArr(int arr[],  int n){
    int i;
    for( i =0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {31, 41, 59, 26, 41, 58};

    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("The list of arrays after insertion is: \n");

    printArr(arr, n);
}