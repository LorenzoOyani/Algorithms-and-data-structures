#include <stdio.h>

int swapArray(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int selectionSort(int arr[], int n)
{
    int i, j;
    int indexedArray;

    for (i = 0; i < n - 1; i++)
    {
        indexedArray = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j + 1] < arr[indexedArray])
            {
                indexedArray = j;
            }
            if (indexedArray != i)
            {
                swapArray(&arr[indexedArray], &arr[i]);
            }
        }
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The selceted sort array is : ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2, 1, 0, 5, 8, 7, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The array before selection sort: \n");
    selectionSort(arr, n);
    printf("The array after selection sort: \n");
    printArray(arr, n);
}